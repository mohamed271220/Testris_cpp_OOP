#include <raylib.h>
#include "game.h"
#include "colors.h"
#include <iostream>

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    if (GetTime() - lastUpdateTime > interval)
    {
        lastUpdateTime = GetTime();
        return true;
    }
    return false;
}

int main()
{
    InitWindow(500, 620, "Tetris"); // Initialization
    SetTargetFPS(60);               // Set target FPS to 60
    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
    Game game = Game();
    while (WindowShouldClose() == false) // Detect window close button or ESC key
    {
        game.HandleInput();
        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }
        BeginDrawing();            // Starts the canvas
        ClearBackground(darkBlue); // Clears the canvas with a color
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE);
        if (game.gameOver)
        {
            DrawTextEx(font, "GAME OVER", {320, 450}, 38, 2, WHITE);
        }
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);

        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);


        DrawTextEx(font, scoreText, {320+(170-textSize.x)/2, 65}, 38, 2, WHITE);
        DrawRectangleRounded({320, 220, 170, 180}, 0.3, 6, lightBlue);
        game.Draw();
        EndDrawing(); // Ends the canvas
    }
    CloseWindow(); // Close window

    return 0;
}