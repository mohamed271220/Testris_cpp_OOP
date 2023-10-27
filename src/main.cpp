#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"
int main()
{
    // Colors are defined as structs with RGB values{ R, G, B, A }
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "Tetris"); // Initialization
    SetTargetFPS(60);               // Set target FPS to 60

    Grid grid = Grid(); //   create a grid object

    // hardcoded tests
    // grid.grid[0][0] = 1;
    // grid.grid[4][4] = 5;
    // grid.grid[2][6] = 6;
    // grid.grid[3][5] = 4;

    lBlock block = lBlock();

    grid.Print(); // call the print function

    while (WindowShouldClose() == false) // Detect window close button or ESC key
    {
        BeginDrawing();            // Starts the canvas
        ClearBackground(darkBlue); // Clears the canvas with a color
        grid.Draw();               // call the draw function
        block.Draw();
        EndDrawing();              // Ends the canvas
    }
    CloseWindow(); // Close window

    return 0;
}