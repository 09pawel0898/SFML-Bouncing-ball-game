#include "game.hpp"


    /* ///////////////////////////////////////////////////////////////////////
    *   Simple sfml bouncing ball game created with SFML 2.5.1
    *   One of my first projects, created in 2019 with ugly code, rewrited in 07.20
    *   Hopefully its understandable and little better coded now
    * ////////////////////////////////////////////////////////////////////////
    *       Created by Pawel Mlynarz
    */////////////////////////////////////////////////////////////////////////



static void hideConsole()
{
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, 0);
}

int main(void)
{


    hideConsole();
    Game game;
    game.run();

    return 0;
}