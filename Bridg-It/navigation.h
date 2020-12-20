#include <iostream>
using namespace std;

<<<<<<< HEAD
// currentWindow - ENGLISH: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS
// currentWindow - FRENCH: 5-HOME, 6-INFO, 7-LANGUAGES, 8-SETTINGS
// currentWindow - ROMANA: 9-HOME, 10-INFO, 11-LANGUAGES, 12-SETTINGS

void when_left_click()
{
    // ALEXANDRA
=======
void when_left_click()
{
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;

    while (!ismouseclick(WM_LBUTTONDOWN))
    delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

<<<<<<< HEAD
    // ENGLISH
    // NAVIGATES FROM HOME TO INFORMATION
    if(x>=20 && x<=95 && y>=20 && y<=53 && currentWindow==1)
    {
=======
    // NAVIGATES FROM HOME TO INFORMATION
    if(x>=20 && x<=95 && y>=20 && y<=53 && currentWindow==1){
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
        info();
        currentWindow=2;
    }

<<<<<<< HEAD
    // NAVIGATES FROM HOME TO LANGUAGES
    if(x>=20 && x<=190 && y>=55 && y<=88 && currentWindow==1)
    {
        language_english();
=======

    // NAVIGATES FROM HOME TO LANGUAGES
    if(x>=20 && x<=190 && y>=55 && y<=88 && currentWindow==1){
        language();
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
        currentWindow=3;
    }

    // NAVIGATES FROM HOME TO SETTINGS
<<<<<<< HEAD
    if(x>=20 && x<=159 && y>=90 && y<=123 && currentWindow==1)
    {
=======
    if(x>=20 && x<=159 && y>=90 && y<=123 && currentWindow==1){
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
        settings();
        currentWindow=4;
    }

<<<<<<< HEAD
    // NAVIGATES BACK TO HOME
    if(x>=1130 && x<=1250 && y>=20 && y<=53 && currentWindow>1 && currentWindow<5){
        start();
        currentWindow=1;
    }

    // NAVIGATES BACK TO HOME IF ENGLISH IS SELECTED
    if(x>=560 && x<=720 && y>=240 && y<=270 && (currentWindow==3 || currentWindow==7 || currentWindow==11))
    {
=======

    // NAVIGATES BACK TO HOME
    if(x>=1130 && x<=1250 && y>=20 && y<=53 && currentWindow>1){
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
        start();
        currentWindow=1;
    }

<<<<<<< HEAD
    // ADINA
    // FRENCH

    // NAVIGATES BACK TO HOME IF FRENCH IS SELECTED
    if(x>=545 && x<=735 && y>=275 && y<=310 && (currentWindow==3 || currentWindow==7 || currentWindow==11 ))
    {
        start_francais();
        currentWindow=5;
    }

    // NAVIGATES FROM HOME TO INFO
    if(x>=20 && x<=85 && y>=25 && y<=45 && currentWindow==5)
    {
        info_francais();
        currentWindow=6;
    }

    // NAVIGATES FROM HOME TO LANGUAGES
    if(x>=20 && x<=115 && y>=60 && y<=80 && currentWindow==5)
    {
        language_francais();
        currentWindow=7;
    }

    // NAVIGATES FROM HOME TO SETTINGS
    if(x>=20 && x<=130 && y>=95 && y<=115 && currentWindow==5)
    {
        settings_francais();
        currentWindow=8;
    }

    // NAVIGATES BACK TO HOME
    if(x>=1130 && x<=1250 && y>=20 && y<=53 && currentWindow>5 && currentWindow<9)
    {
        start_francais();
        currentWindow=5;
    }

    // ROMANIAN
    // NAVIGATES BACK TO HOME IF ROMANIAN IS SELECTED
    if(x>=570 && x<=700 && y>=200 && y<=230 && (currentWindow==3 || currentWindow==7 || currentWindow==11))
    {
        start_romana();
        currentWindow=9;
    }

    // NAVIGATES FROM HOME TO INFO
    if(x>=20 && x<=175 && y>=25 && y<=45 && currentWindow==9)
    {
        info_romana();
        currentWindow=10;
    }

    // NAVIGATES FROM HOME TO LANGUAGE
    if(x>=20 && x<=100 && y>=60 && y<=80 && currentWindow==9)
    {
        language_romana();
        currentWindow=11;
    }

    // NAVIGATES FROM HOME TO SETTINGS
    if(x>=20 && x<=120 && y>=95 && y<=115 && currentWindow==9)
    {
        settings_romana();
        currentWindow=12;
    }

    // NAVIGATES BACK TO HOME
    if(x>=1130 && x<=1250 && y>=25 && y<=45 && currentWindow>9 && currentWindow<13)
    {
        start_romana();
        currentWindow=9;
    }

    // OPENS WINDOW FOR SINGLE-PLAYER MODE
    if(x>=460 && x<=815 && y>=330 && y<=360 && (currentWindow==1 || currentWindow==5 || currentWindow==9))
        board();

    // OPENS WINDOW FOR TWO-PLAYERS MODE
    if(x>=420 && x<=855 && y>=405 && y<=435 && (currentWindow==1 || currentWindow==5 || currentWindow==9))
        board();

    // EXIT
    if(x>=1150 && x<=1210 && y>=25 && y<=40 && (currentWindow==1 || currentWindow==5 || currentWindow==9) && ismouseclick(WM_LBUTTONDOWN))
        closegraph();

    cout << "Latest left click at: " << x << " " << y << endl;


=======



    cout << "Latest left click at: " << x << " " << y << endl;

>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
}
