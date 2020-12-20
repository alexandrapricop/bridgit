
    // ALL FRENCH FUNCTIONS

void start_francais()
{
    // FRENCH SETTINGS
    // ADINA
    start_default();
    int left;
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Langue");
    outtextxy(25, 95, "Options");
    outtextxy(1150, 25, "Exit");
    settextstyle(font, HORIZ_DIR,5);
    left = (windowWidth - textwidth("< Un joueur >"))/2;
    outtextxy(left, 330, "< Un joueur >");
    left = (windowWidth - textwidth("< Deux joueurs >"))/2;
    outtextxy(left, 405, "< Deux joueurs >");
}

void info_francais()
{

    // INFORMATION IN FRENCH
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
    outtextxy(1150, 25, "Menu");

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

void language_francais()
{

    // ALEXANDRA
    language_default();
    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    outtextxy(1150, 25, "Menu");
}

void settings_francais()
{

    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Options"))/2;
    outtextxy(left, 110, "Options");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Menu");

    // ADINA
    // ADD SETTINGS

    // ADD TEXT
    outtextxy(90, 300, "Choisissez la couleur:");
    outtextxy(90, 250, "Qui commence le premier?");
    outtextxy(90, 350, "Sélectez la dimension du tableau du jeu:");
    outtextxy(90, 500, "Sélectez le niveau du calculateur:");
    outtextxy(420, 210, "Joueur 1");
    outtextxy(760, 210, "Joueur 2");
    outtextxy(250, 390, "Petite: 3×4");
    outtextxy(250, 425, "Moyenne: 4×5");
    outtextxy(250, 460, "Grande: 5×6");
    outtextxy(250, 540, "Facile");
    outtextxy(250, 575, "Medium");
    outtextxy(250, 610, "Difficile");

    // SELECT COLOURS AND WHO BEGINS
    rectangle(420 + textwidth("Joueur 1")/2 - 10, 250 + textheight("Qui commence le premier?")/2 - 10, 420 + textwidth("Joueur 1")/2 + 10, 250 + textheight("Qui commence le premier?")/2 + 10);
    rectangle(760 + textwidth("Joueur 2")/2 - 10, 250 + textheight("Qui commence le premier?")/2 - 10, 760 + textwidth("Joueur 2")/2 + 10, 250 + textheight("Qui commence le premier?")/2 + 10);

    setcolor(CYAN);
    rectangle(420 + textwidth("Joueur 1")/2 - 20 - 5, 300 + textheight("Choisissez la couleur:")/2 - 10, 420 + textwidth("Joueur 1")/2 - 5, 300 + textheight("Choisissez la couleur:")/2 + 10);
    rectangle(760 + textwidth("Joueur 2")/2 - 20 - 5, 300 + textheight("Choisissez la couleur:")/2 - 10, 760 + textwidth("Joueur 2")/2 - 5, 300 + textheight("Choisissez la couleur:")/2 + 10);
    setfillstyle (SOLID_FILL, CYAN);

    setcolor(LIGHTMAGENTA );
    rectangle(420 + textwidth("Joueur 1")/2 + 5, 300 + textheight("Choisissez la couleur:")/2 - 10, 420 + textwidth("Joueur 1")/2 + 20 + 5, 300 + textheight("Choisissez la couleur:")/2 + 10);
    rectangle(760 + textwidth("Joueur 2")/2 + 5, 300 + textheight("Choisissez la couleur:")/2 - 10, 760 + textwidth("Joueur 2")/2 + 20 + 5, 300 + textheight("Choisissez la couleur:")/2 + 10);
    setfillstyle(SOLID_FILL, LIGHTMAGENTA );

    setcolor(LIGHTRED);
    rectangle(420 + textwidth("Joueur 1")/2 - 20 - 20 - 5 - 10, 300 + textheight("Choisissez la couleur:")/2 - 10, 420 + textwidth("Joueur 1")/2 - 20 - 5 - 10, 300 + textheight("Choisissez la couleur:")/2 + 10);
    rectangle(760 + textwidth("Joueur 2")/2 - 20 - 20 - 5 - 10, 300 + textheight("Choisissez la couleur:")/2 - 10, 760 + textwidth("Joueur 2")/2 - 20 - 5 - 10, 300 + textheight("Choisissez la couleur:")/2 + 10);
    setfillstyle(SOLID_FILL, LIGHTRED);

    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(420 + textwidth("Joueur 1")/2 + 5 + 20 +10, 300 + textheight("Choisissez la couleur:")/2 - 10, 420 + textwidth("Joueur 1")/2 + 20 + 20 + 10 + 5, 300 + textheight("Choisissez la couleur:")/2 + 10);
    rectangle(760 + textwidth("Joeuer 2")/2 + 5 + 20 +10, 300 + textheight("Choisissez la couleur:")/2 - 10, 760 + textwidth("Joueur 2")/2 + 20 + 20 + 10 + 5, 300 + textheight("Choisissez la couleur:")/2 + 10);


}

