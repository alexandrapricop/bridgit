#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include <ctime>
#include "variables.h"
#include "windows.h"
#include "enwindows.h"
#include "rowindows.h"
#include "frwindows.h"
#include "navigation.h"

using namespace std;

int main()
{
    initwindow(windowWidth, windowHeight);
    setbkcolor(WHITE);
    menu_english();

    while(true){
        when_left_click();
        when_circle_click();
    }

    getch();
    closegraph();
    return 0;
}
