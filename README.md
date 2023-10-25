# audio_sample_rates

Provides definitions for common audio sample rates and conversion rates when re-timing is needed, particularly for dual-system sync with video.

There are two header files.  One is C-style macros.  The other is constexpr C++ variables in namespace `AudioSampleRate`.  You can include both by including the top level header `audiosamplerates.h`, or pick one.

There is documentation in each file if you aren't sure which definition you need.
