#include <iostream>
#include <raylib.h> // the library that will be used to make the game

using namespace std;

// color structs
Color green = {173, 204, 96, 255};
Color darkGreen = {53, 51, 24, 255};

int cellSize = 30;
int cellCount = 25;

// Food class
class Food
{
public:
    Vector2 position;  // Vector2 is a struct built-in the library that has two floats x and y
    Texture2D texture; // Texture2D is a type of variable that represents an image loaded into graphics

    // we would need a contractor to initialize the position of the food and the photo of the food(/Images/food.png)
    Food()
    {
        Image image = LoadImage("Images/food.png"); // Another built-in function that loads the image from the path by loading data struct contains the pixel data of the graphical image
        texture = LoadTextureFromImage(image);      // load the texture from the image
        UnloadImage(image);                         // unload the image from the memory
        position = GenerateRandomPos();
    }

    // we would need a destructor to unload the texture from the memory when the game is closed (object destroyed)
    ~Food()
    {
        UnloadTexture(texture);
    }

    // methods
    void Draw()
    {
        // (texture'image', x, y, color)
        DrawTexture(texture, position.x * cellSize, position.y * cellSize, WHITE);
    }

    Vector2 GenerateRandomPos()
    {
        float x = GetRandomValue(0, cellCount - 1); // built-in function
        float y = GetRandomValue(0, cellCount - 1);
        return Vector2{x, y};
    }
};

int main()
{
    InitWindow(cellSize * cellCount, cellSize * cellCount, "Snake Game"); // the ratios of the window
    SetTargetFPS(60);                                                     // set the frame rate to 60 fps

    Food food = Food(); //   create an instance of the food class

    // game loop
    while (!WindowShouldClose()) // if esc is pressed or the x icon is clicked then the game will close
    {
        BeginDrawing();
        ClearBackground(green);
        food.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
};