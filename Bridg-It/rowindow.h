
    // ALL ROMANIAN FUNCTIONS

void start_romana()
{
    // SETTINGS ROMANIAN
    // ADINA
    start_default();
    int left;
    outtextxy(25, 25, "Informatii");
    outtextxy(25, 60, "Limba");
    outtextxy(25, 95, "Setari");
    outtextxy(1150, 25, "Exit");
    settextstyle(font, HORIZ_DIR,5);
    left = (windowWidth - textwidth("< Un jucator >"))/2;
    outtextxy(left, 330, "< Un jucator >");
    left = (windowWidth - textwidth("< Doi jucatori >"))/2;
    outtextxy(left, 405, "< Doi jucatori >");
}

void info_romana()
{

    // INFORMATION IN FRENCH
    // ADINA
    clearviewport();
    setcolor(BLACK);

    // ALEXANDRA

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Cum se joaca?"))/2;
    outtextxy(left, 120, "Cum se joaca?");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Meniu");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,2);
    left = (windowWidth - textwidth("Jucatorii fac cu randul pentru a construi un drum format din mai multe segmente"))/2;
    outtextxy(left, 200, "Jucatorii fac cu randul pentru a construi un drum format din mai multe segmente");

    left = (windowWidth - textwidth("astfel incat sa uneasca cele doua capete ale tablei de joc care sunt de culoarea sa."))/2;
    outtextxy(left, 240, "astfel incat sa uneasca cele doua capete ale tablei de joc care sunt de culoarea sa.");

    left = (windowWidth - textwidth("Totodata, jucatorii trebuie sa aiba in vedere ce urmareste oponentul si sa se"))/2;
    outtextxy(left, 280, "Totodata, jucatorii trebuie sa aiba in vedere ce urmareste oponentul si sa se");

    left = (windowWidth - textwidth("blocheze unul pe celalalt pentru a se asigura ca vor castiga."))/2;
    outtextxy(left, 320, "blocheze unul pe celalalt pentru a se asigura ca vor castiga.");

    left = (windowWidth - textwidth("Primul jucator care reuseste sa uneasca cele doua capete, castiga."))/2;
    outtextxy(left, 360, "Primul jucator care reuseste sa uneasca cele doua capete, castiga.");
}

void language_romana()
{
    // ALEXANDRA
    language_default();
    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    outtextxy(1150, 25, "Meniu");
}

void settings_romana()
{
    // ALEXANDRA
    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Setari"))/2;
    outtextxy(left, 110, "Setari");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1150, 25, "Meniu");

    // ADINA
    // ADD SETTINGS

    // ADD TEXT
    outtextxy(90, 300, "Selectati culoarea:");
    outtextxy(90, 250, "Cine incepe?");
    outtextxy(90, 350, "Selectati dimensiunea tablei de joc:");
    outtextxy(90, 500, "Selectati nivelul calculatorului:");
    outtextxy(420, 210, "Jucator 1");
    outtextxy(760, 210, "Jucator 2");
    outtextxy(250, 390, "Mica: 3×4");
    outtextxy(250, 425, "Medie: 4×5");
    outtextxy(250, 460, "Mare: 5×6");
    outtextxy(250, 540, "Usor");
    outtextxy(250, 575, "Mediu");
    outtextxy(250, 610, "Dificil");

    // SELECT COLOURS AND WHO BEGINS
    rectangle(420 + textwidth("Jucator 1")/2 - 10, 250 + textheight("Cine incepe?")/2 - 10, 420 + textwidth("Jucator 1")/2 + 10, 250 + textheight("Cine incepe?")/2 + 10);
    rectangle(760 + textwidth("Jucator 2")/2 - 10, 250 + textheight("Cine incepe?")/2 - 10, 760 + textwidth("Jucator 2")/2 + 10, 250 + textheight("Cine incepe?")/2 + 10);

    setcolor(CYAN);
    rectangle(420 + textwidth("Jucator 1")/2 - 20 - 5, 300 + textheight("Selectati culoarea:")/2 - 10, 420 + textwidth("Jucator 1")/2 - 5, 300 + textheight("Selectati culoarea:")/2 + 10);
    rectangle(760 + textwidth("Jucator 2")/2 - 20 - 5, 300 + textheight("Selectati culoarea:")/2 - 10, 760 + textwidth("Jucator 2")/2 - 5, 300 + textheight("Selectati culoarea:")/2 + 10);
    setfillstyle (SOLID_FILL, CYAN);

    setcolor(LIGHTMAGENTA );
    rectangle(420 + textwidth("Jucator 1")/2 + 5, 300 + textheight("Selectati culoarea:")/2 - 10, 420 + textwidth("Jucator 1")/2 + 20 + 5, 300 + textheight("Selectati culoarea:")/2 + 10);
    rectangle(760 + textwidth("Jucator 2")/2 + 5, 300 + textheight("Selectati culoarea:")/2 - 10, 760 + textwidth("Jucator 2")/2 + 20 + 5, 300 + textheight("Selectati culoarea:")/2 + 10);
    setfillstyle(SOLID_FILL, LIGHTMAGENTA );

    setcolor(LIGHTRED);
    rectangle(420 + textwidth("Jucator 1")/2 - 20 - 20 - 5 - 10, 300 + textheight("Selectati culoarea:")/2 - 10, 420 + textwidth("Jucator 1")/2 - 20 - 5 - 10, 300 + textheight("Selectati culoarea:")/2 + 10);
    rectangle(760 + textwidth("Jucator 2")/2 - 20 - 20 - 5 - 10, 300 + textheight("Selectati culoarea:")/2 - 10, 760 + textwidth("Jucator 2")/2 - 20 - 5 - 10, 300 + textheight("Selectati culoarea:")/2 + 10);
    setfillstyle(SOLID_FILL, LIGHTRED);

    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(420 + textwidth("Jucator 1")/2 + 5 + 20 +10, 300 + textheight("Selectati culoarea:")/2 - 10, 420 + textwidth("Jucator 1")/2 + 20 + 20 + 10 + 5, 300 + textheight("Selectati culoarea:")/2 + 10);
    rectangle(760 + textwidth("Jucator 2")/2 + 5 + 20 +10, 300 + textheight("Selectati culoarea:")/2 - 10, 760 + textwidth("Jucator 2")/2 + 20 + 20 + 10 + 5, 300 + textheight("Selectati culoarea:")/2 + 10);
}


