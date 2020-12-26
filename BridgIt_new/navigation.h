
// currentWindow/ lastWindow - ENGLEZA: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS, 5-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - FRANCEZA: 6-HOME, 7-INFO, 8-LANGUAGES, 9-SETTINGS, 9-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - ROMANA: 11-HOME, 12-INFO, 13-LANGUAGES, 14-SETTINGS, 15-MORE ABOUT SETTINGS

void when_left_click()
{
    // ALEXANDRA
    const int DELAY = 1; // Milliseconds of delay between checks
    int x, y;

    while (!ismouseclick(WM_LBUTTONDOWN))
    delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

    // ENGLEZA
    // SARE DIN PAGINA DE PORNIRE IN INFO

    if(x>=defaultx && x<=120 && y>=30 && y<=85 && currentWindow==1)
    {
        info_english();
        currentWindow=2;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN FEREASTRA CU LIMBI
    if(x>=defaultx && x<=210 && y>=90 && y<=150 && currentWindow==1)
    {
        language_english();
        currentWindow=3;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN SETARI
    if(x>=defaultx && x<=185 && y>=150 && y<=195 && currentWindow==1)
    {
        settings_english();
        currentWindow=4;
        lastWindow=0;
    }

    // SARE DIN SETARI IN MAI MULTE DESPRE SETARI

     if(x>=20 && x<=365 && y>=10 && y<=65 && currentWindow==4)
    {
        aboutsettings_english();
        currentWindow=5;
        lastWindow=0;
    }

    // REVINE DIN MAI MULTE DESPRE SETARI IN SETARI

     if(x>=1200 && x<=1510 && y>=10 && y<=60 && currentWindow==5)
    {
        settings_english();
        currentWindow=4;
        lastWindow=5;
    }


    // SE INTOARCE PE PAGINA DE PORNIRE INDIFERENT DE PAGINA CURENTA

     if(x>=1335 && x<=1515 && y>=10 && y<=55 && currentWindow>1 && currentWindow<5)
    {
        if(lastWindow==!5)  // DACA VREAU SA MA INTORC IN MENIU DIN ORICE FEREASTRA, MAI PUTIN CEA CU NR 5
        {
            menu_english();
            currentWindow=1;
        }
            else
                if(lastWindow==5)
                    // DACA SUNT IN FEREASTRA 5, ATUNCI APAS CA SA MA INTORC MAI INTAI IN SETARI SI APOI IN PAGINA DE START
                {
                    currentWindow=4;
                    lastWindow=0;
                }
    }

    // COMUTA PE ENGLEZA CAND ESTE SELECTATA
    if(x>=600 && x<=925 && y>=285 && y<=380 && (currentWindow==3 || currentWindow==8 || currentWindow==13))
    {
        language_english();
        currentWindow=3;
        lastWindow=0;
    }


    // ADINA
    // FRANCEZA

    // COMUTA PE FRANCEZA CAND ESTE SELECTATA
    if(x>=585 && x<=940 && y>=400 && y<=475 && (currentWindow==3 || currentWindow==8 || currentWindow==13 ))
    {
        language_french();
        currentWindow=8;
        lastWindow=0;
    }

    // // SARE DIN PAGINA DE PORNIRE IN INFO
    if(x>=defaultx && x<=120 && y>=30 && y<=85 && currentWindow==6)
    {
        info_french();
        currentWindow=7;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN FEREASTRA CU LIMBI
    if(x>=defaultx && x<=170 && y>=75 && y<=145 && currentWindow==6)
    {
        language_french();
        currentWindow=8;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN SETARI
    if(x>=defaultx && x<=235 && y>=145 && y<=195 && currentWindow==6)
    {
        settings_french();
        currentWindow=9;
        lastWindow=0;
    }

    // SARE DIN SETARI IN MAI MULTE DESPRE SETARI

     if(x>=10 && x<=420 && y>=5 && y<=65 && currentWindow==9)
    {
        aboutsettings_french();
        currentWindow=10;
        lastWindow=0;
    }

    // REVINE DIN MAI MULTE DESPRE SETARI IN SETARI

     if(x>=1140 && x<=1510 && y>=5 && y<=60 && currentWindow==10)
    {
        settings_french();
        currentWindow=9;
        lastWindow=10;
    }

    // REVINE IN PAGINA DE PORNIRE

    if(x>=1220 && x<=1510 && y>=5 && y<=60 && currentWindow>5 && currentWindow<10)
    {
            if(lastWindow==!10) // DACA VREAU SA MA INTORC IN MENIU DIN ORICE FEREASTRA, MAI PUTIN CEA CU NR 10
            {
                menu_french();
                currentWindow=6;
            }
                else
                    if(lastWindow==10)
                        // DACA SUNT IN FEREASTRA 10, ATUNCI APAS CA SA MA INTORC MAI INTAI IN SETARI SI APOI IN PAGINA DE START
                    {
                        currentWindow=9;
                        lastWindow=0;
                    }
    }


    // ROMANA
    // COMUTA PE ROMANA CAND ESTE SELECTATA

    if(x>=590 && x<=945 && y>=510 && y<=585 && (currentWindow==3 || currentWindow==8 || currentWindow==13))
    {
        language_romanian();
        currentWindow=13;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN INFO

    if(x>=defaultx && x<=220 && y>=25 && y<=85 && currentWindow==11)
    {
        info_romanian();
        currentWindow=12;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN FEREASTRA CU LIMBI

    if(x>=defaultx && x<=145 && y>=90 && y<=135 && currentWindow==11)
    {
        language_romanian();
        currentWindow=13;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN SETARI
    if(x>=defaultx && x<=145 && y>=150 && y<=195 && currentWindow==11)
    {
        settings_romanian();
        currentWindow=14;
        lastWindow=0;
    }

    // SARE DIN SETARI IN MAI MULTE DESPRE SETARI

     if(x>=20 && x<=415 && y>=5 && y<=55 && currentWindow==14)
    {
        aboutsettings_romanian();
        currentWindow=15;
        lastWindow=0;
    }

    // REVINE DIN MAI MULTE DESPRE SETARI IN SETARI

     if(x>=1200 && x<=1505 && y>=5 && y<=55 && currentWindow==15)
    {
        settings_romanian();
        currentWindow=14;
        lastWindow=15;
    }

    // REVINE IN PAGINA DE PORNIRE

    if(x>=1165 && x<=1510 && y>=5 && y<=65 && currentWindow>10 && currentWindow<15)
    {
            if(lastWindow==!15) // DACA VREAU SA MA INTORC IN MENIU DIN ORICE FEREASTRA, MAI PUTIN CEA CU NR 15
            {
                menu_romanian();
                currentWindow=11;
            }
                else
                    if(lastWindow==15)
                        // DACA SUNT IN FEREASTRA 15, ATUNCI APAS CA SA MA INTORC MAI INTAI IN SETARI SI APOI IN PAGINA DE START
                    {
                        currentWindow=14;
                        lastWindow=0;
                    }
    }



        // IESE DIN JOC

    if(x>=1160 && x<=1250 && y>=20 && y<=65 && (currentWindow==1 || currentWindow==6 || currentWindow==11))
            closegraph();

    // DESCHIDE TABLA DE JOC PENTRU MODUL SINGLE PLAYER
    if(x>=495 && x<=945 && y>=465 && y<=545 && (currentWindow==1 || currentWindow==6 || currentWindow==11))
    {
        drawboard();
        currentWindow=16;
    }

    // ODESCHIDE TABLA DE JOC PENTRU MODUL TWO PLAYERS
    if(x>=515 && x<=940 && y>=575 && y<=665 && (currentWindow==1 || currentWindow==6 || currentWindow==11))
    {
        drawboard();
        currentWindow=17;
    }

    std::cout << "Latest left click at: " << x << " " << y << "\n";

}
