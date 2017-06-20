cmake_minimum_required(VERSION 3.7)

project(MathLib)

set(SRC_APP
    mathlib.cpp
    Matrix.cpp
    stdafx.cpp
    stdafx.h
    Vector.cpp
    Wiskunde.cpp
    )

add_library(MathLib 
    ${SRC_APP}
    )

target_compile_features(MathLib
    PRIVATE cxx_auto_type
    PRIVATE cxx_nullptr
    PRIVATE cxx_range_for
    )
