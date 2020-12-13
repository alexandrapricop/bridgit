#include <iostream>
#include <winbgim.h>
#include <graphics.h>

using namespace std;

int lungime, inaltime;
void info()
{
    clearviewport();
    setcolor(WHITE);
    rectangle(100, 50, 900, 550);

}

void mainmenu()
{
    setbkcolor(CYAN);
    clearviewport();
    setcolor(WHITE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,9);
    outtextxy(250, 150, "Bridg-It");

    setcolor(WHITE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,3);
    setfillstyle(EMPTY_FILL, WHITE);
    rectangle(20, 20, 20+10+textwidth("Info"), 20+10+textheight("Info"));
    rectangle(20, 55, 20+10+textwidth("Language"), 55+10+textheight("Language"));
    rectangle(20, 90, 20+10+textwidth("Settings"), 90+10+textheight("Settings"));
    rectangle(900, 20, 900+10+textwidth("Exit"), 20+10+textheight("Exit"));
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Language");
    outtextxy(25, 95, "Settings");
    outtextxy(905, 25, "Exit");
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,5);
    outtextxy(330, 330, "Single-player");
    outtextxy(340, 405, "Two-players");
    rectangle(325, 325, 325+10+textwidth("Single-player"), 325+10+textheight("Single-player"));
    rectangle(325, 400, 325+10+textwidth("Single-player"), 400+10+textheight("Two-players"));

}

int main()
{
    initwindow(1000, 600);
    mainmenu();
    getch();
    closegraph();
    return 0;
}
