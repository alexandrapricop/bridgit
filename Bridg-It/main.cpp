#include <iostream>
#include <winbgim.h>
#include <graphics.h>

#define FUNDAL WHITE
using namespace std;

int lungime, inaltime;

void mainmenu()
{
    setbkcolor(FUNDAL);
    clearviewport();
    setcolor(BLUE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,8);
    outtextxy(250, 150, "Bridg-It");

    setcolor(BLUE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,3);
    setfillstyle(EMPTY_FILL, BLUE);
    rectangle(20, 20, 25+5+textwidth("Info"), 25+5+textheight("Info"));
    rectangle(20, 55, 25+5+textwidth("Language"), 60+5+textheight("Language"));
    rectangle(20, 90, 25+5+textwidth("Settings"), 95+5+textheight("Settings"));
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Language");
    outtextxy(25, 95, "Settings");
}


int main()
{
    initwindow(1000, 600);
    mainmenu();

    cout<<55+5+textheight("Settings")<<' '<< textwidth("Info");
    getch();
    closegraph();
    return 0;
}
