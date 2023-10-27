#include "block.h"

Block::Block()
{
    // all the attributes the will be inherited from the block class
    this->cellSize = 30;
    this->rotationState = 0;
    this->colors = GetCellColors();
}

void Block::Draw()
{
    std::vector<Position> tiles = cells[rotationState];
    for (Position item : tiles)
    {
        DrawRectangle(item.column * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
    }
}