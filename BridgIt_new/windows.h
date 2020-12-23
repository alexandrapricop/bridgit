
void buttons()
{
    // PREIA COORDONATELE LUI X SI Y DIN SETARI SI IN FUNCTIE DE ELE SE VOR SELECTA OPTIUNILE PRIN INSERAREA IMAGINILOR

    int x, y;
    getmouseclick(WM_LBUTTONDOWN, x, y);

    if(currentWindow==4 || currentWindow==9 || currentWindow==13)
    {

            if(x>=950 && x<=1010 && y>=190 && y<=240)
                colour1=7;

            if(x>=950 && x<=1010 && y>=245 && y<=295)
                colour2=7;

            if(x>=1020 && x<=1080 && y>=190 && y<=240)
                colour1=4;

            if(x>=1020 && x<=1000 && y>=245 && y<=295)
                colour2=4;

            if(x>=1085 && x<=1145 && y>=190 && y<=240)
                colour1=12;

            if(x>=1085 && x<=1145 && y>=245 && y<=295)
                colour2=12;

            if(x>=1155 && x<=1215 && y>=190 && y<=240)
                colour1=11;

            if(x>=1155 && x<=1215 && y>=245 && y<=295)
                colour2=11;
    }

}

void afisare()
{

    // ADINA
    // AFISARE MATRICE
    // 0 - NU SUNT BULINE
    // 1 - BULINE PLAYER 1
    // 2 - BULINE PLAYER 2

    int i,j, boardside=5;
    int Board[20][20];

    for(i=0; i<=2*boardside; i++)
        for(j=0; j<=2*boardside; j++)
            if((i%2==1) && (j%2==0))
                Board[i][j]=1;
        else
                if((i%2==0) && (j%2==1))
                    Board[i][j]=2;
                else
                    Board[i][j]=0;
    for(i=0; i<=2*boardside; i++)
        {
          Board[0][i]=2;
          Board[i][0]=1;
          Board[2*boardside][i]=1;
          Board[i][2*boardside]=1;
          Board[0][2*boardside]=0;
          Board[0][0]=0;
          Board[2*boardside][0]=0;
          Board[2*boardside][2*boardside]=0;
        }

    for(i=0; i<=2*boardside; i++)
        for(j=0; j<=2*boardside; j++)
            setcolor(BLACK);  // DESENEAZA TABLA DE JOC
            if(Board[i][j]==0)



    for(i=0; i<=2*boardside; i++)
        {
            for(j=0; j<=2*boardside; j++)
                std::cout<<Board[i][j]<<' ';
        std::cout<<"\n";
        }
    std::cout<<"\n";

}

void drawboard()
{

    // DESENEAZA MARGINILE TABLEI DE JOC

    clearviewport();

    // ADINA

    int colour1,colour2;

    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0 , 10);
    line(a, b, windowWidth - a, b);
    line(a, windowHeight - b, windowWidth - a, windowHeight - b);

    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0 , 10);
    line(a, (windowHeight - 600)/2, a, windowHeight - b);
    line(windowWidth - a, b, windowWidth - a, windowHeight - b);

    // afisare();



}


void board()
{

    // TOATE FUNCTIILE LEGATE DE DESCHIDEREA TABLEI DE JOC, TIMER, MOUSE, ETC. SE GASESC AICI
    drawboard();
    buttons();
}


