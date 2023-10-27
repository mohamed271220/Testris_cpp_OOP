#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block
{
public:
    Block();
    int id;
    void Draw();
    // map : key-value pairs in a sorted order based on the keys.
    // vector:  stores a dynamic array of elements
    std::map<int, std::vector<Position>> cells;

private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
};