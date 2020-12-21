#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include <ctime>
#include "variables.h"
#include "windows.h"
#include "rowindow.h"
#include "frwindow.h"
#include "navigation.h"

using namespace std;

int main()
{
    afisare();
    initwindow(windowWidth, windowHeight);
    start();

    while(true){
        when_left_click();
    }

    getch();
    closegraph();
    return 0;
}
