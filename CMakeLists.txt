cmake_minimum_required(VERSION 3.10)

add_library(audio_sample_rates INTERFACE)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CXX_EXTENSIONS ON)
set(audio_sample_rates_VERSION_MAJOR 0)
set(audio_sample_rates_VERSION_MINOR 9)
set(VERSION {audio_sample_rates_VERSION_MAJOR}.{audio_sample_rates_VERSION_MINOR})

configure_file(inc/cmakeconfig.h.in inc/cmakeconfig.h)

target_include_directories(audio_sample_rates
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)
