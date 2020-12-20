#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include "variables.h"
#include "windows.h"
<<<<<<< HEAD
#include "rowindow.h"
#include "frwindow.h"
#include "navigation.h"

=======
#include "navigation.h"
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1

using namespace std;


int main()
{
    initwindow(windowWidth, windowHeight);
    start();
<<<<<<< HEAD

    while(true){
        when_left_click();
    }

=======

    while(true){
        when_left_click();
    }



>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    getch();
    closegraph();
    return 0;
}
