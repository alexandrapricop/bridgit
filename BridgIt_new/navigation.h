
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

    if(x>=dx*1 && x<=dx*8 && y>=dy*1 && y<=dy*10 && currentWindow==1)
    {
        info_english();
        currentWindow=2;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN FEREASTRA CU LIMBI
    if(x>=dx*1 && x<=dx*14 && y>=dy*11 && y<=dy*18 && currentWindow==1)
    {
        language_english();
        currentWindow=3;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN SETARI
    if(x>=dx*1 && x<=dx*13 && y>=dy*19 && y<=dy*24 && currentWindow==1)
    {
        settings_english();
        currentWindow=4;
        lastWindow=0;
    }

    // SARE DIN SETARI IN MAI MULTE DESPRE SETARI

     if(x>=dx*1 && x<=dx*24 && y>=dy*1 && y<=dy*8 && currentWindow==4)
    {
            aboutsettings_english();
            currentWindow=5;
            lastWindow=0;
    }

    // REVINE DIN MAI MULTE DESPRE SETARI IN SETARI

     if(x>=dx*78 && x<=dx*100 && y>=dy*0 && y<=dy*7 && currentWindow==5)
    {
        settings_english();
        currentWindow=4;
        lastWindow=5;
    }


    // SE INTOARCE PE PAGINA DE PORNIRE INDIFERENT DE PAGINA CURENTA

     if(x>=dx*87 && x<=dx*100 && y>=dy*1 && y<=dy*7 && currentWindow>1 && currentWindow<5)
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
    if(x>=dx*37 && x<=dx*63 && y>=dy*35&& y<=dy*46 && (currentWindow==3 || currentWindow==8 || currentWindow==13))
    {
        language_english();
        currentWindow=3;
        lastWindow=0;
    }


    // ADINA
    // FRANCEZA

    // COMUTA PE FRANCEZA CAND ESTE SELECTATA
    if(x>=dx*37 && x<=dx*63 && y>=dy*47 && y<=dy*59 && (currentWindow==3 || currentWindow==8 || currentWindow==13 ))
    {
        language_french();
        currentWindow=8;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN INFO
    if(x>=dx*1 && x<=dx*11 && y>=dy*1 && y<=dy*10 && currentWindow==6)
    {
        info_french();
        currentWindow=7;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN FEREASTRA CU LIMBI
    if(x>=dx*1 && x<=dx*7 && y>=dy*11 && y<=dy*18 && currentWindow==6)
    {
        language_french();
        currentWindow=8;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN SETARI
    if(x>=dx*1 && x<=dx*15 && y>=dy*19 && y<=dy*24 && currentWindow==6)
    {
        settings_french();
        currentWindow=9;
        lastWindow=0;
    }

    // SARE DIN SETARI IN MAI MULTE DESPRE SETARI

     if(x>=dx*0 && x<=dx*47 && y>=dy*0 && y<=dy*7 && currentWindow==9)
    {
        aboutsettings_french();
        currentWindow=10;
        lastWindow=0;
    }

    // REVINE DIN MAI MULTE DESPRE SETARI IN SETARI

     if(x>=dx*75 && x<=dx*100 && y>=dy*0 && y<=dy*7 && currentWindow==10)
    {
        settings_french();
        currentWindow=9;
        lastWindow=10;
    }

    // REVINE IN PAGINA DE PORNIRE

    if(x>=dx*77 && x<=dx*100 && y>=dy*0 && y<=dy*8 && currentWindow>5 && currentWindow<10)
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

    if(x>=dx*37 && x<=dx*63 && y>=dy*60 && y<=dy*72 && (currentWindow==3 || currentWindow==8 || currentWindow==13))
    {
        language_romanian();
        currentWindow=13;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN INFO

    if(x>=dx*1 && x<=dx*15 && y>=dy*3 && y<=dy*10 && currentWindow==11)
    {
        info_romanian();
        currentWindow=12;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN FEREASTRA CU LIMBI

    if(x>=dx*1 && x<=dx*10 && y>=dy*11 && y<=dy*18 && currentWindow==11)
    {
        language_romanian();
        currentWindow=13;
        lastWindow=0;
    }

    // SARE DIN PAGINA DE PORNIRE IN SETARI
    if(x>=dx*1 && x<=dx*10 && y>=dy*19 && y<=dy*25 && currentWindow==11)
    {
        settings_romanian();
        currentWindow=14;
        lastWindow=0;
    }

    // SARE DIN SETARI IN MAI MULTE DESPRE SETARI

     if(x>=dx*0 && x<=dx*30 && y>=dy*0 && y<=dy*7 && currentWindow==14)
    {
        aboutsettings_romanian();
        currentWindow=15;
        lastWindow=0;
    }

    // REVINE DIN MAI MULTE DESPRE SETARI IN SETARI

     if(x>=dx*77 && x<=dx*98 && y>=dy*0 && y<=dy*8 && currentWindow==15)
    {
        settings_romanian();
        currentWindow=14;
        lastWindow=15;
    }

    // REVINE IN PAGINA DE PORNIRE

    if(x>=dx*75 && x<=dx*100 && y>=dy*0 && y<=dy*8 && currentWindow>10 && currentWindow<15)
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


    //if(x>=dx*90 && x<=dx*98 && y>=dy*2 && y<=dy*9 && (currentWindow==1 || currentWindow==6 || currentWindow==11))
          //  closegraph();

    // DESCHIDE TABLA DE JOC PENTRU MODUL SINGLE PLAYER
    if(x>=dx*32 && x<=dx*62 && y>=dy*53 && y<=dy*66 && (currentWindow==1 || currentWindow==6 || currentWindow==11))
    {
        if(lastWindow==0)
        {
            drawboard();
            currentWindow=16;
        }
    }

    // ODESCHIDE TABLA DE JOC PENTRU MODUL TWO PLAYERS
    if(x>=dx*33 && x<=dx*62 && y>=dy*68 && y<=dy*82 && (currentWindow==1 || currentWindow==6 || currentWindow==11))
    {
        drawboard();
        currentWindow=17;
    }

    std::cout << "Latest left click at: " << x << " " << " " << y << " " << "\n";

}
