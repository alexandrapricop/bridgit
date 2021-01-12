int windowWidth = getmaxwidth(), windowHeight = getmaxheight();
int currentWindow = 1, lastWindow; // LASTWINDOW E FOLOSIT LA MORE ABOUT SETTINGS SI ORIUNDE SE MAI SUPRAPUN CONDITIILE DIN NAVIGATION
float dx = windowWidth/100, dy = windowHeight/100; // FOLOSIT IN NAVIGATION, DIMESNIUNEA LUI X SI Y
int colour1=7, colour2=4; // 4 - LIGHTRED, 7 - LIGHTBLUE, 11 - LIGHTGREEN, 12 - YELLOW
int clicked = 0;
int firstI, firstJ;
int boardsize=1; // 1 - small, 2 - medium, 3 - large
int difficulty=1; // 1 - easy 3x4, 2 - medium 4x5, 3 - hard 5x6
int firstPlayer=1;
char language[20]={"english"};
int setok=0;



void buttons(){

    // ADINA
    // PREIA COORDONATELE LUI X SI Y DIN SETARI SI IN FUNCTIE DE ELE SE VOR SELECTA OPTIUNILE PRIN INSERAREA IMAGINILOR

    int x=mousex(), y=mousey(), firstPlayer;


    // VERIFICA LIMBA SI COORDONATELE SI IN FUNCTIE DE ELE INSEREAZA IMAGINEA PENTRU JUCATORUL ALES

    if(x>=dx*54 && x<=dx*64 && y>=dy*25 && y<=dy*42)
    {

        if(strcmp(language, "english")==0)
        {
            if(y>=dy*25 && y<=dy*32)
            {
                firstPlayer=1;
                readimagefile("p1_english.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
            {
                firstPlayer=2;
                readimagefile("p2_english.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }

        if(strcmp(language, "french")==0)
        {
            if(y>=dy*25 && y<=dy*32)
            {
                firstPlayer=1;
                readimagefile("p1_french.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
            {
                firstPlayer=2;
                readimagefile("p2_french.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }

        if(strcmp(language, "romanian")==0)
        {
            if(y>=dy*25 && y<=dy*32)
            {
                firstPlayer=1;
                readimagefile("p1_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
            {
                firstPlayer=2;
                readimagefile("p2_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }
    }

   // INSEREAZA O IMAGINE IN FUNCTIE DE CULOAREA SELECTATA

        // INITIALIZEAZA CULOAREA PRIMULUI JUCATOR CU 7(ALBASTRU), SI CULOAREA CELUI DE-AL DOILEA JUCATOR CU 4(ROSU)

       if(x>=dx*65 &&  x<=dx*85 && y>=dy*25 && y<=dy*32)
       {
            if(x>=dx*65 &&  x<=dx*68 && colour2!=7)
            {
                colour1=7;
                readimagefile("a_colour.jpg", dx*65, dy*25, dx*83, dy*32);
            }
            if(x>=dx*69 &&  x<=dx*73 && colour2!=4)
            {
                colour1=4;
               readimagefile("r_colour.jpg", dx*65, dy*25, dx*83, dy*32);
            }
            if(x>=dx*74 &&  x<=dx*77 && colour2!=12)
            {
                colour1=12;
                readimagefile("g_colour.jpg", dx*65, dy*25, dx*83, dy*32);
            }
            if(x>=dx*77 &&  x<=dx*82 && colour2!=11)
            {
                colour1=11;
                readimagefile("v_colour.jpg", dx*65, dy*25, dx*83, dy*32);
            }
       }

       if(x>=dx*63 &&  x<=dx*83 && y>=dy*33 && y<=dy*40)
       {
            if(x>=dx*65 &&  x<=dx*68 && colour1!=7)
            {
                colour2=7;
                readimagefile("a_colour.jpg", dx*65, dy*33, dx*83, dy*40);
            }
            if(x>=dx*69 &&  x<=dx*73 && colour1!=4)
            {
                colour2=4;
                readimagefile("r_colour.jpg", dx*65, dy*33, dx*83, dy*40);
            }
            if(x>=dx*74 &&  x<=dx*77 && colour1!=12)
            {
                colour2=12;
                readimagefile("g_colour.jpg", dx*65, dy*33, dx*83, dy*40);
            }
            if(x>=dx*77 &&  x<=dx*82 && colour1!=11)
            {
                colour2=11;
                readimagefile("v_colour.jpg", dx*65, dy*33, dx*83, dy*40);
            }
       }

    // VERIFICA LIMBA SI COORODNATELE SI IN FUNCTIE DE ELE INSEREAZA IMAGINEA PENTRU DIMENSIUNEA TABLEI DE JOC

    if(x>=dx*17 && x<=dx*34)
       {
            if(strcmp(language, "english")==0)
                {
                    if(y>=dy*44 && y<=dy*50)
                    {
                        boardsize=1;
                        readimagefile("small_english.jpg", dx*17, dy*44, dx*34, dy*65);
                    }
                    if(y>=dy*51 && y<=dy*57)
                    {
                        boardsize=2;
                        readimagefile("mediumb_english.jpg", dx*17, dy*44, dx*34, dy*65);
                    }
                    if(y>=dy*58 && y<=dy*65)
                    {
                        boardsize=3;
                        readimagefile("large_english.jpg", dx*17, dy*44, dx*34, dy*65);
                    }
               }

            if(strcmp(language, "french")==0)
                {
                    if(y>=dy*46 && y<=dy*53)
                    {
                            boardsize=1;
                            readimagefile("small_french.jpg", dx*15, dy*46, dx*32, dy*68);
                    }
                    if(y>=dy*54 && y<=dy*60)
                    {
                            boardsize=2;
                            readimagefile("mediumb_french.jpg", dx*15, dy*46, dx*32, dy*68);
                    }

                    if(y>=dy*61 && y<=dy*68)
                    {
                            boardsize=3;
                            readimagefile("large_french.jpg", dx*15, dy*46, dx*32, dy*68);
                    }
                }

            if(strcmp(language, "romanian")==0)
                {
                    if(y>=dy*46 && y<=dy*53)
                    {
                            boardsize=1;
                            readimagefile("small_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
                    }
                    if(y>=dy*54 && y<=dy*60)
                    {
                            boardsize=2;
                            readimagefile("mediumb_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
                    }
                    if(y>=dy*61 && y<=dy*68)
                    {
                            boardsize=3;
                            readimagefile("large_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
                    }
                }
           }

    // VERIFICA LIMBA SI COORODNATELE SI IN FUNCTIE DE ELE INSEREAZA IMAGINEA PENTRU NIVELUL CALCULATORULUI

    if(x>=dx*17 && x<=dx*34)
       {
        if(strcmp(language, "english")==0)
            {
                if(y>=dy*75 && y<=dy*81)
                {
                    difficulty=1;
                    readimagefile("easy_english.jpg", dx*17, dy*75, dx*34, dy*95);
                }
                if(y>=dy*82 && y<=dy*88)
                {
                    difficulty=2;
                    readimagefile("medium_english.jpg", dx*17, dy*75, dx*34, dy*95);
                }
                if(y>=dy*89 && y<=dy*95)
                {
                    difficulty=3;
                    readimagefile("hard_english.jpg", dx*17, dy*75, dx*34, dy*95);
                }
            }

        if(strcmp(language, "french")==0)
            {
            if(y>=dy*75 && y<=dy*81)
                {
                    difficulty=1;
                    readimagefile("easy_french.jpg", dx*15, dy*75, dx*32, dy*95);
                }
                if(y>=dy*82 && y<=dy*88)
                {
                    difficulty=2;
                    readimagefile("medium_french.jpg", dx*15, dy*75, dx*32, dy*95);
                }
                if(y>=dy*89 && y<=dy*95)
                {
                    difficulty=3;
                    readimagefile("hard_french.jpg", dx*15, dy*75, dx*32, dy*95);
                }
            }

        if(strcmp(language, "romanian")==0)
            {
            if(y>=dy*75 && y<=dy*81)
                {
                    difficulty=1;
                    readimagefile("easy_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
                }
                if(y>=dy*82 && y<=dy*88)
                {
                    difficulty=2;
                    readimagefile("medium_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
                }
                if(y>=dy*89 && y<=dy*95)
                {
                    difficulty=3;
                    readimagefile("hard_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
                }
            }
        }
}



// currentWindow/ lastWindow - ENGLEZA: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS, 5-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - FRANCEZA: 6-HOME, 7-INFO, 8-LANGUAGES, 9-SETTINGS, 9-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - ROMANA: 11-HOME, 12-INFO, 13-LANGUAGES, 14-SETTINGS, 15-MORE ABOUT SETTINGS
