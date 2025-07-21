cmake_minimum_required(VERSION 3.20)
project(codeforces)

set(CMAKE_CXX_STANDARD 17)

file(GLOB ALL_CPP_FILES "*.cpp")

foreach(file ${ALL_CPP_FILES})
    get_filename_component(exe_name ${file} NAME_WE)
    add_executable(${exe_name} ${file})
endforeach()

