cmake_minimum_required(VERSION 4.0)
project(rosalind)

set(CMAKE_CXX_STANDARD 20)

add_executable(rosalind rosalind/main.cpp
        rosalind/dna.cpp
        rosalind/dna.h
        rosalind/sequence.cpp
        rosalind/sequence.h
        rosalind/revcomp.cpp
        rosalind/revcomp.h
        rosalind/translation.cpp
        rosalind/translation.h
        rosalind/protein.cpp
        rosalind/protein.h
        rosalind/fibonacci.cpp
        rosalind/fibonacci.h
        rosalind/deadRabbits.cpp
        rosalind/deadRabbits.h
        rosalind/solution.cpp
        rosalind/solution.h
        rosalind/proteinMass.cpp
        rosalind/proteinMass.h
        rosalind/hamming.cpp
        rosalind/hamming.h)
