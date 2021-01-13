
// ALEXANDRA SI ADINA

#define border 120

int board[12][12];
int left, up, width, height, culoare=colour1, player=1, moves=0;

void initializare();
void tabla_consola();
void drawboard();
void drawline (int linia, int col);
void eraseline(int linia, int col);
void play();
void computerplay();
void easylevel(int &linia, int &col);
void mediumlevel(int &linia, int &col);
void hardlevel(int lastline, int lastcol, int &linia, int &col);
void endgame();
void timer(clock_t start, int numarmutari);
int victory(int linia, int col);

void eraseline(int linia, int col){
    setcolor(RED);
    setlinestyle(SOLID_FILL, 0 ,5);

    if(board[linia][col]==-1*player)
    {
        board[linia][col]=0;
        if(board[linia][col-1]==player)
        {
            line(left+(col-1)*(border/2)+22, up+linia*(border/2), left+(col+1)*(border/2)-21,up+linia*(border/2));
            moves--;
        }
        else
        {
            line(left+col*(border/2), up+(linia-1)*(border/2)+22, left+col*(border/2), up+(linia+1)*(border/2)-21);
        }   moves--;
    }

    if(player==1)
    {
        player=2;

        if(colour1 == 7){

          if(strcmp(language, "english")==0){
            readimagefile("blues_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("blues_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }


          if(strcmp(language, "romanian")==0){
            readimagefile("blues_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour1 == 4){

          if(strcmp(language, "english")==0){
            readimagefile("reds_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("reds_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romanian")==0){
            readimagefile("reds_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

        }

        if(colour1 == 11){


          if(strcmp(language, "english")==0){
            readimagefile("greens_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("greens_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("greens_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

        }

        if(colour1 == 12){

          if(strcmp(language, "english")==0){
            readimagefile("yellows_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("yellows_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("yellows_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

    }
    else
    {
        player=1;

        if(colour2 == 7){
          if(strcmp(language, "english")==0){
            readimagefile("blues_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("blues_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }


          if(strcmp(language, "romana")==0){
            readimagefile("blues_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour2 == 4){
          if(strcmp(language, "english")==0){
            readimagefile("reds_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("reds_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("reds_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour2 == 11){
          if(strcmp(language, "english")==0){
            readimagefile("greens_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("greens_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("greens_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour2 == 12){
          if(strcmp(language, "english")==0){
            readimagefile("yellows_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("yellows_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("yellows_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }
    }
}

void drawline(int linia, int col){

    if(player==1)
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

        player=2;
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

        player=1;
    }
    board[linia][col]=-1*player;

    if(board[linia][col-1]==player)
       line(left+(col-1)*(border/2), up+linia*(border/2), left+(col+1)*(border/2), up+linia*(border/2));
    else
       line(left+col*(border/2), up+(linia-1)*(border/2), left+col*(border/2), up+(linia+1)*(border/2));
}

void drawboard(){    // SE INITIALIZEAZA DESENUL PENTRU TABLA DE JOC

    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);

    int i,j;
    width=height=border*boardsize;
    up=(getmaxheight()-height)/2;
    left=(getmaxwidth()-width)/2+20*dx;

    int x=left, y=up;
    int dots;

    // SE ADAUGA PIESELE

    for(int i=1; i<=2*boardsize+1; i++)
    {
        if(i%2==1)
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

    // CREEAZA TABLA DE JOC IN BACnEND - ADICA MATRICEA UNDE SE TIN MINTE POZITIILE PIESELOR SI MUTARILE playerULUI
    int i,j;
    for(i=0; i<=2*boardsize; i++)
        for(j=0; j<=2*boardsize; j++)
            if((i%2==1) && (j%2==0))
                board[i][j]=1;
            else
                if((i%2==0) && (j%2==1))
                    board[i][j]=2;
                else
                    board[i][j]=0;
    for(i=0; i<=2*boardsize; i++)
        {
            board[i][0]=1;
            board[0][i]=2;
            board[i][2*boardsize]=1;
            board[2*boardsize][i]=2;

        }

    for(i=0; i<=2*boardsize; i++)
    {
        for(j=0; j<=2*boardsize; j++)
            std::cout<<board[i][j]<<" ";
    std::cout<<"\n";
    }
}

void play_images(){


    // INDICA RANDUL CUI ESTE SA MUTE

    if(player==1)
    {

        if(colour1 == 7){

          if(strcmp(language, "english")==0){
            readimagefile("blues_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("blues_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }


          if(strcmp(language, "romana")==0){
            readimagefile("blues_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour1 == 4){

          if(strcmp(language, "english")==0){
            readimagefile("reds_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("reds_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("reds_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

        }

        if(colour1 == 11){


          if(strcmp(language, "english")==0){
            readimagefile("greens_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("greens_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("greens_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

        }

        if(colour1 == 12){

          if(strcmp(language, "english")==0){
            readimagefile("yellows_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("yellows_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("yellows_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

    }
    else
    {
        if(colour2 == 7){
          if(strcmp(language, "english")==0){
            readimagefile("blues_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("blues_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }


          if(strcmp(language, "romana")==0){
            readimagefile("blues_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour2 == 4){
          if(strcmp(language, "english")==0){
            readimagefile("reds_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("reds_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("reds_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour2 == 11){
          if(strcmp(language, "english")==0){
            readimagefile("greens_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("greens_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("greens_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }

        if(colour2 == 12){
          if(strcmp(language, "english")==0){
            readimagefile("yellows_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "french")==0){
            readimagefile("yellows_turn_f.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }

          if(strcmp(language, "romana")==0){
            readimagefile("yellows_turn_r.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
          }
        }
    }

    if(strcmp(language, "english")==0)
    {
        readimagefile("menu_e.jpg", 9*dx, 45*dy, 36*dx, 55*dy);
        readimagefile("restart.jpg", 9*dx, 57*dy, 36*dx, 67*dy);
    }

    if(strcmp(language, "french")==0)
    {
        readimagefile("menu_f.jpg", 9*dx, 45*dy, 36*dx, 55*dy);
        readimagefile("restart_f.jpg", 9*dx, 57*dy, 36*dx, 67*dy);
    }

    if(strcmp(language, "romanian")==0)
    {
        readimagefile("menu_r.jpg",9*dx, 45*dy, 36*dx, 55*dy);
        readimagefile("restart.jpg", 9*dx, 57*dy, 36*dx, 67*dy);
    }

}


void play() {

    // FUNCTIA CARE DA START JOCULUI PLAYER VS PLAYER

    moves=0;

    play_images();

    bool done=true, undo=1;
    int linia, col, x, y, last_line, last_column;


    moves=0;
    clock_t duration;
    clock_t start;
    start=clock();

    while(done)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=left && x<=left+width && y>=up && y<=up+height)
            {
                linia=(y-up+2*dy)/(border/2);
                col=(x-left+dx)/(border/2);

                if(board[linia][col]==0)
                {
                    last_line=linia;
                    last_column=col;
                    undo=0;
                    drawline(linia, col);
                    moves++;
                    int winner=victory(linia, col);
                    if(winner)
                    {
                        player=winner;
                        done=false;
                        timer(start, moves);
                        endgame();
                    }
                }
            }
            else
               if(x>=9*dx && x<=36*dx && y>=57*dy && y<=67*dy)
            {
                if(player==culoare)
                    player=1;
                else
                    player=2;

                done=false;
                initializare();
                drawboard;
                play();
            }
            else
               if(x>=9*dx && x<=36*dx && y>=45*dy && y<=55*dy)
                {
                    done=false;

                    if(strcmp(language, "english")==0)
                        menu_english();
                    if(strcmp(language, "french")==0)
                        menu_french();
                    if(strcmp(language, "romana")==0)
                        menu_romanian();
                }
        }

        if(ismouseclick(WM_RBUTTONDOWN))
        {
            clearmouseclick(WM_RBUTTONDOWN);
            if(undo==0)
            {
                undo=1;
                eraseline(last_line, last_column);
            }
        }
    }
}

void timer(clock_t start, int numarmutari){
    char charscor[19];
    int scor, penalty;
    clock_t duration;
    duration=difftime(clock(), start);
    scor=(int)duration + moves;

    penalty=1000-scor;
    if(penalty<0)
        penalty=0;
    itoa(penalty, charscor, 10);
    setcolor(BLACK);

    outtextxy(150, 700, "SCOR :");
    outtextxy(textwidth("SCOR :")+120, 700, charscor);
}

void selected_colour(){

    if(firstPlayer==1)
    {
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

void computerplay(){

    // FUNCTIA CARE DA START JOCULUI PLAYER VS COMPUTER

    moves=0;

    selected_colour();

    bool done=true, undo=1;
    int linia, col, last_line, last_column, lastline, lastcol;

    moves=0;

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

    clock_t duration;
    clock_t start;
    start=clock();
    while(done)
    {
        int x=mousex();
        int y=mousey();

        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=left && x<=left+width && y>=up && y<=up+height)
            {
                linia=(y-up+dy*3)/(border/2);
                col=(x-left+dx*3)/(border/2);

                if(board[linia][col]==0)
                {
                    last_line=linia;
                    last_column=col;
                    undo=0;
                    drawline(linia, col);
                    moves++;
                    int winner=victory(linia, col);

                    if(winner)
                    {
                        player=winner;
                        done=false;
                        timer(start, moves);
                        endgame();
                    }
                    else
                    {
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
                        moves++;

                        winner=victory(linia, col);
                        if(winner)
                        {
                            player=winner;
                            done=false;
                            timer(start, moves);
                            endgame();
                        }
                    }
                }
            }
            else
                if(x>=9*dx && x<=36*dx && y>=58*dy && y<=68*dy)
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
                    if(x>=9*dx && x<=36*dx && y>=45*dy && y<=55*dy)
                {
                 done=false;

                   if(strcmp(language, "english")==0)
                        menu_english();
                    if(strcmp(language, "french")==0)
                        menu_french();
                    if(strcmp(language, "romana")==0)
                        menu_romanian();
                }
        }

        if(ismouseclick(WM_RBUTTONDOWN))
        {
            clearmouseclick(WM_RBUTTONDOWN);
            if(undo==0)
            {
                undo=1;
                eraseline(lastline, lastcol);
                eraseline(last_line, last_column);
            }
        }
    }
}

void easylevel(int &linia, int &col){

    // MODUL EASY PENTRU PLAYER VS COMPUTER

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
        easylevel(linia, col);

    else
        {
            int mutare=0;

            if((board[linia][col-1]!=player) && (board[linia][col+1]!=player))
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
                    if((board[linia-1][col]!=player) && (board[linia+1][col]!=player)) // !!!!
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

    if((moves==0)  || (moves==1))
            easylevel(linia, col);
        else
            {
                int miscare=0;
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
                while((miscare==0) && (queuei[n]!=0) && (queuej[n]!=0))
                    {
                       for(int i=0; i<=3; i++)
                            if((board[queuei[n]+di[i]][queuej[n]+dj[i]]==player) && (queuei[n]+di[i]>0) && (queuei[n]+di[i]<=2*boardsize) && (queuej[n]+dj[i]>0) && (queuej[n]+dj[i]<=2*boardsize))
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
                                    miscare=1;
                                }
                                    n++;
                    }
                if(miscare==0)
                    mediumlevel(linia, col);
            }
}

void butoane_victory(){

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
                    readimagefile("playagain_f.jpg", getmaxwidth()/2 - dx*12, dy*77, getmaxwidth()/2 + dx*12, dy*87);
                }
                else if(strcmp(language, "romanian")==0)
                        {
                            readimagefile("menu_r.jpg", getmaxwidth()/2 - dx*12, dy*65, getmaxwidth()/2 + dx*12, dy*75);
                            readimagefile("playagain_r.jpg", getmaxwidth()/2 - dx*12, dy*77, getmaxwidth()/2 + dx*12, dy*87);
                        }

}

int victory(int linia, int col){

    int queuei[50]={0}, queuej[50]={0}, first=1, last=1, i, j, aux[12][12]={0};

    queuei[first]=linia;
    queuej[first]=col;

    while(first<=last)
        {
            i=queuei[first];
            j=queuej[first];
            aux[i][j]=1;

            if((abs(board[i][j+1])==abs(board[i][j])) && (aux[i][j+1]!=1) && (i!=2*boardsize) && (i!=0) && (j+1!=0) && (j+1!=2*boardsize))
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

        if(player==2)
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
                    return player;
                }
        }
        if(player==1)
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
                    return player;
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

    clearviewport();

    initializare();
    drawboard();

    if(nrplayers==1)
        computerplay();
    else
        play();
}






















