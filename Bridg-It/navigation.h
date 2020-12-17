#include <iostream>
using namespace std;

void when_left_click()
{
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;

    while (!ismouseclick(WM_LBUTTONDOWN))
    delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

    // NAVIGATES FROM HOME TO INFORMATION
    if(x>=20 && x<=95 && y>=20 && y<=53 && currentWindow==1){
        info();
        currentWindow=2;
    }


    // NAVIGATES FROM HOME TO LANGUAGES
    if(x>=20 && x<=190 && y>=55 && y<=88 && currentWindow==1){
        language();
        currentWindow=3;
    }

    // NAVIGATES FROM HOME TO SETTINGS
    if(x>=20 && x<=159 && y>=90 && y<=123 && currentWindow==1){
        settings();
        currentWindow=4;
    }


    // NAVIGATES BACK TO HOME
    if(x>=1130 && x<=1250 && y>=20 && y<=53 && currentWindow>1){
        start();
        currentWindow=1;
    }




    cout << "Latest left click at: " << x << " " << y << endl;

}
