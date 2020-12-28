
void buttons()
{
    // PREIA COORDONATELE LUI X SI Y DIN SETARI SI IN FUNCTIE DE ELE SE VOR SELECTA OPTIUNILE PRIN INSERAREA IMAGINILOR

    int x, y;
    getmouseclick(WM_LBUTTONDOWN, x, y);


    if(x>=dx*17 && x<=dx*34)
       {
            if(y>=dy*43 && y<=dy*50)
                readimagefile("small_english.jpg", dx*17, dy*43, dx*34, dy*64);
            if(y>=dy*51 && y<=dy*57)
                readimagefile("mediumb_english.jpg", dx*17, dy*43, dx*34, dy*64);
            if(y>=dy*58 && y<=dy*64)
                readimagefile("large_english.jpg", dx*17, dy*43, dx*34, dy*64);
       }
}

/*
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

    setcolor(RED);
    setlinestyle(SOLID_LINE, 0 , 10);
    line(a, (windowHeight - 600)/2, a, windowHeight - b);
    line(windowWidth - a, b, windowWidth - a, windowHeight - b);

    // afisare();





}


void board()
{

    // TOATE FUNCTIILE LEGATE DE DESCHIDEREA TABLEI DE JOC, TIMER, MOUSE, ETC. SE GASESC AICI
    drawboard();
    //drawOval(20, 20, 10, 10);

    buttons();
}

*/



struct gameCircle{
    int x, y;
    int status,color;
};

gameCircle GAME[7][7];
gameCircle CONNECTIONS[10][10];

void initializeMatrix(int n, int m)
{
    // ALEXANDRA

    setlinestyle(SOLID_LINE, 0 , 10);

    for(int i=1; i<=n+m; i++)
    {
        for(int j=1; j<=m+n; j++)
            if(i%2==1)
            {
                if(j%2==1)
                {
                    CONNECTIONS[i][j].status=0;
                }
                else
                {
                int x = 593+(j-1)*100;
                int y = 230 + (i*70);
                setcolor(LIGHTRED);
                setfillstyle(SOLID_FILL, LIGHTRED);
                circle(x,y,30);
                floodfill(x,y,LIGHTRED);
                CONNECTIONS[i][j].status = 1;
                CONNECTIONS[i][j].x = x;
                CONNECTIONS[i][j].y = y;
                }
            }
            else
            {
                if(j%2==1)
                {
                    int x = 597+(j-1)*100;
                    int y = 230 + (i*70);
                    setcolor(LIGHTBLUE);
                    setfillstyle(SOLID_FILL, LIGHTBLUE);
                    circle(x,y,30);
                    floodfill(x,y,LIGHTBLUE);
                    CONNECTIONS[i][j].status = 2;
                    CONNECTIONS[i][j].x = x;
                    CONNECTIONS[i][j].y = y;
                }
                else
                {
                    CONNECTIONS[i][j].status=0;
                }
            }
    }
}

void drawboard(){

    int n = 4, m = 5;
    clearviewport();
    initializeMatrix(n,m);

}


void when_circle_click(){
    // ALEXANDRA
    const int DELAY = 1; // Milliseconds of delay between checks
    int x, y;
    int n = 4, m = 5;

    while (!ismouseclick(WM_LBUTTONDOWN))
    delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

        for(int j=1; j<=m+n; j++)
            for(int i=1; i<=m+n; i++){
             if(CONNECTIONS[i][j].status==player && CONNECTIONS[i][j].x-15<=x  && CONNECTIONS[i][j].x+15>=x && CONNECTIONS[i][j].y-15<=y && CONNECTIONS[i][j].y+15>=y){

                 clicked = clicked==1?0:1;

                 if(clicked == 1){
                    firstI = i;
                    firstJ = j;
                 }

                 if(player == 1){
                    setcolor(LIGHTRED);
                 }else{
                    setcolor(LIGHTBLUE);
                 }

                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,30);
                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,21);
                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,20);
                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,11);
                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,10);
                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,6);
                 circle(CONNECTIONS[i][j].x,CONNECTIONS[i][j].y,5);
                if(player == 1){
                    floodfill(x+10,y+10,LIGHTRED);
                 }else{
                    floodfill(x+10,y+10,LIGHTBLUE);
                 }

                 if(clicked == 0){
                    player = player==2?1:2;
                 }

                 CONNECTIONS[i][j].color = 1;

                if(clicked == 0){
                    if(i == firstI && j<firstJ){
                        CONNECTIONS[i][j+1].status = CONNECTIONS[i][j+2].status;
                        line(CONNECTIONS[i][j+2].x, CONNECTIONS[i][j+2].y, CONNECTIONS[i][j].x, CONNECTIONS[i][j].y);
                    }
                    if(i == firstI && j>firstJ){
                        CONNECTIONS[i][j-1].status = CONNECTIONS[i][j-2].status;
                        line(CONNECTIONS[i][j-2].x, CONNECTIONS[i][j-2].y, CONNECTIONS[i][j].x, CONNECTIONS[i][j].y);
                    }
                    if(j == firstJ && i<firstI){
                        CONNECTIONS[i+1][j].status = CONNECTIONS[i+2][j].status;
                        line(CONNECTIONS[i+2][j].x, CONNECTIONS[i+2][j].y, CONNECTIONS[i][j].x, CONNECTIONS[i][j].y);
                    }
                    if(j == firstJ && i>firstI){
                        CONNECTIONS[i-1][j].status = CONNECTIONS[i-2][j].status;
                        line(CONNECTIONS[i-2][j].x, CONNECTIONS[i-2][j].y, CONNECTIONS[i][j].x, CONNECTIONS[i][j].y);

                    }
                }
             }
        }
}


/*
                if(CONNECTIONS[i-2][j].color == 1){
                 }
                if(CONNECTIONS[i+2][j].color == 1){
                 }
                if(CONNECTIONS[i][j-2].color == 1){
                 }
                if(CONNECTIONS[i][j+2].color == 1){
                 }
*/
