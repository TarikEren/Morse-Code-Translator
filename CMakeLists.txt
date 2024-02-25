cmake_minimum_required(VERSION 3.22)
project(morse_code_translator)

set(CMAKE_CXX_STANDARD 17)

add_executable(morse_code_translator main.cpp
        Alphabet.hpp
        Alphabet.cpp)
