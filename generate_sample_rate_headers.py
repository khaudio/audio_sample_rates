#!/usr/bin/env python

import itertools

topLevelFilename = 'audiosamplerates.h'
macroFilename = 'inc/audiosampleratemacros.h'
constValuesFilename = 'inc/audiosamplerateconstvalues.h'

# Align definitions at specified number of spaces
definitionSpaceIndex = 61

# Section header line length
headerLineLen = 77

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

    typedef = (
            f'sampleRate{baseSampleRate}'
            + f'Pull{"up" if pullup else "down"}'
            + framerate_camel_case_name(framerateIn[0])
            + 'To'
            + framerate_camel_case_name(framerateOut[0])
        )

    docstring = (
            f'/{"*" * 39}'
            + f'\n{framerateIn[0]} ({ntsc_or_pal(framerateIn[1])}) '
            + f'to {framerateOut[0]} ({ntsc_or_pal(framerateOut[1])})\n'
            + f'{roundedInteger} ({round(correctedSampleRate, 5)})\n'
            + f'({baseSampleRate} to {roundedInteger}; {ratioStr})\n'
            + f'{"*" * 39}/\n\n'
        )

    macro = macroDefine + (' ' * numSpacesToDefinition)

    return docstring, macro, typedef, roundedInteger


if __name__ == '__main__':
    with open(macroFilename, 'w') as mFile:
        with open(constValuesFilename, 'w') as tFile:

            topLevelName = 'AUDIOSAMPLERATES_H'
            macroName = 'AUDIOSAMPLERATEMACROS_H'
            constValuesName = 'AUDIOSAMPLERATECONSTVALUES_H'
            
            mFile.write(f'#ifndef {macroName}\n#define {macroName}\n\n')
            tFile.write(f'#ifndef {constValuesName}\n#define {constValuesName}\n\n')
            tFile.write(f'#include <cstdint>\n\n')

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
                tFile.write(f'{header}\n\n')

                baseDefinition = f'#define SAMPLE_RATE_{samplerate}'
                numSpaces = definitionSpaceIndex - len(baseDefinition)
                declarationPreface = 'constexpr const uint32_t '

                mFile.write(
                        f'{baseDefinition}'
                        + (' ' * numSpaces)
                        + f'{samplerate}\n\n'
                    )
                tFile.write(
                        f'{declarationPreface}sampleRate{samplerate} = '
                        + f'{samplerate};\n\n'
                    )

                for i in itertools.permutations(framerates, 2):
                    docstring, macro, typedef, roundedInteger = (
                            convert_sample_rate(samplerate, i[0], i[1])
                        )
                    
                    mFile.write(docstring)
                    mFile.write(macro)
                    mFile.write(str(roundedInteger))
                    mFile.write('\n\n')
                    
                    tFile.write(docstring)
                    tFile.write(declarationPreface)
                    tFile.write(typedef)
                    tFile.write(f' = {roundedInteger};\n\n')
            
            mFile.write(f'#endif\n')
            tFile.write(f'#endif\n')

    with open(topLevelFilename, 'w') as tlf:
        tlf.write(
                f'#ifndef {topLevelName}\n#define {topLevelName}\n\n'
                + f'#include "{macroFilename}"\n'
                + f'#include "{constValuesFilename}"\n\n'
                + '#endif'
            )

