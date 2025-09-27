cmake_minimum_required(VERSION 3.16)
project(RandomGenerators CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Quellcode-Dateien
set(SOURCES
        main.cpp
        Benchmark.cpp
        BlumBlumShub.cpp
        MiddleSquare.cpp
        Xorshift.cpp
)

# Header-Dateien (nur für IDEs sichtbar)
set(HEADERS
        Benchmark.h
        BlumBlumShub.h
        MiddleSquare.h
        RandomNumberGenerator.h
        Xorshift.h
)

# Executable erstellen
add_executable(RandomGenerators ${SOURCES} ${HEADERS})