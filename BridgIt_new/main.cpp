#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include <ctime>
#include "variables.h"
#include "gamewindows.h"
#include "enwindows.h"
#include "rowindows.h"
#include "frwindows.h"
#include "navigation.h"

using namespace std;

int main()
{

    initwindow(windowWidth, windowHeight);
    //PlaySound(TEXT("muzica1.mp3"), NULL, SND_SYNC);
    //PlaySound(TEXT("SystemStart"), NULL, SND_ALIAS);

    setbkcolor(WHITE);
    menu_english();

    while(true)
    {
        when_left_click();

        if(currentWindow==16 || currentWindow==17)
            when_circle_click();
    }

    getch();
    closegraph();
    return 0;
}
