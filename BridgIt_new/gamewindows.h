// ALEXANDRA SI ADINA
#define border 120

int board[12][12];
int left, up, width, height, boarddimension=5, jucator=1, culoare=colour1, player=1, moves=0, nrjucatori=2;

struct buton{
    int x1, y1, x2, y2, mx, my;
    char text[20];
};

void initializare();
void tabla_consola();
void drawbutton (buton &b, int textsize=3, int colour=BLACK);
void boarddraw();
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

    if(board[linia][col]==-1*jucator)
    {
        board[linia][col]=0;
        if(board[linia][col-1]==jucator)
        {
            line(left+(col-1)*(border/2)+22, up+linia*(border/2), left+(col+1)*(border/2)-21,up+linia*(border/2));
            moves--;
        }
        else
        {
            line(left+col*(border/2), up+(linia-1)*(border/2)+22, left+col*(border/2), up+(linia+1)*(border/2)-21);
        }   moves--;
    }

    if(jucator==1)
    {
        jucator=2;

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

        if(colour1 == 12){


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

        if(colour1 == 11){

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
        jucator=1;

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

        if(colour2 == 12){
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

        if(colour2 == 11){
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
    if(jucator==1)
    {
        jucator=2;

        if(colour1 == 7){
            setcolor(LIGHTBLUE);
            setlinestyle(SOLID_LINE, 0 ,8);
        }

        if(colour1 == 4){
            setcolor(LIGHTRED);
            setlinestyle(SOLID_LINE, 0 ,8);
        }
        if(colour1 == 12){
            setcolor(LIGHTGREEN);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
        if(colour1 == 11){
            setcolor(YELLOW);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
    }
    else
    {
        jucator=1;

        if(colour2 == 7){
            setcolor(LIGHTBLUE);
            setlinestyle(SOLID_LINE, 0 ,8);
        }

        if(colour2 == 4){
            setcolor(LIGHTRED);
            setlinestyle(SOLID_LINE, 0 ,8);
        }
        if(colour2 == 12){
            setcolor(LIGHTGREEN);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
        if(colour2 == 11){
            setcolor(YELLOW);
            setlinestyle(SOLID_LINE, 0 , 8);
        }
    }
    board[linia][col]=-1*jucator;

    if(board[linia][col-1]==jucator)
       line(left+(col-1)*(border/2), up+linia*(border/2), left+(col+1)*(border/2), up+linia*(border/2));
    else
       line(left+col*(border/2), up+(linia-1)*(border/2), left+col*(border/2), up+(linia+1)*(border/2));
}

void boarddraw(){    // SE INITIALIZEAZA DESENUL PENTRU TABLA DE JOC

    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);

    int i,j;
    width=height=border*boarddimension;
    up=(getmaxheight()-height)/2;
    left=(getmaxwidth()-width)/2+20*dx;

    int x=left, y=up;
    int dots;

    // SE ADAUGA PIESELE
    for(int i=1; i<=2*boarddimension+1; i++)
    {
        if(i%2)
            // 7 albastru, 4 rosu 12 galben 11 verde
        {
            if(colour1 == 7){
                setcolor(LIGHTBLUE);
                setfillstyle(SOLID_FILL, LIGHTBLUE);
            }

            if(colour1 == 4){
                setcolor(LIGHTRED);
                setfillstyle(SOLID_FILL, LIGHTRED);
            }
            if(colour1 == 12){
                setcolor(LIGHTGREEN);
                setfillstyle(SOLID_FILL, LIGHTGREEN);
            }

            if(colour1 == 11){
                setcolor(YELLOW);
                setfillstyle(SOLID_FILL, YELLOW);
            }

            x=left+border/2;
            dots=boarddimension;
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
            if(colour2 == 12){
                setcolor(LIGHTGREEN);
                setfillstyle(SOLID_FILL, LIGHTGREEN);
            }

            if(colour2 == 11){
                setcolor(YELLOW);
                setfillstyle(SOLID_FILL, YELLOW);
            }

            x=left;
            dots=boarddimension+1;
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
    if(colour2 == 12){
        setcolor(LIGHTGREEN);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour2 == 11){
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    line(left, up+border/2-10, left, up+height-border/2+10);
    line(left+width, up+border/2-10, left+width, up+height-border/2+10);

    if(colour1 == 7){
    setcolor(LIGHTBLUE);
    setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour1 == 4){
        setcolor(LIGHTRED);
    setlinestyle(SOLID_LINE, 0 ,10);
    }
    if(colour1 == 12){
        setcolor(LIGHTGREEN);
    setlinestyle(SOLID_LINE, 0 ,10);
    }

    if(colour1 == 11){
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 0 ,10);
    }

    line(left+border/2-10, up, left+width-border/2+10, up);
    line(left+border/2-10, up+height, left+width-border/2+10, up+height);

}

void drawbutton(buton &b, int textsize, int colour) {
        // FUNCTIA CE CREEAZA BUTOANELE DE NAVIGARE
        settextstyle(TRIPLEX_FONT, HORIZ_DIR, textsize);
        int inaltime=textheight(b.text);
        int lungime=textwidth(b.text);

        b.x1=b.mx;
        b.y1=b.my;
        b.x2=b.x1+lungime;
        b.y2=b.y1+inaltime;

        setcolor(colour);
        outtextxy(b.x1+7, b.y1+7, b.text);
}

void initializare(){

    // CREEAZA TABLA DE JOC IN BACKEND - ADICA MATRICEA UNDE SE TIN MINTE POZITIILE PIESELOR SI MUTARILE JUCATORULUI
    int i,j;
    for(i=0; i<=2*boarddimension; i++)
        for(j=0; j<=2*boarddimension; j++)
            if((i%2==1) && (j%2==0))
                board[i][j]=1;
            else
                if((i%2==0) && (j%2==1))
                    board[i][j]=2;
                else
                    board[i][j]=0;
    for(i=0; i<=2*boarddimension; i++)
        {
          board[0][i]=2;
          board[i][0]=1;
          board[2*boarddimension][i]=2;
          board[i][2*boarddimension]=1;
        }
}

void play() {

    // FUNCTIA CARE DA START JOCULUI PLAYER VS PLAYER

    moves=0;

    // INDICA A CUI RAND ESTE SA MUTE
    if(jucator==1)
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

        if(colour1 == 12){


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

        if(colour1 == 11){

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

        if(colour2 == 12){
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

        if(colour2 == 11){
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


    bool gata=false, undo=1, b1_status=0, b2_status=0;
    int linia, col, x, y, last_line, last_column;
    buton B1, B2;

    B1.mx=150; B1.my=400; strcpy(B1.text, "Restart");
    B2.mx=150; B2.my=470; strcpy(B2.text, "Menu");

    drawbutton(B1);
    drawbutton(B2);
    moves=0;
    clock_t duration;
    clock_t start;
    start=clock();
    while(!gata)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=left && x<=left+width && y>=up && y<=up+height)
            {
                linia=(y-up+20)/(border/2);
                col=(x-left+20)/(border/2);
                if(board[linia][col]==0)
                {
                    last_line=linia;
                    last_column=col;
                    undo=0;
                    drawline(linia, col);
                    moves++;
                    int castigator=victory(linia, col);
                    if(castigator)
                    {
                        jucator=castigator;
                        gata=true;
                        timer(start, moves);
                        endgame();
                    }
                }
            }
            else
                if(x>=B1.x1 && x<=B1.x2 && y>=B1.y1 && y<=B1.y2)
            {
                if(player==culoare)
                    jucator=1;
                else
                    jucator=2;
                gata=1;
                initializare();
                boarddraw;
                play();
            }
            else
                if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
                {
                    gata=1;
                    menu_english();
                }
        }
        else{
            if(x>=B1.x1 && x<=B1.x2 && y>=B1.y1 && y<=B1.y2)
            {
                if(b1_status==0)
                {
                    drawbutton(B1, 4);
                    b1_status=1;
                }
            }
            else
                if(b1_status==1)
            {
                drawbutton(B1, 4, LIGHTBLUE);
                drawbutton(B1);
                b1_status=0;
            }
            if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
            {
                if(b2_status==0)
                {
                    drawbutton(B2, 4);
                    b2_status=1;
                }
            }
            else
                if(b2_status==1)
                {
                drawbutton(B2, 4, LIGHTBLUE);
                drawbutton(B2);
                b2_status=0;
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
    scor=(int)duration/10+moves;

    penalty=1000-scor;
    if(penalty<0)
        penalty=0;
    itoa(penalty, charscor, 10);
    setcolor(GREEN);
    outtextxy(150, 700, "SCOR :");
    outtextxy(textwidth("SCOR :")+120, 700, charscor);
}

void computerplay(){

    // FUNCTIA CARE DA START JOCULUI PLAYER VS COMPUTER

    moves=0;
    if(jucator==1)
    {
        readimagefile("reds_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
    }
    else
    {
        readimagefile("blues_turn_e.jpg", 9*dx, 18*dy, 49*dx, 36*dy);
    }

    bool gata=false, undo=1, b1_status=0, b2_status=0;
    int linia, col, x, y, last_line, last_column, lastline, lastcol;
    buton B1, B2;

    B1.mx=150; B1.my=400; strcpy(B1.text, "Restart");
    B2.mx=150; B2.my=470; strcpy(B2.text, "Menu");

    drawbutton(B1);
    drawbutton(B2);
    moves=0;
    clock_t duration;
    clock_t start;
    start=clock();
    while(!gata)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=left && x<=left+width && y>=up && y<=up+height)
            {
                linia=(y-up+20)/(border/2);
                col=(x-left+20)/(border/2);
                if(board[linia][col]==0)
                {
                    last_line=linia;
                    last_column=col;
                    undo=0;
                    drawline(linia, col);
                    moves++;
                    int castigator=victory(linia, col);
                    if(castigator)
                    {
                        jucator=castigator;
                        gata=true;
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

                        castigator=victory(linia, col);
                        if(castigator)
                        {
                            jucator=castigator;
                            gata=true;
                            timer(start, moves);
                            endgame();
                        }
                    }
                }
            }
            else
                if(x>=B1.x1 && x<=B1.x2 && y>=B1.y1 && y<=B1.y2)
                {
                    if(player==culoare)
                        jucator=1;
                    else
                        jucator=2;
                    gata=1;
                    initializare();
                    boarddraw();
                    computerplay();
                }
                else
                    if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
                {
                    gata=1;
                    //desenCopertaJoc();
                }
        }
        else
        {
            if(x>=B1.x1 && x<=B1.x2 && y>=B1.y1 && y<=B1.y2)
            {
                if(b1_status==0)
                {
                    drawbutton(B1, 4);
                    b1_status=1;
                }
            }
            else
                if(b1_status==1)
                {
                    drawbutton(B1, 4,LIGHTBLUE);
                    drawbutton(B1);
                    b1_status=0;
                }
            if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
            {
                if(b2_status==0)
                {
                    drawbutton(B2, 4);
                    b2_status=1;
                }
            }
            else
                if(b2_status==1)
                {
                drawbutton(B2, 4, LIGHTBLUE);
                drawbutton(B2);
                b2_status=0;
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
        linia=rand()%(2*boarddimension)+1;
        col=rand()%(2*boarddimension)+1;

        if(board[linia][col]==0)
        {
            board[linia][col]=jucator;
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
            if((board[linia][col-1]!=jucator) && (board[linia][col+1]!=0))
            {
                for(int i=1; i<=boarddimension; i++)
                {
                    if((board[linia-i][col]==0)&& (mutare==0) &&(linia-i>0))
                        {
                            board[linia-i][col]=jucator;
                            mutare=1;
                            linia=linia-i;
                        }
                    if((board[linia+i][col]==0)&& (mutare==0) &&(linia+i<2*boarddimension+1))
                    {
                        board[linia+i][col]=jucator;
                        mutare=1;
                        linia=linia+i;
                    }
                }
            }
                else
                    if((board[linia-1][col]!=jucator) && (board[linia+1][col!=jucator]))
                        {
                            for(int i=1; i<=boarddimension;i++)
                            {
                                if((board[linia][col-i]==0) && (mutare==0) && (col-i>0))
                                    {
                                        board[linia][col-i]=jucator;
                                        mutare=1;
                                        col=col-i;
                                    }
                                if((board[linia][col+i]==0) && (mutare==0) && (col+i>0))
                                    {
                                        board[linia][col+i]=jucator;
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
    int coditai[100]={0}, coditaj[100]={0}, k=1;
    int di[4]={0, 0, 1, -1};
    int dj[4]={1, -1, 0, 0};
    coditai[1]=lastline;
    coditaj[1]=lastcol;

    // MODUL HARD PENTRU PLAYER VS COMPUTER

    if((moves==0)  || (moves==1))
            easylevel(linia, col);
        else
            {
                int miscare=0;
                if((board[lastline][lastcol-1]==jucator) && (board[lastline][lastcol+1]==jucator))
                    {
                        coditaj[++k]=lastcol-1;
                        coditai[k]=lastline;
                        coditaj[++k]=lastcol+1;
                        coditai[k]=lastline;
                    }
                if((board[lastline-1][lastcol]==jucator) && (board[lastline+1][lastcol]==jucator))
                    {
                        coditai[++k]=lastline-1;
                        coditaj[k]=lastcol;
                        coditai[++k]=lastline+1;
                        coditaj[k]=lastcol;
                    }
                k=1;
                while((miscare==0) && (coditai[k]!=0) && (coditaj[k]!=0))
                    {
                       for(int i=0; i<=3; i++)
                            if((board[coditai[k]+di[i]][coditaj[k]+dj[i]]==jucator) && (coditai[k]+di[i]>i) && (coditai[k]+di[i]<=2*boarddimension) && (coditaj[k]+dj[i]>i) && (coditaj[k]+dj[i]<=2*boarddimension))
                               {
                                    coditai[++k]=coditai[k]+di[i];
                                    coditaj[k]=coditai[k]+dj[i];
                               }
                       for(int i=0; i<=3; i++)
                            if((board[coditai[k]+di[i]][coditaj[k]+dj[i]]==0))
                                {
                                    board[coditai[k]+di[i]][coditaj[k]+dj[i]]=jucator;
                                    linia=coditai[k];
                                    col=coditaj[k];
                                    miscare=1;
                                }
                                    k++;
                    }
                if(miscare==0)
                    mediumlevel(linia, col);
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
            if((abs(board[i][j+1])==abs(board[i][j])) && (aux[i][j+1]!=1) && (i!=2*boarddimension) && (i!=0) && (j+1!=0) && (j+1!=2*boarddimension))
                {
                    aux[i][j+1]=1;
                    last++;
                    queuei[last]=i;
                    queuej[last]=j+1;
                }
            if((abs(board[i][j-1])==abs(board[i][j])) && (aux[i][j-1]!=1) && (i!=2*boarddimension) && (i!=0) && (j-1!=0) && (j-1!=2*boarddimension))
                {
                    aux[i][j-1]=1;
                    last++;
                    queuei[last]=i;
                    queuej[last]=j-1;
                }
            if((abs(board[i+1][j])==abs(board[i][j])) && (aux[i+1][j]!=1) && (i+1!=2*boarddimension) && (i+1!=0) && (j!=0) && (j!=2*boarddimension))
                {
                    aux[i+1][j]=1;
                    last++;
                    queuei[last]=i+1;
                    queuej[last]=j;
                }
            if((abs(board[i-1][j])==abs(board[i][j])) && (aux[i-1][j]!=1) && (i-1!=2*boarddimension) && (i-1!=0) && (j!=0) && (j!=2*boarddimension))
                {
                    aux[i-1][j]=1;
                    last++;
                    queuei[last]=i-1;
                    queuej[last]=j;
                }
            first++;
        }

        if(jucator==2)//rosu
        {
            int cond1=0, cond2=0;
            for(int i=1; i<=last; i++)
                {
                    if(queuei[i]==1)
                        cond1=1;
                     if(queuei[i]==2*boarddimension-1)
                        cond2=1;
                }
            if((cond1==1) && (cond2==1))
                {
                    return jucator;
                }
        }
        if(jucator==1)//galben
        {
            int cond1=0, cond2=0;
            for(int j=1; j<=last; j++)
                {
                    if(queuej[j]==1)
                        cond1=1;
                     if(queuej[j]==2*boarddimension-1)
                        cond2=1;
                }
            if((cond1==1) && (cond2==1))
                {
                    return jucator;
                }
        }
        return 0;
}

void endgame(){
    delay(1000);
    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);

    if(jucator==1)
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

    buton B1, B2, B3;

    B1.mx= getmaxwidth()/2 - textwidth("Play again")/2;
    B1.my=600;
    strcpy(B1.text, "Play again");
    B2.mx= getmaxwidth()/2 - textwidth("Restart")/2;
    B2.my=670;
    strcpy(B2.text, "Restart");
    B3.mx= getmaxwidth()/2 - textwidth("Exit")/2;
    B3.my=740;
    strcpy(B3.text, "Exit");


    drawbutton(B1);
    drawbutton(B2);
    drawbutton(B3);

    bool gata=0, b1_status=0, b2_status=0, b3_status=0;
    int x,y;
    while(!gata)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=B1.x1 && x<=B1.x2 && y>=B1.y1 && y<=B1.y2)
                {
                    gata=1;
                    if(player==culoare)
                        jucator=1;
                    else
                        jucator=2;
                    initializare();
                    boarddraw();
                    if(nrjucatori==1)
                        computerplay();
                    else
                        play();
                }
                else
                    if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
                {
                    gata=1;
                }
                else
                    if(x>=B3.x1 && x<=B3.x2 && y>=B3.y1 && y<=B3.y2)
                        gata=1;

        }
    }
}

void drawboard(){

    clearviewport();
    initializare();
     boarddraw();
    if(nrjucatori==1)
        computerplay();
    else
        play();
}






















