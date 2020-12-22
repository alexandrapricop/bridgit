
void buttons()
{
    // CLICK ON SETTINGS TO CHOOSE THE GAME COLOURS

    int x, y;
    getmouseclick(WM_LBUTTONDOWN, x, y);

    if(currentWindow==4 || currentWindow==9 || currentWindow==13)
    {

            if(x>=795 && x<=840 && y>=110 && y<=205)
                colour1=7;

            if(x>=795 && x<=840 && y>=215 && y<=310)
                colour2=7;

            if(x>=855 && x<=900 && y>=110 && y<=205)
                colour1=4;

            if(x>=855 && x<=900 && y>=215 && y<=310)
                colour2=4;

            if(x>=910 && x<=955 && y>=110 && y<=205)
                colour1=12;

            if(x>=910 && x<=955 && y>=215 && y<=310)
                colour2=12;

            if(x>=970 && x<=1015 && y>=110 && y<=205)
                colour1=11;

            if(x>=970 && x<=1015 && y>=215 && y<=310)
                colour2=11;
    }

}

void afisare()
{

    // ADINA
    // AFISARE MATRICE
    // 0 - THERE IS NO DOT
    // 1 - PLAYER 1 DOTS
    // 2 - PLAYER 2 DOTS

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
            setcolor(BLACK);  // DRAWS THE DOTS IN THE BOARD, FOR VALUE 0 IT DRAWS AN ELLPISE, FOR 1 IT DRAWS FOR PLAYER 1 AND FOR 2 IT DRAWS FOR PLAYER 2
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

    // DRAWS THE BOARD EDGES

    clearviewport();
    setbkcolor(WHITE);

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

    // ALL THE FUNCTION RELATED TO THE PLAY WINDOW ARE INCLUDED
    drawboard();
    buttons();
}


