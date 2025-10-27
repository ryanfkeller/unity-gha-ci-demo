cmake_minimum_required(VERSION 3.28.3)
project("Unity GHA CI Demo")

include(CTest)

add_subdirectory(src)
add_subdirectory(submodules/external/unity_cmake)
add_subdirectory(tests)
