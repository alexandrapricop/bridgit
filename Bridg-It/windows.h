
    // DEFAULT WINDOWS

void start_default() // AVAILBALE VOR ALL 3 LANGUAGES
{

    // ADINA
    setbkcolor(WHITE);
    clearviewport();
    readimagefile("C://Users//user//bridgit//Background Title.jpg", 0, 0, 1280, 720);
    setcolor(BLACK);
    int left = (windowWidth - textwidth("Bridg-It"))/2;
    settextstyle(font, HORIZ_DIR, 3);
    setfillstyle(EMPTY_FILL, BLACK);
}

void start()
{

    // ADINA
    start_default();
    //rectangle(20, 20, 20+10+textwidth("Info"), 20+10+textheight("Info"));
    //rectangle(20, 55, 20+10+textwidth("Language"), 55+10+textheight("Language"));
    //rectangle(20, 90, 20+10+textwidth("Settings"), 90+10+textheight("Settings"));
    //rectangle(900, 20, 900+10+textwidth("Exit"), 20+10+textheight("Exit"));
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Language");
    outtextxy(25, 95, "Settings");
    outtextxy(1150, 25, "Exit");
    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("< Single Player >"))/2;
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
    outtextxy(left, 100, "How to play?");

    left = (windowWidth - textwidth("About game settings"))/2;
    outtextxy(left, 380, "About game settings");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,2);
    left = (windowWidth - textwidth("Players have to take turns in order to build a continuous"))/2;
    outtextxy(left, 170, "Players have to take turns in order to create a continuous");

    left = (windowWidth - textwidth("path of bridges from the entrance to the exit."))/2;
    outtextxy(left, 210, "path of bridges from the entrance to the exit.");

    left = (windowWidth - textwidth("Bridges can be built horizontally or verticallly and, once there is a path between"))/2;
    outtextxy(left, 250, "Bridges can be built horizontally or verticallly and, once there is a path between");

    left = (windowWidth - textwidth("two adjacent dots, the opponent can not build a bridge that cross that path."))/2;
    outtextxy(left, 290, "two adjacent dots, the opponent can not build a bridge that cross that path.");

    left = (windowWidth - textwidth("The first player to succeed connecting the sides, wins."))/2;
    outtextxy(left, 330, "The first player to succeed connecting the sides, wins.");

    left = (windowWidth - textwidth("In settings, players can select their preferences regarding the starting player, colours,"))/2;
    outtextxy(left, 450, "In settings, players can select their preferences regarding the starting player, colours,");

    left = (windowWidth - textwidth("game difficulty level (available only when single-player mode is chosen) and board"))/2;
    outtextxy(left, 490, "game difficulty level (available only when single-player mode is chosen) and board");

    left = (windowWidth - textwidth("dimension, which indicates the amount of dots that will be on the board."))/2;
    outtextxy(left, 530, "dimension, which indicates the amount of dots that will be on the board.");

    left = (windowWidth - textwidth("In the main menu there are two game modes in which the player will play either"))/2;
    outtextxy(left, 570, "In the main menu there are two game modes in which the player will play either");

    left = (windowWidth - textwidth("against the computer or with another person, depending on which game mode is selected."))/2;
    outtextxy(left, 610, "against the computer or with another person, depending on which game mode is selected.");
}

void settings()
{

    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Settings"))/2;
    outtextxy(left, 110, "Settings");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Home");

    // ADINA
    // ADD SETTINGS

    // ADD TEXT
    outtextxy(90, 200, "Pick a starting player:");
    outtextxy(90 + textwidth("Pick a starting player:") + 100, 200, "Player 1");
    outtextxy(90 + textwidth("Pick a starting player:") + 100 + 100 + textwidth("Player 1"), 200, "Player 2");
    outtextxy(90, 250, "Select a colour:");
    outtextxy(textwidth("Select a colour:") + 90 + 50, 250, "Player 1");
    outtextxy(textwidth("Select a colour:") + 90 + 50, 300, "Player 2");
    outtextxy(90, 350, "Select table dimension:");
    outtextxy(90, 500, "Select computer level:");
    outtextxy(250, 390, "Small: 3×4");
    outtextxy(250, 425, "Medium: 4×5");
    outtextxy(250, 460, "Large: 5×6");
    outtextxy(250, 540, "Easy");
    outtextxy(250, 575, "Medium");
    outtextxy(250, 610, "Hard");

    // SELECT COLOURS AND WHO BEGINS
}

void language_default()
{

    // THE SAME FOR ALL 3 LANGUAGES
    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    //ADD TITLE
    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Limba/ Language/ Langue"))/2;
    outtextxy(left, 120, "Limba/ Language/ Langue");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,4);
    left = (windowWidth - textwidth("Romana"))/2;
    outtextxy(left, 250, "Romana");

    left = (windowWidth - textwidth("English"))/2;
    outtextxy(left, 310, "English");

    left = (windowWidth - textwidth("Française"))/2;
    outtextxy(left, 370, "Française");
}

void language_english()
{
    language_default();
    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    outtextxy(1150, 25, "Home");
}

void timer()
{
    char duration[10];
    clock_t start = clock(); // START TIME
	clock_t timePassed;

	while(true)
	{
		start=clock();
		timePassed=difftime(clock(), start);
		itoa(timePassed, duration, 10);
		outtextxy(900, 25, duration);
	}
}

void board()
{
    clearviewport();
    timer();
}





