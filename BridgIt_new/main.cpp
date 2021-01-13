#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
#include <cstring>
#include "variables.h"
#include "enwindows.h"
#include "rowindows.h"
#include "frwindows.h"
#include "gamewindows.h"
#include "navigation.h"


using namespace std;

int main()
{

    initwindow(windowWidth, windowHeight);

    setbkcolor(WHITE);
    menu_english();

    while(true)
    {
        when_left_click();
    }

    getch();
    closegraph();
    return 0;
}
