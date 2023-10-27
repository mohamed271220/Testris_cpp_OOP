#pragma once
#include <vector>
#include <raylib.h>
// .h is used for the declaration of a class or function
class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[20][10];
    // adding a vector to hold the colors
    // a vector is a dynamic array that can grow and shrink


private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};