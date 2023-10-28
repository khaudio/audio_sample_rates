#!/usr/bin/env python

'''
Copyright (c) 2023 K Hughes Production LLC

Generates C++ header files for common
audio sample rates to be used with common
video frame rates, particularly
for timing corrections via reinterpretation.
'''

import itertools

topLevelFilename = 'audiosamplerates.h'
macroFilename = 'inc/audiosampleratemacros.h'
constValuesFilename = 'inc/audiosamplerateconstvalues.h'
arrayFilename = 'inc/audiosampleratearray.h'

# Datatype used to define sample rates
datatype = 'uint32_t'

# Align definitions at specified number of spaces
definitionSpaceIndex = 61

# Section header line length
headerLineLen = 78
docstringBorderLen = headerLineLen - 1

samplerates = [
        8000,
        11025,
        16000,
        22050,
        32000,
        44100,
        48000,
        88200,
        96000,
        176400,
        192000,
        384000
    ]

framerates = [
        ('23.98 fps', (24000/1001)),
        ('24 fps', 24),
        ('25 fps', 25),
        ('29.97 fps', (30000/1001)),
        ('30 fps', 30)
    ]


docAndLicense = f'''/{"*" * docstringBorderLen}
Definitions for common audio sample rates for use with
common video frame rates, particularly for
timing corrections via reinterpretation.

MIT License

Copyright (c) 2023 K Hughes Production LLC

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
{"*" * docstringBorderLen}/

'''

def round_ratio(ratio):
    if (0 <= (abs(ratio) - 0.099) <= 0.01):
        return -0.1 if (ratio < 0) else 0.1
    return round(ratio, 5)


def ntsc_or_pal(framerate: int):
    return 'PAL' if framerate == 25 else 'NTSC'


def framerate_upper_name(framerate: str):
    return framerate.replace('.', '_').replace(' ', '_').upper()


def framerate_camel_case_name(framerate: str):
    return framerate.replace('.', '').replace(' ', '').replace('fps', 'Fps')


def convert_sample_rate(baseSampleRate, framerateIn, framerateOut):
    correctedSampleRate = baseSampleRate * (framerateIn[1] / framerateOut[1])
    roundedInteger = round(correctedSampleRate)

    ratio1 = (baseSampleRate / roundedInteger)
    ratio2 = (roundedInteger / baseSampleRate)
    
    pullup = (ratio1 >= 1.0)
    
    ratio1 = round_ratio((ratio1 - 1.0) * 100)
    ratio2 = round_ratio((ratio2 - 1.0) * 100)
    ratioStr = f'{ratio1}% Pullup' if pullup else f'{ratio2}% Pulldown'

    macroDefine = (
            f'#define SAMPLE_RATE_{baseSampleRate}_PULL'
            + ('UP_' if pullup else 'DOWN_')
            + f'{framerate_upper_name(framerateIn[0])}'
            + '_TO_'
            + f'{framerate_upper_name(framerateOut[0])}'
        )
    numSpacesToDefinition = definitionSpaceIndex - len(macroDefine)

    constexprValues = (
            f'sampleRate{baseSampleRate}'
            + f'Pull{"up" if pullup else "down"}'
            + framerate_camel_case_name(framerateIn[0])
            + 'To'
            + framerate_camel_case_name(framerateOut[0])
        )

    docstring = (
            f'/{"*" * docstringBorderLen}\n'
            + f'{framerateIn[0]} ({ntsc_or_pal(framerateIn[1])}) '
            + f'to {framerateOut[0]} ({ntsc_or_pal(framerateOut[1])})'
            + f'; {ratioStr}\n'
            + f'{baseSampleRate} Hz to {roundedInteger} Hz '
            + f'({round(correctedSampleRate, 5)})\n'
            + f'{"*" * docstringBorderLen}/\n\n'
        )

    macro = macroDefine + (' ' * numSpacesToDefinition)

    return docstring, macro, constexprValues, roundedInteger


if __name__ == '__main__':
    with open(macroFilename, 'w') as mFile:
        with open(constValuesFilename, 'w') as cFile:
            with open(arrayFilename, 'w') as aFile:

                topLevelName = 'AUDIOSAMPLERATES_H'
                macroName = 'AUDIOSAMPLERATEMACROS_H'
                constValuesName = 'AUDIOSAMPLERATECONSTVALUES_H'
                arrayName = 'AUDIOSAMPLERATEARRAY_H'

                mFile.write(docAndLicense)
                cFile.write(docAndLicense)
                aFile.write(docAndLicense)

                mFile.write(f'#ifndef {macroName}\n#define {macroName}\n\n')
                cFile.write(f'#ifndef {constValuesName}\n#define {constValuesName}\n\n')
                aFile.write(f'#ifndef {arrayName}\n#define {arrayName}\n\n')

                cFile.write(f'#include <cstdint>\n\n')
                aFile.write(f'#include <cstdint>\n#include <array>\n\n')

                cFile.write('namespace AudioSampleRate\n{\n\n')
                aFile.write('namespace AudioSampleRate\n{\n\n')

                aFile.write(f'constexpr const std::array<{datatype}, 252> validSampleRates')
                aFile.write(' = {\n')

                for samplerate in samplerates:
                    baseRateName = f'{samplerate} Hz'
                    dashesPerSide = (headerLineLen - (len(baseRateName) + 8)) / 2
                    addOneDash = dashesPerSide != int(dashesPerSide)
                    dashesPerSide = int(dashesPerSide)
                    header = (
                            f'/* {"-" * dashesPerSide} {baseRateName} '
                            f'{("-" * dashesPerSide) + "-" * addOneDash} */'
                        )

                    mFile.write(f'{header}\n\n')
                    cFile.write(f'{header}\n\n')

                    baseDefinition = f'#define SAMPLE_RATE_{samplerate}'
                    numSpaces = definitionSpaceIndex - len(baseDefinition)
                    declarationPreface = 'constexpr const {datatype} '

                    mFile.write(
                            f'{baseDefinition}'
                            + (' ' * numSpaces)
                            + f'{samplerate}\n\n'
                        )
                    cFile.write(
                            f'{declarationPreface}sampleRate{samplerate} = '
                            + f'{samplerate};\n\n'
                        )
                    aFile.write(f'{" " * 8}{samplerate},\n')

                    for i in itertools.permutations(framerates, 2):
                        docstring, macro, typedef, roundedInteger = (
                                convert_sample_rate(samplerate, i[0], i[1])
                            )

                        mFile.write(docstring)
                        mFile.write(macro)
                        mFile.write(str(roundedInteger))
                        mFile.write('\n\n')
                        
                        cFile.write(docstring)
                        cFile.write(declarationPreface)
                        cFile.write(typedef)
                        cFile.write(f' = {roundedInteger};\n\n')

                        aFile.write(f'{" " * 8}{roundedInteger},\n')

                cFile.write('};\n\n')
                aFile.write('    };\n\n};\n\n')

                mFile.write(f'#endif\n')
                cFile.write(f'#endif\n')
                aFile.write(f'#endif\n')

    with open(topLevelFilename, 'w') as tlf:
        tlf.write(docAndLicense)
        tlf.write(
                f'#ifndef {topLevelName}\n#define {topLevelName}\n\n'
                + f'#include "{macroFilename}"\n'
                + f'#include "{constValuesFilename}"\n'
                + f'#include "{arrayFilename}"\n\n'
                + '#endif'
            )

