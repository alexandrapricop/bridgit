int windowWidth = getmaxwidth(), windowHeight = getmaxheight();
int currentWindow = 1, lastWindow; // LASTWINDOW E FOLOSIT LA MORE ABOUT SETTINGS SI ORIUNDE SE MAI SUPRAPUN CONDITIILE DIN NAVIGATION
float dx = windowWidth/100, dy = windowHeight/100; // FOLOSIT IN NAVIGATION, DIMESNIUNEA LUI X SI Y
int colour1[4], colour2[4]; // 4 - LIGHTRED, 7 - LIGHTBLUE, 11 - LIGHTGREEN, 12 - YELLOW
int clicked = 0;
int firstI, firstJ;
int size1=2, size2=3;
int dificulty[3] = {1,2,3}; // 1 - easy 3x4, 2 - medium 4x5, 3 - hard 5x6
int firstPlayer1;
char language[20];


void buttons()
{

    // ADINA
    // PREIA COORDONATELE LUI X SI Y DIN SETARI SI IN FUNCTIE DE ELE SE VOR SELECTA OPTIUNILE PRIN INSERAREA IMAGINILOR

    int x, y;
    getmouseclick(WM_LBUTTONDOWN, x, y);

    // VERIFICA LIMBA SI COORODNATELE SI IN FUNCTIE DE ELE INSEREAZA IMAGINEA PENTRU JUCATORUL ALES

    if(x>=dx*54 && x<=dx*64 && y>=25 && y<=42)
    {
        if(language=="english")
        {
            if(y>=dy*25 && y<=32)
                readimagefile("p1_english.jpg", dx*54, dy*25, dx*64, dy*42);
            else
                readimagefile("p2_english.jpg", dx*54, dy*25, dx*64, dy*42);
        }

        if(language=="french")
        {
            if(y>=dy*25 && y<=32)
                readimagefile("p1_french.jpg", dx*54, dy*25, dx*64, dy*42);
            else
                readimagefile("p2_french.jpg", dx*54, dy*25, dx*64, dy*42);
        }

        if(language=="romanian")
        {
            if(y>=dy*25 && y<=32)
                readimagefile("p1_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
            else
                readimagefile("p2_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
        }
    }

  /*  // INSEREAZA O IMAGINE IN FUNCTIE DE CULOAREA SELECTATA

       colour1[1]=7, colour2[2]=4;

    if(x>=dx*65 && x<=dx*85 && y>=dy*25 && y<=dy*40)
    {
        if(x>=65 && x<=68)
        {
            if(y>=25 && y<=32 && colour2[1]!=7)
            {
                if(colour2[2]==4)
                    readimagefile("ar.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==11)
                    readimagefile("av.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==12)
                    readimagefile("ag.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
                if(y>=33 && y<=40 && colour1[1]!=7)
            {
                if(colour1[]==4)
                    readimagefile("ra.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==11)
                    readimagefile("va.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==12)
                    readimagefile("ga.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }

        if(x>=69 && x<=72)
        {
            if(y>=25 && y<=32 && colour2[2]!=4)
            {
                if(colour2[]==7)
                    readimagefile("ra.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[2]==11)
                    readimagefile("rv.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==12)
                    readimagefile("rg.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
                if(y>=33 && y<=40 && colour1[2]!=4)
            {
                if(colour1[]==4)
                    readimagefile("ar.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==11)
                    readimagefile("vr.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==12)
                    readimagefile("gr.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }

        if(x>=73 && x<=76)
        {
            if(y>=25 && y<=32 && colour2[4]!=11)
            {
                if(colour2[]==4)
                    readimagefile("vr.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==7)
                    readimagefile("va.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==12)
                    readimagefile("vg.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
                if(y>=33 && y<=40 && colour1[4]!=11)
            {
                if(colour1[]==4)
                    readimagefile("rv.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==7)
                    readimagefile("av.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==12)
                    readimagefile("gv.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }

        if(x>=77 && x<=81)
        {
            if(y>=25 && y<=32 && colour2[3]!=12)
            {
                if(colour2[]==4)
                    readimagefile("gr.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==7)
                    readimagefile("ga.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour2[]==11)
                    readimagefile("gv.jpg", dx*54, dy*25, dx*64, dy*42);
            }
            else
                if(y>=33 && y<=40 && colour1[3]!=12)
            {
                if(colour1[]==4)
                    readimagefile("rg.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==7)
                    readimagefile("ag.jpg", dx*54, dy*25, dx*64, dy*42);
                if(colour1[]==11)
                    readimagefile("vg.jpg", dx*54, dy*25, dx*64, dy*42);
            }
        }

    }
*/
    // VERIFICA LIMBA SI COORODNATELE SI IN FUNCTIE DE ELE INSEREAZA IMAGINEA PENTRU DIMENSIUNEA TABLEI DE JOC

    if(x>=dx*17 && x<=dx*34)
       {
            if(language=="english")
                {
                if(y>=dy*43 && y<=dy*50)
                    readimagefile("small_english.jpg", dx*17, dy*43, dx*34, dy*64);
                if(y>=dy*51 && y<=dy*57)
                    readimagefile("mediumb_english.jpg", dx*17, dy*43, dx*34, dy*64);
                if(y>=dy*58 && y<=dy*64)
                    readimagefile("large_english.jpg", dx*17, dy*43, dx*34, dy*64);
               }
                   else
                       if(language=="french")
                        {
                            if(y>=dy*43 && y<=dy*50)
                                readimagefile("small_french.jpg", dx*17, dy*43, dx*34, dy*64);
                            if(y>=dy*51 && y<=dy*57)
                                readimagefile("mediumb_french.jpg", dx*17, dy*43, dx*34, dy*64);
                            if(y>=dy*58 && y<=dy*64)
                                readimagefile("large_french.jpg", dx*17, dy*43, dx*34, dy*64);
                        }
                               else
                                    if(language=="romanian")
                                        {
                                        if(y>=dy*43 && y<=dy*50)
                                            readimagefile("small_romanian.jpg", dx*17, dy*43, dx*34, dy*64);
                                        if(y>=dy*51 && y<=dy*57)
                                            readimagefile("mediumb_romanian.jpg", dx*17, dy*43, dx*34, dy*64);
                                        if(y>=dy*58 && y<=dy*64)
                                            readimagefile("large_romanian.jpg", dx*17, dy*43, dx*34, dy*64);
                                        }
           }

    // VERIFICA LIMBA SI COORODNATELE SI IN FUNCTIE DE ELE INSEREAZA IMAGINEA PENTRU NIVELUL CALCULATORULUI

    if(x>=dx*17 && x<=dx*34)
       {
        if(language=="english")
            {
            if(y>=dy*43 && y<=dy*50)
                readimagefile("easy_english.jpg", dx*17, dy*43, dx*34, dy*64);
            if(y>=dy*51 && y<=dy*57)
                readimagefile("medium_english.jpg", dx*17, dy*43, dx*34, dy*64);
            if(y>=dy*58 && y<=dy*64)
                readimagefile("hard_english.jpg", dx*17, dy*43, dx*34, dy*64);
            }
               else
                   if(language=="french")
                       {
                        if(y>=dy*43 && y<=dy*50)
                            readimagefile("easy_french.jpg", dx*17, dy*43, dx*34, dy*64);
                        if(y>=dy*51 && y<=dy*57)
                            readimagefile("medium_french.jpg", dx*17, dy*43, dx*34, dy*64);
                        if(y>=dy*58 && y<=dy*64)
                            readimagefile("hard_french.jpg", dx*17, dy*43, dx*34, dy*64);
                       }
                           else
                                if(language=="romanian")
                                   {
                                    if(y>=dy*43 && y<=dy*50)
                                        readimagefile("easy_romanian.jpg", dx*17, dy*43, dx*34, dy*64);
                                    if(y>=dy*51 && y<=dy*57)
                                        readimagefile("medium_romanian.jpg", dx*17, dy*43, dx*34, dy*64);
                                    if(y>=dy*58 && y<=dy*64)
                                        readimagefile("hard_romanian.jpg", dx*17, dy*43, dx*34, dy*64);
                                   }
           }
}



// currentWindow/ lastWindow - ENGLEZA: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS, 5-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - FRANCEZA: 6-HOME, 7-INFO, 8-LANGUAGES, 9-SETTINGS, 9-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - ROMANA: 11-HOME, 12-INFO, 13-LANGUAGES, 14-SETTINGS, 15-MORE ABOUT SETTINGS
