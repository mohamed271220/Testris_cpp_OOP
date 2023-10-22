#include <raylib.h>

int main()
{
    // Colors are defined as structs with RGB values{ R, G, B, A }
    Color darkBlue={44,44,127,255}


    InitWindow(300, 600, "Tetris"); // Initialization
    SetTargetFPS(60);               // Set target FPS to 60


    while (WindowShouldClose() == false) // Detect window close button or ESC key
    {
        BeginDrawing(); // Starts the canvas
        ClearBackground(darkBlue); // Clears the canvas with a color
        


        EndDrawing(); // Ends the canvas
    }
    CloseWindow(); // Close window

    return 0;
}