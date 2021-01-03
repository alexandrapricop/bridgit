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


struct gameCircle{
    int x, y;
    int status,color;
};

gameCircle GAME[20][20];
gameCircle CONNECTIONS[20][20];

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
                int x = (windowWidth-(n*30)-(m*150))/2+(j-1)*100;
                int y = (windowHeight-(n*30)-(m*100)) / 2 + (i*70);
                setcolor(LIGHTRED);
                setfillstyle(SOLID_FILL, LIGHTRED);
                circle(x,y,30);
                CONNECTIONS[i][j].status = 1;
                CONNECTIONS[i][j].x = x;
                CONNECTIONS[i][j].y = y;
                }
            }
            else
            {
                if(j%2==1)
                {
                    int x =  (windowWidth-(n*30)-(m*150))/2+(j-1)*100;
                    int y = (windowHeight-(n*30)-(m*100)) / 2 + (i*70);
                    setcolor(LIGHTBLUE);
                    setfillstyle(SOLID_FILL, LIGHTBLUE);
                    circle(x,y,30);
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

    clearviewport();
    initializeMatrix(size1, size2);

}

int check_if_win(){


    return 0;
}

void when_circle_click(){
    // ALEXANDRA
    const int DELAY = 0; // Milliseconds of delay between checks
    int x, y;

    while (!ismouseclick(WM_LBUTTONDOWN))
    delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

    std::cout<<check_if_win()<<"/n";

        for(int j=1; j<=size1+size2; j++)
            for(int i=1; i<=size1+size2; i++){
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


























