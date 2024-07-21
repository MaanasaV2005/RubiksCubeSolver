//
// Created by maana on 21-07-2024.
//

#ifndef IDDFSSOLVER_H
#define IDDFSSOLVER_H

#include<bits/stdc++.h>
#include "GenericRubiksCube.h"
#include "DFSsolver.h"


template<typename T, typename H>
class IDDFSsolver {

private:
    int max_search_depth;
    vector<GenericRubiksCube::MOVE> moves;

public:
    T rubiksCube;

    IDDFSsolver(T _rubiksCube, int _max_search_depth = 7) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    //    Used DFSSolver with increasing max_search_depth
    vector<GenericRubiksCube::MOVE> solve() {
        for (int i = 1; i <= max_search_depth; i++) {
            DFSsolver<T, H> dfsSolver(rubiksCube, i);
            moves = dfsSolver.solve();
            if (dfsSolver.rubiksCube.isSolved()) {
                rubiksCube = dfsSolver.rubiksCube;
                break;
            }
        }
        return moves;
    }
};

#endif //IDDFSSOLVER_H
