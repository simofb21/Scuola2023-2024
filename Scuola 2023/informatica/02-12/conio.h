#include <windows.h>

#define BLACK           0
#define DARK_BLUE       1
#define GREEN           2
#define TURQUOISE       3
#define DARK_RED        4
#define PURPLE          5
#define FOREST_GREEN    6
#define LIGHT_GRAY      7
#define GRAY            8
#define BLUE            9
#define LIGHT_GREEN    10
#define LIGHT_BLUE     11
#define RED            12
#define PINK           13
#define YELLOW         14
#define WHITE          15

int getx(void)
{
    CONSOLE_SCREEN_BUFFER_INFO window;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &window);
    return window.dwCursorPosition.X;
}

int gety(void)
{
    CONSOLE_SCREEN_BUFFER_INFO window;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &window);
    return window.dwCursorPosition.Y;
}

void setx(int x)
{
    COORD pos;
    pos.X = x;
    pos.Y = gety();
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void sety(int y)
{
    COORD pos;
    pos.X = getx();
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void gotoxy(int x, int y)
{
    setx(x);
    sety(y);
}

void setcolor(unsigned short int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

