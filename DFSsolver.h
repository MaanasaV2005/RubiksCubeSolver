//
// Created by maana on 21-07-2024.
//
#pragma once

#include<bits/stdc++.h>
#include "GenericRubiksCube.h"

#ifndef DFSSOLVER_H
#define DFSSOLVER_H

// Typename T: RubiksCube Representation used (3d, 1d, Bitboard)
// Typename H: Corresponding Hash function

template<typename T, typename H>

class DFSsolver {
private:

    vector<GenericRubiksCube::MOVE> moves;
    int max_search_depth;

    //    DFS code to find the solution (helper function)
    bool dfs(int dep) {
        if (rubiksCube.isSolved()) return true;
        if (dep > max_search_depth) return false;
        for (int i = 0; i < 18; i++) {
            rubiksCube.move(GenericRubiksCube::MOVE(i));
            moves.push_back(GenericRubiksCube::MOVE(i));
            if (dfs(dep + 1)) return true;
            moves.pop_back();
            rubiksCube.invert(GenericRubiksCube::MOVE(i));
        }
        return false;
    }

public:
    T rubiksCube;

    DFSsolver(T _rubiksCube, int _max_search_depth = 8) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<GenericRubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }

};

#endif //DFSSOLVER_H
