#include "raylib.h"
#include "silly-structs.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow
        (screenWidth, screenHeight, "Fusion example");

    Vector2 ballPosition = {
        (float) screenWidth / 2,
        (float) screenHeight / 2
    };
    
    // Kinda curious about what disabling this would do...
    SetTargetFPS (60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose ())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        if (IsKeyDown (KEY_RIGHT)) ballPosition .x += 2.0f;
        if (IsKeyDown (KEY_LEFT)) ballPosition .x -= 2.0f;
        if (IsKeyDown (KEY_UP)) ballPosition .y -= 2.0f;
        if (IsKeyDown (KEY_DOWN)) ballPosition .y += 2.0f;
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            // Just here for practice...
            TextToDraw hiWorld = {
                "Congrats! You created your first window!",
                { 190, 200 },
                { 20, LIGHTGRAY}
            };

            TextToDraw guide = {
                "Move the ball witht he arrow keys",
                { 10, 10 },
                { 20, DARKGRAY }
            };

            DrawText (
                hiWorld .text,
                hiWorld .pos .x,
                hiWorld .pos .y,
                hiWorld .font .size,
                hiWorld .font .color
            );

            DrawText (
                guide .text,
                guide .pos .x,
                guide .pos .y,
                guide .font .size,
                guide .font .color
            );

            DrawCircleV(ballPosition, 50, MAROON);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}