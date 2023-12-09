#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;

private:
    Block GetRandomBlock();
    void MoveBlockLeft();
    void MoveBlockRight();
    std::vector<Block> GetAllBlocks();
    bool IsBLockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared,int moveDownPoints);
    std::vector<Block> blocks;
    Grid grid;
    Block currentBlock;
    Block nextBlock;
};