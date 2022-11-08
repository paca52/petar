#include "include\raylib.h"

int main() {
   
    const int sirina = 200;
    const int visina = 150;

    InitWindow(sirina, visina, "PETAR UPOZORENJE" );

    Texture2D petar = LoadTexture("petar.png");

    petar.width /= 4;
    petar.height /= 4;

    double xrec = (double)sirina / 2 - (double)petar.height / 2;
    double yrec = (double)visina / 2 + (double)petar.height  / 2;

    double l = 45;
    double d = 45.0 / 2;

    while(!WindowShouldClose()) {

        if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
            double x = GetMouseX() ;
            double y = GetMouseY();

            if(( xrec <= x && x <= xrec + l ) && ( yrec <= y && y <= yrec + d ))
                break;

        } 

        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawRectangle(xrec, yrec, l, d / 2, GRAY);
            DrawText("ok", xrec + l/4 + 3, yrec , 12, BLACK);

            DrawTexture(petar, sirina / 2 - petar.width / 2, visina / 2 - petar.height, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
