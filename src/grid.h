#pragma once
#include <vector>
#include <raylib.h>
// .h is used for the declaration of a class or function
class Grid
{
public:
    Grid();
    int grid[20][10];
    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRows();
 

private:
    int numRows;
    int numCols;
    int cellSize;
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    std::vector<Color> colors;
};