
    // WINDOWS IN FRENCH

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
    int left = (windowWidth - textwidth("Comment jouer?"))/2;
    outtextxy(left, 120, "Comment jouer?");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Menu");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,2);
    left = (windowWidth - textwidth("Les deux joueurs construisent à tour de rôle un chemin formait de plusieurs"))/2;
    outtextxy(left, 200, "Les deux joueurs construisent à tour de rôle un chemin formait de plusieurs");

    left = (windowWidth - textwidth("segments, tel que les deux têtes du tableau qui ont la couleur qui ont choisi se réunissent."))/2;
    outtextxy(left, 240, "segments, tel que les deux têtes du tableau qui ont la couleur qui ont choisi se réunissent.");

    left = (windowWidth - textwidth("Les segments peuvent être construisent seulement horizontalement ou verticalement et,"))/2;
    outtextxy(left, 280, "Les segments peuvent être construisent seulement horizontalement ou verticalement et,");

    left = (windowWidth - textwidth("le moment où il existe un chemin entre deux points adjacents, l'autre joueur"))/2;
    outtextxy(left, 320, "le moment où il existe un chemin entre deux points adjacents, l'autre joueur");

    left = (windowWidth - textwidth("ne va pas pouvoir construire une ligne qui intersecte ce chemin."))/2;
    outtextxy(left, 360, "ne va pas pouvoir construire une ligne qui intersecte ce chemin.");

    left = (windowWidth - textwidth("Le premier joueur qui réussis à unir les deux têtes de sa couleur, gagnera."))/2;
    outtextxy(left, 400, "Le premier joueur qui réussis à unir les deux têtes de sa couleur, gagnera.");
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
    outtextxy(90, 250, "Sélectez qui commence le premier:");
    outtextxy(90, 350, "Sélectez la dimension du tableau du jeu:");
    outtextxy(90, 500, "Sélectez le niveau du calculateur:");
    outtextxy(90 + textwidth("Sélectez qui commence le premier:") + 100, 250, "Joueur 1");
    outtextxy(90 + textwidth("Sélectez qui commence le premier:") + 100 + 100 + textwidth("Joueur 1"), 250, "Joueur 2");
    outtextxy(250, 390, "Petite: 3×4");
    outtextxy(250, 425, "Moyenne: 4×5");
    outtextxy(250, 460, "Grande: 5×6");
    outtextxy(250, 540, "Facile");
    outtextxy(250, 575, "Medium");
    outtextxy(250, 610, "Difficile");

    // SELECT COLOURS AND WHO BEGINS

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
