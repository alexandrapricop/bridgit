int windowWidth = getmaxwidth(), windowHeight = getmaxheight();
int currentWindow = 1, lastWindow; // LASTWINDOW E FOLOSIT LA MORE ABOUT SETTINGS SI ORIUNDE SE MAI SUPRAPUN CONDITIILE DIN NAVIGATION
float dx = windowWidth/100, dy = windowHeight/100; // FOLOSIT IN NAVIGATION, DIMESNIUNEA LUI X SI Y
int colour1=7, colour2=4; // FOLOSIT IN BUTTONS
int a=(windowWidth - 600)/2, b=(windowHeight - 600)/2; // BOARD EDGES' COORDINATES
int player = 1;
int clicked = 0;
int firstI, firstJ;
int size1=2, size2=3;


// currentWindow/ lastWindow - ENGLEZA: 1-HOME, 2-INFO, 3-LANGUAGES, 4-SETTINGS, 5-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - FRANCEZA: 6-HOME, 7-INFO, 8-LANGUAGES, 9-SETTINGS, 9-MORE ABOUT SETTINGS
// currentWindow/ lastWindow - ROMANA: 11-HOME, 12-INFO, 13-LANGUAGES, 14-SETTINGS, 15-MORE ABOUT SETTINGS
