#define MAX 20
#define latura 120

int TablaDeJoc[MAX][MAX];
int stanga, sus, width, height, dimensiuneTabla=3, jucator=2, culoare=2, player=1, nrmutari=0, nrjucatori=2, level_computer=2;

struct buton{
    int x1, y1, x2, y2, mx, my;
    char text[20];
};

void initializareTablaDeJoc();
void afisareTablaInConsola();
void desenButon (buton &b, int textsize=3, int color=LIGHTGRAY);
void desenTabla();
void trasareLinie (int linia, int coloana);
void stergeLinia(int linia, int coloana);
void play();
void slaveplay();
void easyslave(int &linia, int &coloana);
void normalslave(int &linia, int &coloana);
void hardslave(int ultimalinie, int ultimacoloana, int &linia, int &coloana);
void gameIncheiat();
void timer(clock_t start, int numarmutari);
int victorie(int linia, int coloana);

void stergeLinia(int linia, int coloana){
    setcolor(RED);
    setlinestyle(SOLID_FILL, 0 ,5);
    if(TablaDeJoc[linia][coloana]==-1*jucator)
    {
        TablaDeJoc[linia][coloana]=0;
        if(TablaDeJoc[linia][coloana-1]==jucator)
        {
            line(stanga+(coloana-1)*(latura/2)+22, sus+linia*(latura/2), stanga+(coloana+1)*(latura/2)-21,sus+linia*(latura/2));
            nrmutari--;
        }
        else
        {
            line(stanga+coloana*(latura/2), sus+(linia-1)*(latura/2)+22, stanga+coloana*(latura/2), sus+(linia+1)*(latura/2)-21);
        }   nrmutari--;
    }

    if(jucator==1)
    {
        jucator=2;
        readimagefile("yellows_turn.jpg", 150, 150, 750, 300);
    }
    else
    {
        jucator=1;
        readimagefile("reds_turn.jpg", 150, 150, 750, 300);
    }
}

void trasareLinie(int linia, int coloana){
    if(jucator==1)
    {
        readimagefile("yellows_turn.jpg", 150, 150, 750, 300);
        jucator=2;
        setcolor(LIGHTRED);
        setlinestyle(SOLID_LINE, 0, 5);
    }
    else
    {
        readimagefile("reds_turn.jpg", 150, 150, 750, 300);
        jucator=1;
        setcolor(YELLOW);
        setlinestyle(SOLID_LINE, 0, 5);
    }
    TablaDeJoc[linia][coloana]=-1*jucator;

    if(TablaDeJoc[linia][coloana-1]==jucator)
       line(stanga+(coloana-1)*(latura/2), sus+linia*(latura/2), stanga+(coloana+1)*(latura/2), sus+linia*(latura/2));
    else
       line(stanga+coloana*(latura/2), sus+(linia-1)*(latura/2), stanga+coloana*(latura/2), sus+(linia+1)*(latura/2));
}

void desenTabla(){9
    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);
    int i,j;
    width=height=latura*dimensiuneTabla;
    sus=(getmaxy()-width)/2;
    stanga=(getmaxx()-height)/2+300;

    int x=stanga;
    int y=sus;
    int nrBulineLinie;
    for(int i=1; i<=2*dimensiuneTabla+1; i++)
    {
        if(i%2)
        {
            setcolor(LIGHTRED);
            setfillstyle(SOLID_FILL, LIGHTRED);
            x=stanga+latura/2;
            nrBulineLinie=dimensiuneTabla;
        }
        else
        {
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, YELLOW);
            x=stanga;
            nrBulineLinie=dimensiuneTabla+1;
        }
        for(int j=1; j<=nrBulineLinie; j++)
        {
            fillellipse(x, y, 19, 19);
            x+=latura;
        }
        y+=latura/2;
    }

    setcolor(YELLOW);
    setlinestyle(SOLID_LINE, 0 ,10);
    line(stanga, sus+latura/2-10, stanga, sus+height-latura/2+10);
    line(stanga+width, sus+latura/2-10, stanga+width, sus+height-latura/2+10);

    setcolor(LIGHTRED);
    setlinestyle(SOLID_LINE, 0 ,10);
    line(stanga+latura/2-10, sus, stanga+width-latura/2+10, sus);
    line(stanga+latura/2-10, sus+height, stanga+width-latura/2+10, sus+height);

}

void desenButon(buton &b, int textsize, int color) {
        settextstyle(DEFAULT_FONT, HORIZ_DIR, textsize);
        int inaltime=textheight(b.text);
        int lungime=textwidth(b.text);

        /*b.x1=b.mx;
        b.y1=b.my;
        b.x2=b.x1;
        b.y2=b.y1;*/

         b.x1=b.mx;
        b.y1=b.my;
        b.x2=b.x1+lungime;
        b.y2=b.y1+inaltime;

        setcolor(color);
        outtextxy(b.x1+7, b.y1+7, b.text);
    }


void initializareTablaDeJoc(){
    int i,j;
    for(i=0; i<=2*dimensiuneTabla; i++)
        for(j=0; j<=2*dimensiuneTabla; j++)
            if((i%2==1) && (j%2==0))
                TablaDeJoc[i][j]=1;
            else
                if((i%2==0) && (j%2==1))
                    TablaDeJoc[i][j]=2;
                else
                    TablaDeJoc[i][j]=0;
    for(i=0; i<=2*dimensiuneTabla; i++)
        {
          TablaDeJoc[0][i]=2;
          TablaDeJoc[i][0]=1;
          TablaDeJoc[2*dimensiuneTabla][i]=2;
          TablaDeJoc[i][2*dimensiuneTabla]=1;
        }
}

void play() {
    nrmutari=0;
    if(jucator==1)
    {
        readimagefile("reds_turn.jpg", 150, 150, 750, 300);
    }
    else
    {
        readimagefile("yellows_turn.jpg", 150, 150, 750, 300);
    }

    bool gata=false, undo=1, b1_status=0, b2_status=0;
    int linia, coloana, x, y, last_line, last_column;
    buton B1, B2;

    B1.mx=150; B1.my=400; strcpy(B1.text, "Restart");
    B2.mx=150; B2.my=470; strcpy(B2.text, "Menu");

    desenButon(B1);
    desenButon(B2);
    nrmutari=0;
    clock_t duration;
    clock_t start;
    start=clock();
    while(!gata)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=stanga && x<=stanga+width && y>=sus && y<=sus+height)
            {
                linia=(y-sus+20)/(latura/2);
                coloana=(x-stanga+20)/(latura/2);
                if(TablaDeJoc[linia][coloana]==0)
                {
                    last_line=linia;
                    last_column=coloana;
                    undo=0;
                    trasareLinie(linia, coloana);
                    nrmutari++;
                    int castigator=victorie(linia, coloana);
                    if(castigator)
                    {
                        jucator=castigator;
                        gata=true;
                        timer(start, nrmutari);
                        gameIncheiat();
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
                initializareTablaDeJoc();
                desenTabla;
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
                    desenButon(B1, 4);
                    b1_status=1;
                }
            }
            else
                if(b1_status==1)
            {
                desenButon(B1, 4, YELLOW);
                desenButon(B1);
                b1_status=0;
            }
            if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
            {
                if(b2_status==0)
                {
                    desenButon(B2, 4);
                    b2_status=1;
                }
            }
            else
                if(b2_status==1)
                {
                desenButon(B2, 4, YELLOW);
                desenButon(B2);
                b2_status=0;
                }
        }

        if(ismouseclick(WM_RBUTTONDOWN))
        {
            clearmouseclick(WM_RBUTTONDOWN);
            if(undo==0)
            {
                undo=1;
                stergeLinia(last_line, last_column);
            }
        }
    }
}

void timer(clock_t start, int numarmutari){
    char charscor[19];
    int scor, penalty;
    clock_t duration;
    duration=difftime(clock(), start);
    scor=(int)duration/10+nrmutari;

    penalty=1000-scor;
    if(penalty<0)
        penalty=0;
    itoa(penalty, charscor, 10);
    setcolor(GREEN);
    outtextxy(150, 700, "SCOR :");
    outtextxy(textwidth("SCOR :")+120, 700, charscor);
}

void slaveplay(){
    nrmutari=0;
    if(jucator==1)
    {
        readimagefile("reds_turn.jpg", 150, 150, 750, 300);
    }
    else
    {
        readimagefile("yellows_turn.jpg", 150, 150, 750, 300);
    }

    bool gata=false, undo=1, b1_status=0, b2_status=0;
    int linia, coloana, x, y, last_line, last_column, ultimalinie, ultimacoloana;
    buton B1, B2;

    B1.mx=150; B1.my=400; strcpy(B1.text, "Restart");
    B2.mx=150; B2.my=470; strcpy(B2.text, "Menu");

    desenButon(B1);
    desenButon(B2);
    nrmutari=0;
    clock_t duration;
    clock_t start;
    start=clock();
    while(!gata)
    {
        x=mousex();  y=mousey();
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);

            if(x>=stanga && x<=stanga+width && y>=sus && y<=sus+height)
            {
                linia=(y-sus+20)/(latura/2);
                coloana=(x-stanga+20)/(latura/2);
                if(TablaDeJoc[linia][coloana]==0)
                {
                    last_line=linia;
                    last_column=coloana;
                    undo=0;
                    trasareLinie(linia, coloana);
                    nrmutari++;
                    int castigator=victorie(linia, coloana);
                    if(castigator)
                    {
                        jucator=castigator;
                        gata=true;
                        timer(start, nrmutari);
                        gameIncheiat();
                    }
                    else
                    {
                        if(level_computer==1)
                            easyslave(linia, coloana);
                        else
                            if(level_computer==2)
                                normalslave(linia, coloana);
                            else
                                hardslave(ultimalinie, ultimacoloana, linia, coloana);

                        ultimalinie=linia;
                        ultimacoloana=coloana;
                        trasareLinie(linia, coloana);
                        nrmutari++;

                        castigator=victorie(linia, coloana);
                        if(castigator)
                        {
                            jucator=castigator;
                            gata=true;
                            timer(start, nrmutari);
                            gameIncheiat();
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
                    initializareTablaDeJoc();
                    desenTabla();
                    slaveplay();
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
                    desenButon(B1, 4);
                    b1_status=1;
                }
            }
            else
                if(b1_status==1)
                {
                    desenButon(B1, 4, YELLOW);
                    desenButon(B1);
                    b1_status=0;
                }
            if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
            {
                if(b2_status==0)
                {
                    desenButon(B2, 4);
                    b2_status=1;
                }
            }
            else
                if(b2_status==1)
                {
                desenButon(B2, 4, YELLOW);
                desenButon(B2);
                b2_status=0;
                }
        }

        if(ismouseclick(WM_RBUTTONDOWN))
        {
            clearmouseclick(WM_RBUTTONDOWN);
            if(undo==0)
            {
                undo=1;
                stergeLinia(ultimalinie, ultimacoloana);
                stergeLinia(last_line, last_column);
            }
        }
    }
}

void easyslave(int &linia, int &coloana){
    int mutare=0;
    while(mutare==0)
    {
        linia=rand()%(2*dimensiuneTabla)+1;
        coloana=rand()%(2*dimensiuneTabla)+1;

        if(TablaDeJoc[linia][coloana]==0)
        {
            TablaDeJoc[linia][coloana]=jucator;
            mutare=1;
        }
    }
}

void normalslave(int &linia, int &coloana){
    if(nrmutari==0)
        easyslave(linia, coloana);
    else
        {
            int mutare=0;
            if((TablaDeJoc[linia][coloana-1]!=jucator) && (TablaDeJoc[linia][coloana+1]!=0))
            {
                for(int i=1; i<=dimensiuneTabla; i++)
                {
                    if((TablaDeJoc[linia-i][coloana]==0)&& (mutare==0) &&(linia-i>0))
                        {
                            TablaDeJoc[linia-i][coloana]=jucator;
                            mutare=1;
                            linia=linia-i;
                        }
                    if((TablaDeJoc[linia+i][coloana]==0)&& (mutare==0) &&(linia+i<2*dimensiuneTabla+1))
                    {
                        TablaDeJoc[linia+i][coloana]=jucator;
                        mutare=1;
                        linia=linia+i;
                    }
                }
            }
                else
                    if((TablaDeJoc[linia-1][coloana]!=jucator) && (TablaDeJoc[linia+1][coloana!=jucator]))
                        {
                            for(int i=1; i<=dimensiuneTabla;i++)
                            {
                                if((TablaDeJoc[linia][coloana-i]==0) && (mutare==0) && (coloana-i>0))
                                    {
                                        TablaDeJoc[linia][coloana-i]=jucator;
                                        mutare=1;
                                        coloana=coloana-i;
                                    }
                                if((TablaDeJoc[linia][coloana+i]==0) && (mutare==0) && (coloana+i>0))
                                    {
                                        TablaDeJoc[linia][coloana+i]=jucator;
                                        mutare=1;
                                        coloana=coloana+i;
                                    }
                            }
                        }
                        if(mutare==0)
                            easyslave(linia, coloana);
        }
}

void hardslave(int ultimalinie, int ultimacoloana, int &linia, int &coloana){
    int coditai[100]={0}, coditaj[100]={0}, k=1;
    int di[4]={0, 0, 1, -1};
    int dj[4]={1, -1, 0, 0};
    coditai[1]=ultimalinie;
    coditaj[1]=ultimacoloana;

    if((nrmutari==0)  || (nrmutari==1))
            easyslave(linia, coloana);
        else
            {
                int miscare=0;
                if((TablaDeJoc[ultimalinie][ultimacoloana-1]==jucator) && (TablaDeJoc[ultimalinie][ultimacoloana+1]==jucator))
                    {
                        coditaj[++k]=ultimacoloana-1;
                        coditai[k]=ultimalinie;
                        coditaj[++k]=ultimacoloana+1;
                        coditai[k]=ultimalinie;
                    }
                if((TablaDeJoc[ultimalinie-1][ultimacoloana]==jucator) && (TablaDeJoc[ultimalinie+1][ultimacoloana]==jucator))
                    {
                        coditai[++k]=ultimalinie-1;
                        coditaj[k]=ultimacoloana;
                        coditai[++k]=ultimalinie+1;
                        coditaj[k]=ultimacoloana;
                    }
                k=1;
                while((miscare==0) && (coditai[k]!=0) && (coditaj[k]!=0))
                    {
                       for(int i=0; i<=3; i++)
                            if((TablaDeJoc[coditai[k]+di[i]][coditaj[k]+dj[i]]==jucator) && (coditai[k]+di[i]>i) && (coditai[k]+di[i]<=2*dimensiuneTabla) && (coditaj[k]+dj[i]>i) && (coditaj[k]+dj[i]<=2*dimensiuneTabla))
                               {
                                    coditai[++k]=coditai[k]+di[i];
                                    coditaj[k]=coditai[k]+dj[i];
                               }
                       for(int i=0; i<=3; i++)
                            if((TablaDeJoc[coditai[k]+di[i]][coditaj[k]+dj[i]]==0))
                                {
                                    TablaDeJoc[coditai[k]+di[i]][coditaj[k]+dj[i]]=jucator;
                                    linia=coditai[k];
                                    coloana=coditaj[k];
                                    miscare=1;
                                }
                                    k++;
                    }
                if(miscare==0)
                    normalslave(linia, coloana);
            }
}

int victorie(int linia, int coloana){
    int coadai[50]={0}, coadaj[50]={0}, prim=1, ultim=1, i, j, aux[12][12]={0};
    // debug(aux);
    coadai[prim]=linia;
    coadaj[prim]=coloana;
    while(prim<=ultim)
        {
            i=coadai[prim];
            j=coadaj[prim];
            aux[i][j]=1;
            if((abs(TablaDeJoc[i][j+1])==abs(TablaDeJoc[i][j])) && (aux[i][j+1]!=1) && (i!=2*dimensiuneTabla) && (i!=0) && (j+1!=0) && (j+1!=2*dimensiuneTabla))
                {
                    aux[i][j+1]=1;
                    ultim++;
                    coadai[ultim]=i;
                    coadaj[ultim]=j+1;
                }
            if((abs(TablaDeJoc[i][j-1])==abs(TablaDeJoc[i][j])) && (aux[i][j-1]!=1) && (i!=2*dimensiuneTabla) && (i!=0) && (j-1!=0) && (j-1!=2*dimensiuneTabla))
                {
                    aux[i][j-1]=1;
                    ultim++;
                    coadai[ultim]=i;
                    coadaj[ultim]=j-1;
                }
            if((abs(TablaDeJoc[i+1][j])==abs(TablaDeJoc[i][j])) && (aux[i+1][j]!=1) && (i+1!=2*dimensiuneTabla) && (i+1!=0) && (j!=0) && (j!=2*dimensiuneTabla))
                {
                    aux[i+1][j]=1;
                    ultim++;
                    coadai[ultim]=i+1;
                    coadaj[ultim]=j;
                }
            if((abs(TablaDeJoc[i-1][j])==abs(TablaDeJoc[i][j])) && (aux[i-1][j]!=1) && (i-1!=2*dimensiuneTabla) && (i-1!=0) && (j!=0) && (j!=2*dimensiuneTabla))
                {
                    aux[i-1][j]=1;
                    ultim++;
                    coadai[ultim]=i-1;
                    coadaj[ultim]=j;
                }
            prim++;
        }

        if(jucator==2)//rosu
        {
            int cond1=0, cond2=0;
            for(int i=1; i<=ultim; i++)
                {
                    if(coadai[i]==1)
                        cond1=1;
                     if(coadai[i]==2*dimensiuneTabla-1)
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
            for(int j=1; j<=ultim; j++)
                {
                    if(coadaj[j]==1)
                        cond1=1;
                     if(coadaj[j]==2*dimensiuneTabla-1)
                        cond2=1;
                }
            if((cond1==1) && (cond2==1))
                {
                    return jucator;
                }
        }
        return 0;
}

void gameIncheiat(){
    delay(1000);
    clearviewport();
    readimagefile("Chenar_joc.jpg", 0, 0, windowWidth, windowHeight);

    if(jucator==1)
    {
        readimagefile("yellow_won.jpg", getmaxwidth()/2-200, 300, getmaxwidth()/2+200, 500);
    }
    else
    {
        readimagefile("red_won.jpg", getmaxwidth()/2-200, 300, getmaxwidth()/2+200, 500);
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


    desenButon(B1);
    desenButon(B2);
    desenButon(B3);

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
                    initializareTablaDeJoc();
                    desenTabla();
                    if(nrjucatori==1)
                        slaveplay();
                    else
                        play();
                }
                else
                    if(x>=B2.x1 && x<=B2.x2 && y>=B2.y1 && y<=B2.y2)
                {
                    gata=1;
                    //desenCopertaJoc();
                }
                else
                    if(x>=B3.x1 && x<=B3.x2 && y>=B3.y1 && y<=B3.y2)
                        gata=1;

        }
    }
}

void drawboard(){

    clearviewport();
    initializareTablaDeJoc();
    desenTabla();
    if(nrjucatori==1)
        slaveplay();
    else
        play();
}






















