
// ALEXANDRA SI ADINA

#define border 14*dy

int board[12][12];
int left, up, width, height, culoare=colour1, player=firstPlayer, playerline=firstPlayer, moves=0, ok=1;
void initializare();
void tabla_consola();
void drawboard();
void drawline (int linia, int col);
void play();
void computerplay();
void easylevel(int &linia, int &col);
void mediumlevel(int &linia, int &col);
void hardlevel(int lastline, int lastcol, int &linia, int &col);
void endgame();
void timer(clock_t start, int numarmutari);
int victory(int linia, int col);

void drawline(int linia, int col){ // DESENEAZA LINIILE DINTRE BULINE PENTRU MODUL SINGLE-PLAYER

    if(playerline==1)
    {

        if(colour1 == 7){
            setcolor(LIGHTBLUE);
            setlinestyle(SOLID_LINE, 0 ,8);
        }

        if(colour1 == 4){
            setcolor(LIGHTRED);
            setlinestyle(SOLID_LINE, 0 ,8);
        }
        if(colour1 == 11){
            setcolor(LIGHTGREEN);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
        if(colour1 == 12){
            setcolor(YELLOW);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
        playerline=2;
    }
    else
    {

        if(colour2 == 7){
            setcolor(LIGHTBLUE);
            setlinestyle(SOLID_LINE, 0 ,8);
        }

        if(colour2 == 4){
            setcolor(LIGHTRED);
            setlinestyle(SOLID_LINE, 0 ,8);
        }
        if(colour2 == 11){
            setcolor(LIGHTGREEN);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
        if(colour2 == 12){
            setcolor(YELLOW);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
        playerline=1;
    }
    board[linia][col]=-1*playerline;

    if(board[linia][col-1]==playerline)
       line(left+(col-1)*(border/2), up+linia*(border/2), left+(col+1)*(border/2), up+linia*(border/2));
    else
       line(left+col*(border/2), up+(linia-1)*(border/2), left+col*(border/2), up+(linia+1)*(border/2));

}

void drawboard(){    // SE INITIALIZEAZA DESENUL PENTRU TABLA DE JOC

    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);

    int i,j;
    width=height=border*boardsize;  // DIMENSIUNEA TABLEI IN FUNCTIE DE NUMARUL DE BULINE ALESE
    up=(getmaxheight()-height)/2;   // DISTANTA IN INALTIME DINTRE MARGINEA TABLEI SI MARGINEA FERESTREI
    left=(getmaxwidth()-width)/2+20*dx; // DISTANTA IN LATIME LA STANGA DINTRE MARGINEA TABLEI SI MARGINEA FERESTREI

    int x=left, y=up;
    int dots;

    // SE ADAUGA PIESELE

    for(int i=1; i<=2*boardsize+1; i++)
    {
        if(i%2==1) // SETEAZA CULOAREA BULINELOR
        {
            if(colour1 == 7){
                setcolor(LIGHTBLUE);
                setfillstyle(SOLID_FILL, LIGHTBLUE);
            }

            if(colour1 == 4){
                setcolor(LIGHTRED);
                setfillstyle(SOLID_FILL, LIGHTRED);
            }
            if(colour1 == 11){
                setcolor(LIGHTGREEN);
                setfillstyle(SOLID_FILL, LIGHTGREEN);
            }

            if(colour1 == 12){
                setcolor(YELLOW);
                setfillstyle(SOLID_FILL, YELLOW);
            }

            x=left+border/2;
            dots=boardsize;
        }
        else
        {
            if(colour2 == 7){
                setcolor(LIGHTBLUE);
                setfillstyle(SOLID_FILL, LIGHTBLUE);
            }

            if(colour2 == 4){
                setcolor(LIGHTRED);
                setfillstyle(SOLID_FILL, LIGHTRED);
            }
            if(colour2 == 11){
                setcolor(LIGHTGREEN);
                setfillstyle(SOLID_FILL, LIGHTGREEN);
            }

            if(colour2 == 12){
                setcolor(YELLOW);
                setfillstyle(SOLID_FILL, YELLOW);
            }

            x=left;
            dots=boardsize+1;
        }

        for(int j=1; j<=dots; j++)
        {
            fillellipse(x, y, 22, 22);
            x+=border;
        }
        y+=border/2;
    }

    // SE ADAUGA LINIILE LATERALE

    if(colour2 == 7){
       setcolor(LIGHTBLUE);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour2 == 4){
        setcolor(LIGHTRED);
        setlinestyle(SOLID_LINE, 0 ,10);
    }
    if(colour2 == 11){
        setcolor(LIGHTGREEN);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour2 == 12){
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    line(left, up+border/2, left, up+height-border/2);
    line(left+width, up+border/2, left+width, up+height-border/2);

    if(colour1 == 7){
    setcolor(LIGHTBLUE);
    setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour1 == 4){
        setcolor(LIGHTRED);
    setlinestyle(SOLID_LINE, 0 ,10);
    }
    if(colour1 == 11){
        setcolor(LIGHTGREEN);
    setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour1 == 12){
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    line(left+border/2, up, left+width-border/2, up);
    line(left+border/2, up+height, left+width-border/2, up+height);

}

void initializare(){

    // CREEAZA TABLA DE JOC IN BACKEND - ADICA MATRICEA UNDE SE TIN MINTE POZITIILE PIESELOR SI MUTARILE JUCATORULUI
    int i,j;
    for(i=0; i<=2*boardsize; i++)
        for(j=0; j<=2*boardsize; j++)
            if((i%2==1) && (j%2==0))  // IA VALOAREA 1 IN LOCURILE UNDE SE AFLA BULINE PRIMULUI JUCATOR
                board[i][j]=1;
            else
                if((i%2==0) && (j%2==1))
                    board[i][j]=2; // IA VALOAREA 2 IN LOCURILE UNDE SE AFLA BULINE CELUI DE-AL DOILEA JUCATOR
                else
                    board[i][j]=0; // IA VALOAREA 0 UNDE NU EXISTA BULINE SI UNDE SE VOR TRASEAZA LINIILE


    for(i=0; i<=2*boardsize; i++) // SE STABILESC VALORILE MARGINII TABLEI, CARE IN MATRICE VOR FI DOAR DE 1 SI 2 PENTRU A NU PUTEA FI TRASATE LINII
        {
            board[i][0]=1;
            board[0][i]=2;
            board[i][2*boardsize]=1;
            board[2*boardsize][i]=2;

        }

   /* for(i=0; i<=2*boardsize; i++)
    {
        for(j=0; j<=2*boardsize; j++)
            std::cout<<board[i][j]<<" ";
    std::cout<<"\n";
    }
    */
}

void selected_colour(){

// IN FUNCTIE DE CULOAREA JUCATORULUI CARE INCEPE, VA INSERA IMAGINEA
    if(firstPlayer==1)
    {
        player=2;

        if(strcmp(language, "english")==0)
            {
            if(colour1==4)
                readimagefile("reds_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            if(colour1==7)
                readimagefile("blues_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            if(colour1==11)
                readimagefile("greens_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            if(colour1==12)
                readimagefile("yellows_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            }
            else if(strcmp(language, "french")==0)
                    {
                    if(colour1==4)
                        readimagefile("reds_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    if(colour1==7)
                        readimagefile("blues_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    if(colour1==11)
                        readimagefile("greens_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    if(colour1==12)
                        readimagefile("yellows_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    }
                     else if(strcmp(language, "romanian")==0)
                            {
                            if(colour1==4)
                                readimagefile("reds_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            if(colour1==7)
                                readimagefile("blues_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            if(colour1==11)
                                readimagefile("greens_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            if(colour1==12)
                                readimagefile("yellows_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            }
    }
    else
    {
        player=1;

          if(strcmp(language, "english")==0)
            {
            if(colour2==4)
                readimagefile("reds_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            if(colour2==7)
                readimagefile("blues_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            if(colour2==11)
                readimagefile("greens_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            if(colour2==12)
                readimagefile("yellows_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
            }
            else if(strcmp(language, "french")==0)
                    {
                    if(colour2==4)
                        readimagefile("reds_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    if(colour2==7)
                        readimagefile("blues_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    if(colour2==11)
                        readimagefile("greens_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    if(colour2==12)
                        readimagefile("yellows_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                    }
                     else if(strcmp(language, "romanian")==0)
                            {
                            if(colour2==4)
                                readimagefile("reds_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            if(colour2==7)
                                readimagefile("blues_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            if(colour2==11)
                                readimagefile("greens_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            if(colour2==12)
                                readimagefile("yellows_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
                            }
    }

}

void play_images(){


    // INDICA RANDUL CUI ESTE SA MUTE SI ACTUALIZEAZA NUMARUL JUCATORULUI

    if(player==1)
    {
       player=2;

        if(colour1 == 7){

          if(strcmp(language, "english")==0){
            readimagefile("blues_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("blues_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }


          if(strcmp(language, "romanian")==0){
            readimagefile("blues_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }
        }

        if(colour1 == 4){

          if(strcmp(language, "english")==0){
            readimagefile("reds_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("reds_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("reds_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

        }

        if(colour1 == 11){


          if(strcmp(language, "english")==0){
            readimagefile("greens_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("greens_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("greens_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

        }

        if(colour1 == 12){

          if(strcmp(language, "english")==0){
            readimagefile("yellows_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("yellows_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("yellows_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }
        }
    }
    else
    {
       player=1;

        if(colour2 == 7){
          if(strcmp(language, "english")==0){
            readimagefile("blues_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("blues_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }


          if(strcmp(language, "romanian")==0){
            readimagefile("blues_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }
        }

        if(colour2 == 4){
          if(strcmp(language, "english")==0){
            readimagefile("reds_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("reds_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("reds_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }
        }

        if(colour2 == 11){
          if(strcmp(language, "english")==0){
            readimagefile("greens_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("greens_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("greens_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }
        }

        if(colour2 == 12){
          if(strcmp(language, "english")==0){
            readimagefile("yellows_turn_e.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("yellows_turn_f.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("yellows_turn_r.jpg", 7*dx, 18*dy, 47*dx, 36*dy);
          }
        }
    }
}

void timer(clock_t start, int moves){

    char chartime[19], charmoves[19];
    int timepassed, ok=1;

        settextstyle(4, HORIZ_DIR, 3);
        setcolor(BLACK);

        clock_t duration;
        duration=difftime(clock(), start);
        timepassed=(int)duration/1000;

        itoa(timepassed, chartime, 10);
        itoa(moves, charmoves, 10);

        outtextxy(20*dx, 74*dy, charmoves);
        outtextxy(20*dx, 79*dy, chartime);

}

void play() {

    // FUNCTIA CARE DA START JOCULUI PLAYER VS PLAYER

    moves=0;
    player=playerline=firstPlayer;

    // INSEREAZA IMAGINILE CU BUTOANE

    selected_colour();

    if(strcmp(language, "english")==0)
    {
        readimagefile("menu_e.jpg", 11*dx, 45*dy, 34*dx, 55*dy);
        readimagefile("restart.jpg", 11*dx, 57*dy, 34*dx, 67*dy);
    }

    if(strcmp(language, "french")==0)
    {
        readimagefile("menu_f.jpg", 11*dx, 45*dy, 34*dx, 55*dy);
        readimagefile("restart_f.jpg", 11*dx, 57*dy, 34*dx, 67*dy);
    }

    if(strcmp(language, "romanian")==0)
    {
        readimagefile("menu_r.jpg",11*dx, 45*dy, 34*dx, 55*dy);
        readimagefile("restart.jpg", 11*dx, 57*dy, 34*dx, 67*dy);
    }

    bool done=true;
    int linia, col, x, y, last_line, last_column;

    clock_t duration;
    clock_t start;
    start=clock();

    if(strcmp(language, "english")==0)
        readimagefile("playb_e.jpg", 10*dx,71*dy, 25*dx, 85*dy);
        else if(strcmp(language, "french")==0)
                readimagefile("playb_f.jpg", 5*dx,71*dy, 19*dx, 85*dy);
                    else if(strcmp(language, "romanian")==0)
                        readimagefile("playb_r.jpg", 5*dx,71*dy, 19*dx, 85*dy);

    timer(start, moves);


    while(done)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN)) // CAT TIMP CURSORUL SE AFLA IN INTERIORUL TABLEI DE JOC
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=left && x<=left+width && y>=up && y<=up+height)
            {
                linia=(y-up+4*dy)/(border/2);
                col=(x-left+3*dx)/(border/2);

                if(board[linia][col]==0)
                {
                    last_line=linia;
                    last_column=col;
                    moves++;
                    timer(start, moves);
                    play_images();
                    drawline(linia, col);


                    int winner=victory(linia, col);
                    if(winner)
                    {
                        if(player==2)
                            player=1;
                        else player=2;

                        winner=player;
                        done=false;
                        endgame();
                    }
                }
            }
            else
                if(x>=9*dx && x<=36*dx && y>=58*dy && y<=68*dy) // VERIFICA DACA ESTE APASAT BUTONUL DE RESTART, CARE RESETEAZA TABLA
                {
                    if(player==culoare)
                        player=1;
                    else
                        player=2;

                    done=false;
                    initializare();
                    drawboard();
                    computerplay();
                }
            else
               if(x>=9*dx && x<=36*dx && y>=45*dy && y<=55*dy) // VERIFICA DACA ESTE APASAT BUTONUL DE MENIU, SI IN FUNCTIE DE LIMBA, INSEREAZA IMAGINEA
                {
                    done=false;

                    if(strcmp(language, "english")==0)
                        menu_english();
                    if(strcmp(language, "french")==0)
                        menu_french();
                    if(strcmp(language, "romanian")==0)
                        menu_romanian();
                }
        }
    }
}

void computerplay(){

    // FUNCTIA CARE DA START JOCULUI PLAYER VS COMPUTER

    moves=0;
    player=playerline=firstPlayer;

     //  INSEREAZA IMAGINILE CU BUTOANE

    selected_colour();

    if(strcmp(language, "english")==0)
    {
        readimagefile("menu_e.jpg", 11*dx, 45*dy, 34*dx, 55*dy);
        readimagefile("restart.jpg", 11*dx, 57*dy, 34*dx, 67*dy);
    }

    if(strcmp(language, "french")==0)
    {
        readimagefile("menu_f.jpg", 11*dx, 45*dy, 34*dx, 55*dy);
        readimagefile("restart_f.jpg", 11*dx, 57*dy, 34*dx, 67*dy);
    }

    if(strcmp(language, "romanian")==0)
    {
        readimagefile("menu_r.jpg",11*dx, 45*dy, 34*dx, 55*dy);
        readimagefile("restart.jpg", 11*dx, 57*dy, 34*dx, 67*dy);
    }

    bool done=true;
    int linia, col, last_line, last_column, lastline, lastcol;

    clock_t duration;
    clock_t start;
    start=clock();

    if(strcmp(language, "english")==0)
        readimagefile("playb_e.jpg", 10*dx,71*dy, 25*dx, 85*dy);
        else if(strcmp(language, "french")==0)
                readimagefile("playb_f.jpg", 5*dx,71*dy, 19*dx, 85*dy);
                    else if(strcmp(language, "romanian")==0)
                        readimagefile("playb_r.jpg", 5*dx,71*dy, 19*dx, 85*dy);

    timer(start, moves);

    while(done)
    {
        int x=mousex();
        int y=mousey();

        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

                if(x>=left && x<=left+width && y>=up && y<=up+height)
                {
                    linia=(y-up+dy*4)/(border/2);
                    col=(x-left+dx*3)/(border/2);

                    if(board[linia][col]==0)
                    {
                        last_line=linia;
                        last_column=col;
                        moves++;
                        timer(start, moves);
                        play_images();
                        drawline(linia, col);

                        int winner=victory(linia, col);

                        if(winner)
                        {
                            player=winner;
                            done=false;
                            endgame();
                        }
                        else
                        {
                            if(currentWindow==16)
                            {
                                delay(900);
                                play_images();

                                if(difficulty==1)
                                    easylevel(linia, col);
                                else
                                    if(difficulty==2)
                                    {
                                        linia=linia;
                                        col=col;
                                        mediumlevel(linia, col);
                                    }
                                    else
                                        hardlevel(lastline, lastcol, linia, col);

                                lastline=linia;
                                lastcol=col;
                                drawline(linia, col);

                                winner=victory(linia, col);
                                if(winner)
                                {
                                    player=winner;
                                    done=false;
                                    endgame();
                                }
                            }
                        }
                    }
                }
                else
                    if(x>=9*dx && x<=36*dx && y>=58*dy && y<=68*dy) // VERIFICA DACA ESTE APASAT BUTONUL DE RESTART
                    {
                        if(player==culoare)
                            player=1;
                        else
                            player=2;
                        done=false;
                        initializare();
                        drawboard();
                        computerplay();
                    }
                    else
                        if(x>=9*dx && x<=36*dx && y>=45*dy && y<=55*dy) // VERIFICA DACA ESTE APASAT BUTONUL DE MENIU SI, IN FUNCTIE DE LIMBA SELECTATA, INSEREAZA IMAGINEA
                    {
                     done=false;

                        if(strcmp(language, "english")==0)
                            menu_english();
                        if(strcmp(language, "french")==0)
                            menu_french();
                        if(strcmp(language, "romanian")==0)
                            menu_romanian();
                    }
            }
            /*
            else
                {
                        linia=(y-up+dy*4)/(border/2);
                        col=(x-left+dx*3)/(border/2);

                        if(difficulty==1)
                            easylevel(linia, col);
                                else
                                    if(difficulty==2)
                                        mediumlevel(linia, col);
                                    else
                                        hardlevel(lastline, lastcol, linia, col);

                        lastline=linia;
                        lastcol=col;
                        drawline(linia, col);
                        int winner=victory(linia, col);

                        if(winner)
                        {
                            player=winner;
                            done=false;
                            endgame();
                        }
                        else
                                if(x>=left && x<=left+width && y>=up && y<=up+height)
                                {
                                    linia=(y-up+dy*4)/(border/2);
                                    col=(x-left+dx*3)/(border/2);

                                    if(board[linia][col]==0)
                                    {
                                        last_line=linia;
                                        last_column=col;
                                        moves++;
                                        timer(start, moves);
                                        play_images();
                                        drawline(linia, col);

                                        int winner=victory(linia, col);

                                        if(winner)
                                        {
                                            player=winner;
                                            done=false;
                                            endgame();
                                        }
                                    }
                                }
                                else
                                    if(x>=9*dx && x<=36*dx && y>=58*dy && y<=68*dy) // VERIFICA DACA ESTE APASAT BUTONUL DE RESTART
                                    {
                                        if(player==culoare)
                                            player=1;
                                        else
                                            player=2;

                                        done=false;
                                        initializare();
                                        drawboard();
                                        computerplay();
                                    }
                                    else
                                        if(x>=9*dx && x<=36*dx && y>=45*dy && y<=55*dy) // VERIFICA DACA ESTE APASAT BUTONUL DE MENIU SI, IN FUNCTIE DE LIMBA SELECTATA, INSEREAZA IMAGINEA
                                        {
                                            done=false;

                                            if(strcmp(language, "english")==0)
                                                menu_english();
                                            if(strcmp(language, "french")==0)
                                                menu_french();
                                            if(strcmp(language, "romanian")==0)
                                                menu_romanian();
                                        }
                }
                */

    }
}

void easylevel(int &linia, int &col){

    // MODUL EASY PENTRU PLAYER VS COMPUTER - PUNE RANDOM O LINIE

    int mutare=0;

    while(mutare==0)
    {
        linia=rand()%(2*boardsize)+1;
        col=rand()%(2*boardsize)+1;

        if(board[linia][col]==0)
        {
            board[linia][col]=player;
            mutare=1;
        }
    }
}

void mediumlevel(int &linia, int &col){

    // MODUL MEDIUM PENTRU PLAYER VS COMPUTER

    if(moves==0)
        easylevel(linia, col); // DACA NU ESTE FACUTA NICIO MUTARE, ATUNCI CALCULATORUL VA PUNE ALEATORIU O LINIE

    else
        {
            int mutare=0;

            if((board[linia][col-1]!=player) && (board[linia][col+1]!=player)) // VERIFICA DACA PE INALTIME SE AFLA INTRE 2 BULINE DE CULOAREA CELUILALT JUCATOR
            {
                for(int i=1; i<=boardsize; i++)
                {
                    if((board[linia-i][col]==0)&& (mutare==0) &&(linia-i>0))
                        {
                            board[linia-i][col]=player;
                            mutare=1;
                            linia=linia-i;
                        }
                    if((board[linia+i][col]==0)&& (mutare==0) &&(linia+i<2*boardsize+1))
                    {
                        board[linia+i][col]=player;
                        mutare=1;
                        linia=linia+i;
                    }
                }
            }
                else
                    if((board[linia-1][col]!=player) && (board[linia+1][col]!=player)) // VERIFICA DACA PE LATIME SE AFLA INTRE 2 BULINE DE CULOAREA CELUILALT JUCATOR
                        {
                            for(int i=1; i<=boardsize;i++)
                            {
                                if((board[linia][col-i]==0) && (mutare==0) && (col-i>0))
                                    {
                                        board[linia][col-i]=player;
                                        mutare=1;
                                        col=col-i;
                                    }
                                if((board[linia][col+i]==0) && (mutare==0) && (col+i<2*boardsize+1))
                                    {
                                        board[linia][col+i]=player;
                                        mutare=1;
                                        col=col+i;
                                    }
                            }
                        }
                        if(mutare==0)
                            easylevel(linia, col);
        }
}

void hardlevel(int lastline, int lastcol, int &linia, int &col){
    int queuei[100]={0}, queuej[100]={0}, n=1;
    int di[4]={0, 0, 1, -1};
    int dj[4]={1, -1, 0, 0};
    queuei[1]=lastline;
    queuej[1]=lastcol;

    // MODUL HARD PENTRU PLAYER VS COMPUTER

    if((moves==0)  || (moves==1)) // DACA ESTE PRIMA SAU A DOUA MUTARE, ATUNCI VA APELA FUNCTIA EASYLEVEL CU AJUTORUL CAREIA I SE VA DA O POZITIE ALEATORIE
            easylevel(linia, col);
        else // IN CAZ CONTRAT, SE VOR RETINE VECINII POZITIEI ANTERIOARE IN VECTOR
            {
                int MOVE=0;
                if((board[lastline][lastcol-1]==player) && (board[lastline][lastcol+1]==player))
                    {
                        queuej[++n]=lastcol-1;
                        queuei[n]=lastline;
                        queuej[++n]=lastcol+1;
                        queuei[n]=lastline;
                    }
                if((board[lastline-1][lastcol]==player) && (board[lastline+1][lastcol]==player))
                    {
                        queuei[++n]=lastline-1;
                        queuej[n]=lastcol;
                        queuei[++n]=lastline+1;
                        queuej[n]=lastcol;
                    }
                n=1;
                while(MOVE==0 && queuei[n]!=0 && queuej[n]!=0)
                    {
                       for(int i=0; i<=3; i++)
                            if((board[queuei[n]+di[i]][queuej[n]+dj[i]]==player) && (queuei[n]+di[i]>=0) && (queuei[n]+di[i]<=2*boardsize) && (queuej[n]+dj[i]>=0) && (queuej[n]+dj[i]<=2*boardsize))
                               {
                                    queuei[++n]=queuei[n]+di[i];
                                    queuej[n]=queuej[n]+dj[i];
                               }
                       for(int i=0; i<=3; i++)
                            if((board[queuei[n]+di[i]][queuej[n]+dj[i]]==0))
                                {
                                    board[queuei[n]+di[i]][queuej[n]+dj[i]]=player;
                                    linia=queuei[n];
                                    col=queuej[n];
                                    MOVE=1;
                                }
                                    n++;
                                    linia=linia;
                                    col=col+1;
                    }
                if(MOVE==0)
                    mediumlevel(linia, col);
            }
}

void butoane_victory(){

    // VERIFICA CE JUCATOR A CASTIGAT SI AFISEAZA IMAGINEA

    if(player==2)
        {
            if(strcmp(language, "english")==0)
            {
                if(colour1==7)
                    readimagefile("blue_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==4)
                    readimagefile("red_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==12)
                    readimagefile("yellow_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==11)
                    readimagefile("green_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
            }

            if(strcmp(language, "french")==0)
            {
                if(colour1==7)
                    readimagefile("blue_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==4)
                    readimagefile("red_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==12)
                    readimagefile("yellow_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==11)
                    readimagefile("green_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
            }

            if(strcmp(language, "romanian")==0)
            {
                if(colour1==7)
                    readimagefile("blue_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==4)
                    readimagefile("red_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==12)
                    readimagefile("yellow_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour1==11)
                    readimagefile("green_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
            }
        }
        else
        {
            if(strcmp(language, "english")==0)
            {
                if(colour2==7)
                    readimagefile("blue_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==4)
                    readimagefile("red_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==12)
                    readimagefile("yellow_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==11)
                    readimagefile("green_won_e.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
            }

            if(strcmp(language, "french")==0)
            {
                if(colour2==7)
                    readimagefile("blue_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==4)
                    readimagefile("red_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==12)
                    readimagefile("yellow_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==11)
                    readimagefile("green_won_f.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
            }

            if(strcmp(language, "romanian")==0)
            {
                if(colour2==7)
                    readimagefile("blue_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==4)
                    readimagefile("red_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==12)
                    readimagefile("yellow_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
                if(colour2==11)
                    readimagefile("green_won_r.jpg", getmaxwidth()/2 - dx*35, dy*10, getmaxwidth()/2 + dx*35, dy*65);
            }
        }

        if(strcmp(language, "english")==0)
        {
            readimagefile("menu_e.jpg", getmaxwidth()/2 - dx*12, dy*65, getmaxwidth()/2 + dx*12, dy*75);
            readimagefile("playagain_e.jpg", getmaxwidth()/2 - dx*12, dy*77, getmaxwidth()/2 + dx*12, dy*87);
        }
        else if(strcmp(language, "french")==0)
                {
                    readimagefile("menu_f.jpg", getmaxwidth()/2 - dx*12, dy*65, getmaxwidth()/2 + dx*12, dy*75);
                    readimagefile("playagain_f.jpg", getmaxwidth()/2 - dx*12, dy*75, getmaxwidth()/2 + dx*12, dy*87);
                }
                else if(strcmp(language, "romanian")==0)
                        {
                            readimagefile("menu_r.jpg", getmaxwidth()/2 - dx*12, dy*65, getmaxwidth()/2 + dx*12, dy*75);
                            readimagefile("playagain_r.jpg", getmaxwidth()/2 - dx*12, dy*77, getmaxwidth()/2 + dx*12, dy*87);
                        }

}

int victory(int linia, int col){

    int queuei[50]={0}, queuej[50]={0}, first=1, last=1, i, j, aux[50][50]={0};

    queuei[first]=linia;
    queuej[first]=col;

    while(first<=last) // VERIFICA DACA DINTR-UN PUNCT NU PLEACA DEJA 4 LINII
        {
            i=queuei[first];
            j=queuej[first];
            aux[i][j]=1;

            if((abs(board[i][j+1])==abs(board[i][j])) && (aux[i][j+1]!=1) && (i!=2*boardsize) && (i!=0) && (j+1!=0) && (j+1!=2*boardsize)) // VERIFICA
                {
                    aux[i][j+1]=1;
                    last++;
                    queuei[last]=i;
                    queuej[last]=j+1;
                }
            if((abs(board[i][j-1])==abs(board[i][j])) && (aux[i][j-1]!=1) && (i!=2*boardsize) && (i!=0) && (j-1!=0) && (j-1!=2*boardsize))
                {
                    aux[i][j-1]=1;
                    last++;
                    queuei[last]=i;
                    queuej[last]=j-1;
                }
            if((abs(board[i+1][j])==abs(board[i][j])) && (aux[i+1][j]!=1) && (i+1!=2*boardsize) && (i+1!=0) && (j!=0) && (j!=2*boardsize))
                {
                    aux[i+1][j]=1;
                    last++;
                    queuei[last]=i+1;
                    queuej[last]=j;
                }
            if((abs(board[i-1][j])==abs(board[i][j])) && (aux[i-1][j]!=1) && (i-1!=2*boardsize) && (i-1!=0) && (j!=0) && (j!=2*boardsize))
                {
                    aux[i-1][j]=1;
                    last++;
                    queuei[last]=i-1;
                    queuej[last]=j;
                }
            first++;
        }

        if(playerline==2)
        {
            int cond1=0, cond2=0;
            for(int i=1; i<=last; i++)
                {
                    if(queuei[i]==1)
                        cond1=1;
                     if(queuei[i]==2*boardsize-1)
                        cond2=1;
                }
            if((cond1==1) && (cond2==1))
                {
                    return playerline;
                }
        }
        if(playerline==1)
        {
            int cond1=0, cond2=0;
            for(int j=1; j<=last; j++)
                {
                    if(queuej[j]==1)
                        cond1=1;
                     if(queuej[j]==2*boardsize-1)
                        cond2=1;
                }
            if((cond1==1) && (cond2==1))
                {
                    return playerline;
                }
        }
        return 0;
}

void endgame(){

    delay(700);

    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);

    butoane_victory();

    bool done=true;
    int x, y;
    while(done)
    {
        x=mousex();  y=mousey();

        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=getmaxwidth()/2 - dx*12 && x<=getmaxwidth()/2 + dx*12 && y>=dy*77 && y<=dy*87)
                {
                    done=false;

                    if(player==culoare)
                        player=1;
                    else
                        player=2;

                    initializare();
                    drawboard();

                    if(nrplayers==1)
                        computerplay();
                    else
                        play();
                }
                else
                    if(x>=getmaxwidth()/2 - dx*12 && x<=getmaxwidth()/2 + dx*12 && y>=dy*65 && y<=dy*75)
                {
                    done=false;

                    if(strcmp(language, "english")==0)
                        menu_english();
                    if(strcmp(language, "french")==0)
                        menu_french();
                    if(strcmp(language, "romanian")==0)
                        menu_romanian();
                }

        }
    }
}

void maindraw(){

    // FUNCTIA PRINCIPALA A TABLEI DE JOC

    clearviewport();

    initializare();
    drawboard();

    if(nrplayers==1)
        computerplay();
    else
        play();
}


   /* vector<int> timepassed;
    dimens.push_back(minute);
    dimens.push_back(secunde);
    std::thread t1(timer, timepassed);

void timer(vector<int> timepassed)
{
    int secunde = timepassed[3];

    settextstyle(3, HORIZ_DIR, 4);

    while(true)
    {
        std::string s = std::to_string(minute);
        char chr_m;
        strcpy(chr_m,(char)s.c_str());
        outtextxy(x1, y1, chr_m);

        outtextxy(x2, y2, ":");

        s = std::to_string(secunde);
        char chr_s;
        strcpy(chr_s,(char)s.c_str());
        outtextxy(x3, y3, chr_s);

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        secunde --;
        if(secunde == 0 && minute == 0)
            break;


        if(secunde <= 0)
        {
            secunde = 120;
            minute--;
        }
    }

}*/



















