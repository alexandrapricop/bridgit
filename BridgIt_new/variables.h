int windowWidth = getmaxwidth(), windowHeight = getmaxheight();
int currentWindow = 1, lastWindow; // LASTWINDOW E FOLOSIT LA MORE ABOUT SETTINGS SI ORIUNDE SE MAI SUPRAPUN CONDITIILE DIN NAVIGATION
float dx = windowWidth/100, dy = windowHeight/100; // FOLOSIT IN NAVIGATION, DIMESNIUNEA LUI X SI Y
int colour1=7, colour2=4; // FOLOSIT IN BUTTONS
int a=(windowWidth - 600)/2, b=(windowHeight - 600)/2; // BOARD EDGES' COORDINATES
int clicked = 0;
int firstI, firstJ;
int size1=2, size2=3;
int colors[3] = {1,2,3}; // 1 - lightred , 2 - lightblue, 3-lightgreen
int dificulty[3] = {1,2,3}; // 1 - easy 3x4, 2 - medium 4x5, 3 - hard 5x6
int color1, color2, firstPlayer1;
char language[20];


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



// currentWindow/ lastWindow - ENGLEZA: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS, 5-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - FRANCEZA: 6-HOME, 7-INFO, 8-LANGUAGES, 9-SETTINGS, 9-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - ROMANA: 11-HOME, 12-INFO, 13-LANGUAGES, 14-SETTINGS, 15-MORE ABOUT SETTINGS
