
// currentWindow/ lastWindow - ENGLISH: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS, 5-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - FRENCH: 6-HOME, 7-INFO, 8-LANGUAGES, 9-SETTINGS, 9-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - ROMANIAN: 11-HOME, 12-INFO, 13-LANGUAGES, 14-SETTINGS, 15-MORE ABOUT SETTINGS

void when_left_click()
{
    // ALEXANDRA
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;

    while (!ismouseclick(WM_LBUTTONDOWN))
    delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

    // ENGLISH
    // NAVIGATES FROM HOME TO INFORMATION

    if(x>=defaultx && x<=95 && y>=25 && y<=65 && currentWindow==1)
    {
        info_english();
        currentWindow=2;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO LANGUAGES
    if(x>=defaultx && x<=170 && y>= 75 && y<=120 && currentWindow==1)
    {
        language_english();
        currentWindow=3;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO SETTINGS
    if(x>=defaultx && x<=135 && y>=125 && y<=165 && currentWindow==1)
    {
        settings_english();
        currentWindow=4;
        lastWindow=0;
    }

    // NAVIGATES FROM SETTINGS TO MORE ABOUT SETTINGS

     if(x>=20 && x<=305 && y>=10 && y<=50 && currentWindow==4)
    {
        aboutsettings_english();
        currentWindow=5;
        lastWindow=0;
    }

    // NAVIGATES FROM MORE ABOUT SETTINGS TO SETTINGS

     if(x>=1005 && x<=1265 && y>=5 && y<=55 && currentWindow==5)
    {
        settings_english();
        currentWindow=4;
        lastWindow=5;
    }

    // NAVIGATES BACK TO HOME

     if(x>=1125 && x<=1265 && y>=5 && y<=55 && currentWindow>1 && currentWindow<5)
    {
        if(lastWindow==!5)
        {
            menu_english();
            currentWindow=1;
        }
            else
                if(lastWindow==5)
                {
                    currentWindow=4;
                    lastWindow=0;
                }
    }

    // NAVIGATES BACK TO HOME IF ENGLISH IS SELECTED
    if(x>=500 && x<=780 && y>=250 && y<=310 && (currentWindow==3 || currentWindow==8 || currentWindow==13))
    {
        menu_english();
        currentWindow=1;
        lastWindow=0;
    }


    // ADINA
    // FRENCH

    // NAVIGATES BACK TO HOME IF FRENCH IS SELECTED
    if(x>=475 && x<=800 && y>=335 && y<=405 && (currentWindow==3 || currentWindow==8 || currentWindow==13 ))
    {
        menu_french();
        currentWindow=6;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO INFO
    if(x>=defaultx && x<=95 && y>=25 && y<=65 && currentWindow==6)
    {
        info_french();
        currentWindow=7;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO LANGUAGES
    if(x>=defaultx && x<=135 && y>=75 && y<=115 && currentWindow==6)
    {
        language_french();
        currentWindow=8;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO SETTINGS
    if(x>=defaultx && x<=195 && y>=125 && y<=170 && currentWindow==6)
    {
        settings_french();
        currentWindow=9;
        lastWindow=0;
    }

    // NAVIGATES FROM SETTINGS TO MORE ABOUT SETTINGS

     if(x>=20 && x<=305 && y>=10 && y<=50 && currentWindow==9)
    {
        aboutsettings_french();
        currentWindow=10;
        lastWindow=0;
    }

    // NAVIGATES FROM MORE ABOUT SETTINGS TO SETTINGS

     if(x>=1005 && x<=1265 && y>=5 && y<=55 && currentWindow==10)
    {
        settings_french();
        currentWindow=9;
        lastWindow=10;
    }

    // NAVIGATES BACK TO HOME

    if(x>=1010 && x<=1265 && y>=5 && y<=55 && currentWindow>5 && currentWindow<10)
    {
            if(lastWindow==!10)
            {
                menu_french();
                currentWindow=6;
            }
                else
                    if(lastWindow==10)
                    {
                        currentWindow=9;
                        lastWindow=0;
                    }
    }


    // ROMANIAN
    // NAVIGATES BACK TO HOME IF ROMANIAN IS SELECTED

    if(x>=500 && x<=780 && y>=430 && y<=500 && (currentWindow==3 || currentWindow==8 || currentWindow==13))
    {
        menu_romanian();
        currentWindow=11;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO INFO

    if(x>=defaultx && x<=185 && y>=25 && y<=65 && currentWindow==11)
    {
        info_romanian();
        currentWindow=12;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO LANGUAGE

    if(x>=defaultx && x<=100 && y>=75 && y<=115 && currentWindow==11)
    {
        language_romanian();
        currentWindow=13;
        lastWindow=0;
    }

    // NAVIGATES FROM HOME TO SETTINGS
    if(x>=defaultx && x<=135 && y>=125 && y<=175 && currentWindow==11)
    {
        settings_romanian();
        currentWindow=14;
        lastWindow=0;
    }

    // NAVIGATES FROM SETTINGS TO MORE ABOUT SETTINGS

     if(x>=15 && x<=305 && y>=5 && y<=50 && currentWindow==14)
    {
        aboutsettings_romanian();
        currentWindow=15;
        lastWindow=0;
    }

    // NAVIGATES FROM MORE ABOUT SETTINGS TO SETTINGS

     if(x>=1005 && x<=1265 && y>=5 && y<=55 && currentWindow==15)
    {
        settings_romanian();
        currentWindow=14;
        lastWindow=15;
    }

    // NAVIGATES BACK TO HOME

    if(x>=970 && x<=1265 && y>=5 && y<=55 && currentWindow>10 && currentWindow<15)
    {
            if(lastWindow==!15)
            {
                menu_romanian();
                currentWindow=11;
            }
                else
                    if(lastWindow==15)
                    {
                        currentWindow=14;
                        lastWindow=0;
                    }
    }



        // EXIT
    if(x>=1160 && x<=1250 && y>=20 && y<=65 && (currentWindow==1 || currentWindow==6 || currentWindow==11) && (lastWindow!=0))
            closegraph();

    // OPENS BOARD FOR ALL 3 LANGUAGES

    // OPENS BOARD FOR SINGLE PLAYER MODE
    if(x>=460 && x<=815 && y>=330 && y<=360 && (currentWindow==1 || currentWindow==6 || currentWindow==11) && lastWindow!=0)
    {
       currentWindow=16;
       drawboard();
    }

    // OPENS BOARD FOR TWO PLAYERS MODE
    if(x>=420 && x<=855 && y>=405 && y<=435 && (currentWindow==1 || currentWindow==6 || currentWindow==11) )
    {
       currentWindow=17;
       drawboard();
    }

    std::cout << "Latest left click at: " << x << " " << y << "\n";

}
