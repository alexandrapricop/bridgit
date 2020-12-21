
    // WINDOWS IN FRENCH

void start_francais()
{
    // FRENCH SETTINGS
    // ADINA
    start_default();
    int left;
    outtextxy(25, 25, "Info");
    outtextxy(25, 60, "Langue");
    outtextxy(25, 95, "Param�tres");
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
    outtextxy(left, 100, "Comment jouer?");

    left = (windowWidth - textwidth("A propos des param�tres du jeu"))/2;
    outtextxy(left, 380, "A propos des param�tres du jeu");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1210 - textwidth("Page d'accueil"), 25, "Page d'accueil");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,2);
    left = (windowWidth - textwidth("Les deux joueurs construisent � tour de r�le un chemin formait de plusieurs segments, tel que les"))/2;
    outtextxy(left, 170, "Les deux joueurs construisent � tour de r�le un chemin formait de plusieurs segments, tel que les");

    left = (windowWidth - textwidth("deux t�tes du tableau qui ont la couleur qui ont choisi se r�unissent. Les segments peuvent �tre"))/2;
    outtextxy(left, 210, "deux t�tes du tableau qui ont la couleur qui ont choisi se r�unissent. Les segments peuvent �tre");

    left = (windowWidth - textwidth("construisent seulement horizontalement ou verticalement et, le moment o� il existe un chemin entre"))/2;
    outtextxy(left, 250, "construisent seulement horizontalement ou verticalement et, le moment o� il existe un chemin entre");

    left = (windowWidth - textwidth("deux points adjacents, l'autre joueur ne va pas pouvoir construire une ligne qui intersecte ce chemin."))/2;
    outtextxy(left, 290, "deux points adjacents, l'autre joueur ne va pas pouvoir construire une ligne qui intersecte ce chemin.");

    left = (windowWidth - textwidth("Le premier joueur qui r�ussis � unir les deux t�tes de sa couleur, gagnera."))/2;
    outtextxy(left, 330, "Le premier joueur qui r�ussis � unir les deux t�tes de sa couleur, gagnera.");

    left = (windowWidth - textwidth("Dans param�tres, les joueurs puis s�lecter leurs pr�f�rences lie de qui va faire le premier pas"))/2;
    outtextxy(left, 450, "Dans param�tres, les joueurs puis s�lecter leurs pr�f�rences lie de qui va faire le premier pas");

    left = (windowWidth - textwidth("dans le jeu, les couleurs, le niveau du difficult� (valable seulement quand on jeu contre l�ordinateur)"))/2;
    outtextxy(left, 490, "dans le jeu, les couleurs, le niveau du difficult� (valable seulement quand on jeu contre l�ordinateur)");

    left = (windowWidth - textwidth("et la dimension de la table de jeu, qui indique le num�ro des boulines qui vont se trouver sur elle."))/2;
    outtextxy(left, 530, "et la dimension de la table de jeu, qui indique le num�ro des boulines qui vont se trouver sur elle.");

    left = (windowWidth - textwidth("Sur la page de d�accueil, on trouve deux modalit�s de jeu, et, en fonction de laquelle"))/2;
    outtextxy(left, 570, "Sur la page de d�accueil, on trouve deux modalit�s de jeu, et, en fonction de laquelle");

    left = (windowWidth - textwidth("est choisi, le jouer va jouer contre l�ordinateur ou une autre personne."))/2;
    outtextxy(left, 610, "est choisi, le jouer va jouer contre l�ordinateur ou une autre personne.");

}

void language_francais()
{

    // ALEXANDRA
    language_default();
    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    outtextxy(1210 - textwidth("Page d'accueil"), 25, "Page d'accueil");
}

void settings_francais()
{

    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Param�tres"))/2;
    outtextxy(left, 110, "Param�tres");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1210 - textwidth("Page d'accueil"), 25, "Page d'accueil");

    // ADINA
    // ADD SETTINGS

    // ADD TEXT
    outtextxy(90, 200, "S�lectez qui commence le premier:");
    outtextxy(90 + textwidth("S�lectez qui commence le premier:") + 100, 200, "Joueur 1");
    outtextxy(90 + textwidth("S�lectez qui commence le premier:") + 100 + 100 + textwidth("Joueur 1"), 200, "Joueur 2");
    outtextxy(90, 250, "Choisissez la couleur:");
    outtextxy(textwidth("Choisissez la couleur:") + 90 + 50, 250, "Joeuer 1");
    outtextxy(textwidth("Choisissez la couleur:") + 90 + 50, 300, "Joueur 2");
    outtextxy(90, 350, "S�lectez la dimension du tableau du jeu:");
    outtextxy(90, 500, "S�lectez le niveau du calculateur:");
    outtextxy(250, 390, "Petite: 3�4");
    outtextxy(250, 425, "Moyenne: 4�5");
    outtextxy(250, 460, "Grande: 5�6");
    outtextxy(250, 540, "Facile");
    outtextxy(250, 575, "Medium");
    outtextxy(250, 610, "Difficile");

    // SELECT COLOURS AND WHO BEGINS

}
