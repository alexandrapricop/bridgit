
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
    //rectangle(20, 20, 20+10+textwidth("Info"), 20+10+textheight("Info"));
    //rectangle(20, 55, 20+10+textwidth("Language"), 55+10+textheight("Language"));
    //rectangle(20, 90, 20+10+textwidth("Settings"), 90+10+textheight("Settings"));
    //rectangle(900, 20, 900+10+textwidth("Exit"), 20+10+textheight("Exit"));
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Language");
    outtextxy(25, 95, "Settings");
    outtextxy(1150, 25, "Exit");
    settextstyle(font, HORIZ_DIR,5);
    left = (windowWidth - textwidth("< Single Player >"))/2;
    outtextxy(left, 330, "< Single Player >");
    left = (windowWidth - textwidth("< Two Players >"))/2;
    outtextxy(left, 405, "< Two Players >");
    //rectangle(325, 325, 325+10+textwidth("Single-player"), 325+10+textheight("Single-player"));
    //rectangle(325, 400, 325+10+textwidth("Single-player"), 400+10+textheight("Two-players"));

}


void info()
{
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
    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Settings"))/2;
    outtextxy(left, 120, "Settings");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");
}

void language()
{
    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    //ADD TITLE
    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Language"))/2;
    outtextxy(left, 120, "Language");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(850, 20, 850+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,4);
    left = (windowWidth - textwidth("Romana"))/2;
    outtextxy(left, 200, "Romana");

    left = (windowWidth - textwidth("English"))/2;
    outtextxy(left, 240, "English");

    left = (windowWidth - textwidth("Française"))/2;
    outtextxy(left, 280, "Française");


}


