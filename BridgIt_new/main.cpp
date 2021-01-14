#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
#include <cstring>
#include <thread>
#include "variables.h"
#include "enwindows.h"
#include "rowindows.h"
#include "frwindows.h"
#include "gamewindows.h"
#include "navigation.h"


using namespace std;

int main()
{
    strcpy(language, "english");
    initwindow(windowWidth, windowHeight);
    setbkcolor(WHITE);
    menu_english();

    while(true)
    {
        when_left_click();

        if(lastWindow==16 || lastWindow==17)
        {
            if(strcmp(language, "english")==0)
            {
                lastWindow=0;
                currentWindow=1;
            }
            if(strcmp(language, "french")==0)
            {
                lastWindow=0;
                currentWindow=6;
            }
            if(strcmp(language, "romanian")==0)
            {
                lastWindow=0;
                currentWindow=11;
            }
        }
    }

    getch();
    closegraph();
    return 0;
}
