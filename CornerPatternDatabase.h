//
// Created by maana on 21-07-2024.
//

#ifndef CORNERPATTERNDATABASE_H
#define CORNERPATTERNDATABASE_H



#include "GenericRubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef GenericRubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const GenericRubiksCube& cube) const;

};



#endif //CORNERPATTERNDATABASE_H
