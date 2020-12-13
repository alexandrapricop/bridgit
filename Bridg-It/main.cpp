#include <iostream>
#include <winbgim.h>
#include <graphics.h>

#define FUNDAL WHITE
using namespace std;

/* FISIER UPDATED */

struct buton{
    int x1, y1, x2, y2, dx, dy;
    char text[30];
};

int lungime, inaltime;

void mainmenu()
{
    setbkcolor(FUNDAL);
    clearviewport();
    setcolor(BLUE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,8);
    outtextxy(250, 150, "Bridg-It")
    int x,y;
    buton B1, B2, B3, B4, B5, B6;

    B1.dx=25; B1.dy=25; strcpy(B1.text, "Info");
    B2.dx=25; B2.dy=75; strcpy(B2.text, "Select language");
    B3.dx=25; B3.dy=125; strcpy(B3.text, "Settings");
    B4.dx=850; B4.dy=25; strcpy(B4.text, "Exit");
    B5.dx=300; B5.dy=300; strcpy(B5.text, "Single player");
    B6.dx=300; B6.dy=400; strcpy(B6.text, "Two players");
}

void Buton(buton &b, int textsize)
    {
        settextstyle(TRIPLEX_FONT, HORIZ_DIR, textsize);
        int inaltime=textheight(b.text);
        int lungime=textwidth(b.text);
        b.x1=b.dx-lungime/2;
        b.y1=b.dy-inaltime/2;
        b.x2=b.x1+lungime+14;
        b.y2=b.y1+inaltime+14;

        setcolor(BLUE);
        outtextxy(b.x1+7, b.y1+7, b.text);
    }

int main()
{
    initwindow(1000, 600);
    mainmenu();
    getch();
    closegraph();
    return 0;
}
