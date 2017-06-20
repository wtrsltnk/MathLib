cmake_minimum_required(VERSION 3.7)

project(MathLib)

add_library(MathLib SHARED
    Matrix.cpp
    mathlib.h
    stdafx.cpp
    stdafx.h
    Vector.cpp
    Wiskunde.cpp
    )

target_compile_features(MathLib
    PRIVATE cxx_auto_type
    PRIVATE cxx_nullptr
    PRIVATE cxx_range_for
    )

target_compile_definitions(MathLib
    PRIVATE MATHLIB_EXPORTS
    )
