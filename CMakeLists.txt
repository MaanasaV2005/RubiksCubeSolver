cmake_minimum_required(VERSION 3.28)
project(RubiksCubeSolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubiksCubeSolver main.cpp
        GenericRubiksCube.cpp
        GenericRubiksCube.h
        RubiksCube3Darray.cpp
        RubiksCube1DArray.cpp
        RubiksCubeBitboard.cpp
        DFSsolver.h
        BFSsolver.h
        IDDFSsolver.h
        IDAstarsolver.h
        NibbleArray.cpp
        NibbleArray.h
        PatternDatabase.cpp
        PatternDatabase.h
        Math.cpp
        Math.h
        PermutationIndexer.h
        CornerPatternDatabase.cpp
        CornerPatternDatabase.h
        CornerDBMaker.cpp
        CornerDBMaker.h
)
