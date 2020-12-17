#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include "variables.h"
#include "windows.h"
#include "navigation.h"

using namespace std;


int main()
{
    initwindow(windowWidth, windowHeight);
    start();

    while(true){
        when_left_click();
    }



    getch();
    closegraph();
    return 0;
}
