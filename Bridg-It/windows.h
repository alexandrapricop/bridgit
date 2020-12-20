
<<<<<<< HEAD
    // DEFAULT WINDOWS + WINDOWS IN ENGLISH

void start_default() // AVAILBALE VOR ALL 3 LANGUAGES
{

    // ADINA
    setbkcolor(LIGHTGREEN);
    clearviewport();
    setcolor(BLACK);
    settextstyle(font, HORIZ_DIR, 9);
    int left = (windowWidth - textwidth("Bridg-It"))/2;
    outtextxy(left, 150, "Bridg-It");
    setcolor(BLACK);
    settextstyle(font, HORIZ_DIR, 3);
    setfillstyle(EMPTY_FILL, BLACK);
}

void start()
{

    // ADINA
    start_default();
=======
void start(){ // ADINA
    setbkcolor(LIGHTGREEN);
    clearviewport();
    setcolor(BLACK);
    settextstyle(font, HORIZ_DIR,9);
    int left = (windowWidth - textwidth("Bridg-It"))/2;
    outtextxy(left, 150, "Bridg-It");
    setcolor(BLACK);
    settextstyle(font, HORIZ_DIR,3);
    setfillstyle(EMPTY_FILL, BLACK);
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    //rectangle(20, 20, 20+10+textwidth("Info"), 20+10+textheight("Info"));
    //rectangle(20, 55, 20+10+textwidth("Language"), 55+10+textheight("Language"));
    //rectangle(20, 90, 20+10+textwidth("Settings"), 90+10+textheight("Settings"));
    //rectangle(900, 20, 900+10+textwidth("Exit"), 20+10+textheight("Exit"));
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Language");
    outtextxy(25, 95, "Settings");
    outtextxy(1150, 25, "Exit");
    settextstyle(font, HORIZ_DIR,5);
<<<<<<< HEAD
    int left = (windowWidth - textwidth("< Single Player >"))/2;
=======
    left = (windowWidth - textwidth("< Single Player >"))/2;
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    outtextxy(left, 330, "< Single Player >");
    left = (windowWidth - textwidth("< Two Players >"))/2;
    outtextxy(left, 405, "< Two Players >");
    //rectangle(325, 325, 325+10+textwidth("Single-player"), 325+10+textheight("Single-player"));
    //rectangle(325, 400, 325+10+textwidth("Single-player"), 400+10+textheight("Two-players"));

}

<<<<<<< HEAD
void info()
{

=======

void info()
{
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    // ADINA
    clearviewport();
    setcolor(BLACK);

    // ALEXANDRA

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("How to play?"))/2;
    outtextxy(left, 120, "How to play?");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,2);
    left = (windowWidth - textwidth("A player draws a horizontal line connecting 2 dots of his color."))/2;
    outtextxy(left, 200, "A player draws a horizontal line connecting 2 dots of his color.");

    left = (windowWidth - textwidth("Then the other player does the same thing with 2 dots of his color."))/2;
    outtextxy(left, 240, "Then the other player does the same thing with 2 dots of his color.");

    left = (windowWidth - textwidth("With the lines they draw, they must connect two opposite sides"))/2;
    outtextxy(left, 280, "With the lines they draw, they must connect two opposite sides");

    left = (windowWidth - textwidth("of the table."))/2;
    outtextxy(left, 320, "of the table.");

    left = (windowWidth - textwidth("The first player to succeed connecting the sides, wins."))/2;
    outtextxy(left, 360, "The first player to succeed connecting the sides, wins.");
}

void settings()
{
<<<<<<< HEAD

=======
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Settings"))/2;
<<<<<<< HEAD
    outtextxy(left, 110, "Settings");
=======
    outtextxy(left, 120, "Settings");
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");
<<<<<<< HEAD

    // ADINA
    // ADD SETTINGS

    // ADD TEXT
    outtextxy(90, 300, "Select colour:");
    outtextxy(90, 250, "Who begins?");
    outtextxy(90, 350, "Select table dimension:");
    outtextxy(90, 500, "Select computer level:");
    outtextxy(420, 210, "Player 1");
    outtextxy(760, 210, "Player 2");
    outtextxy(250, 390, "Small: 3×4");
    outtextxy(250, 425, "Medium: 4×5");
    outtextxy(250, 460, "Large: 5×6");
    outtextxy(250, 540, "Easy");
    outtextxy(250, 575, "Medium");
    outtextxy(250, 610, "Hard");

    // SELECT COLOURS AND WHO BEGINS
    rectangle(420 + textwidth("Player 1")/2 - 10, 250 + textheight("Who begins?")/2 - 10, 420 + textwidth("Player 1")/2 + 10, 250 + textheight("Who begins?")/2 + 10);
    rectangle(760 + textwidth("Player 2")/2 - 10, 250 + textheight("Who begins?")/2 - 10, 760 + textwidth("Player 2")/2 + 10, 250 + textheight("Who begins?")/2 + 10);

    setcolor(CYAN);
    rectangle(420 + textwidth("Player 1")/2 - 20 - 5, 300 + textheight("Select colour:")/2 - 10, 420 + textwidth("Player 1")/2 - 5, 300 + textheight("Select colour:")/2 + 10);
    rectangle(760 + textwidth("Player 2")/2 - 20 - 5, 300 + textheight("Select colour:")/2 - 10, 760 + textwidth("Player 2")/2 - 5, 300 + textheight("Select colour:")/2 + 10);
    setfillstyle (SOLID_FILL, CYAN);

    setcolor(LIGHTMAGENTA );
    rectangle(420 + textwidth("Player 1")/2 + 5, 300 + textheight("Select colour:")/2 - 10, 420 + textwidth("Player 1")/2 + 20 + 5, 300 + textheight("Select colour:")/2 + 10);
    rectangle(760 + textwidth("Player 2")/2 + 5, 300 + textheight("Select colour:")/2 - 10, 760 + textwidth("Player 2")/2 + 20 + 5, 300 + textheight("Select colour:")/2 + 10);
    setfillstyle(SOLID_FILL, LIGHTMAGENTA );

    setcolor(LIGHTRED);
    rectangle(420 + textwidth("Player 1")/2 - 20 - 20 - 5 - 10, 300 + textheight("Select colour:")/2 - 10, 420 + textwidth("Player 1")/2 - 20 - 5 - 10, 300 + textheight("Select colour:")/2 + 10);
    rectangle(760 + textwidth("Player 2")/2 - 20 - 20 - 5 - 10, 300 + textheight("Select colour:")/2 - 10, 760 + textwidth("Player 2")/2 - 20 - 5 - 10, 300 + textheight("Select colour:")/2 + 10);
    setfillstyle(SOLID_FILL, LIGHTRED);

    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(420 + textwidth("Player 1")/2 + 5 + 20 +10, 300 + textheight("Select colour:")/2 - 10, 420 + textwidth("Player 1")/2 + 20 + 20 + 10 + 5, 300 + textheight("Select colour:")/2 + 10);
    rectangle(760 + textwidth("Player 2")/2 + 5 + 20 +10, 300 + textheight("Select colour:")/2 - 10, 760 + textwidth("Player 2")/2 + 20 + 20 + 10 + 5, 300 + textheight("Select colour:")/2 + 10);

    int x, y;
    getmouseclick(WM_LBUTTONDOWN, x, y);

    if(x>=420 + textwidth("Player 1")/2 - 10 && x<=420 + textwidth("Player 1")/2 + 10 && y>=250 + textheight("Who begins?")/2 - 10 && y<=250 + textheight("Who begins?")/2 + 10 && ismouseclick(WM_LBUTTONDOWN))
       setfillstyle(SOLID_FILL, BLACK);
}

void language_default()
{

    // THE SAME FOR ALL 3 LANGUAGES
=======
}

void language()
{
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1
    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    //ADD TITLE
    settextstyle(font, HORIZ_DIR,5);
<<<<<<< HEAD
    int left = (windowWidth - textwidth("Language/ Langue/ Limba"))/2;
    outtextxy(left, 120, "Language/ Langue/ Limba");
=======
    int left = (windowWidth - textwidth("Language"))/2;
    outtextxy(left, 120, "Language");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(850, 20, 850+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,4);
    left = (windowWidth - textwidth("Romana"))/2;
    outtextxy(left, 200, "Romana");

    left = (windowWidth - textwidth("English"))/2;
    outtextxy(left, 240, "English");

<<<<<<< HEAD
    left = (windowWidth - textwidth("Francaise"))/2;
    outtextxy(left, 280, "Francaise");
=======
    left = (windowWidth - textwidth("Française"))/2;
    outtextxy(left, 280, "Française");
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1


}

<<<<<<< HEAD
void language_english()
{
    language_default();
    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    outtextxy(1150, 25, "Home");
}

void board()
{
    clearviewport();
}


=======
>>>>>>> 40e6fafc80ed197ced277b93124287b098a987a1

