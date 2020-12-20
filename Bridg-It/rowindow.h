
    // WINDOWS IN ROMANIAN

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
    // ALEXANDRA & ADINA

    clearviewport();
    setcolor(BLACK);

    settextstyle(font, HORIZ_DIR,5);
    int left = (windowWidth - textwidth("Cum se joaca?"))/2;
    outtextxy(left, 100, "Cum se joaca?");

    left = (windowWidth - textwidth("Despre setarile jocului"))/2;
    outtextxy(left, 380, "Despre setarile jocului");

    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    //rectangle(1100, 20, 1100+10+textwidth("Home"), 20+10+textheight("Home"));
    outtextxy(1210 - textwidth("Pagina de pornire"), 25, "Pagina de pornire");

    //ADD CONTENT
    settextstyle(font, HORIZ_DIR,2);
    left = (windowWidth - textwidth("Cei doi jucatori fac cu randul pentru a construi un drum format din mai multe segmente astfel"))/2;
    outtextxy(left, 170, "Cei doi jucatori fac cu randul pentru a construi un drum format din mai multe segmente astfel");

    left = (windowWidth - textwidth("incat sa uneasca cele doua capete ale tablei de joc care sunt de culoarea sa."))/2;
    outtextxy(left, 210, "incat sa uneasca cele doua capete ale tablei de joc care apartin culorii lor.");

    left = (windowWidth - textwidth("Segmentele pot fi construite doar orizontal sau vertical si, odata ce exista un drum intre doua puncte"))/2;
    outtextxy(left, 250, "Segmentele pot fi construite doar orizontal sau vertical si, odata ce exista un drum intre doua puncte");

    left = (windowWidth - textwidth("alaturate, celalalt jucator nu va putea construi o linie care sa interstecteze acel drum."))/2;
    outtextxy(left, 290, "alaturate, celalalt jucator nu va putea construi o linie care sa interstecteze acel drum.");

    left = (windowWidth - textwidth("Primul jucator care reuseste sa uneasca cele doua capete de culoarea sa, castiga."))/2;
    outtextxy(left, 330, "Primul jucator care reuseste sa uneasca cele doua capete de culoarea sa, castiga.");

    left = (windowWidth - textwidth("In setari, jucatorii isi pot selecta preferintele legate de cine va face prima mutare, culori,"))/2;
    outtextxy(left, 450, "In setari, jucatorii isi pot selecta preferintele legate de cine va face prima mutare, culori,");

    left = (windowWidth - textwidth(" nivelul de dificultate al jocului (valabil numai in cazul in care se joaca impotriva calculatorului)"))/2;
    outtextxy(left, 490, "nivelul de dificultate al jocului (valabil numai in cazul in care se joaca impotriva calculatorului)");

    left = (windowWidth - textwidth("si dimesiunea tablei de joc, care indica numarul de buline care se vor regasi pe aceasta."))/2;
    outtextxy(left, 530, "si dimesiunea tablei de joc, care indica numarul de buline care se vor regasi pe aceasta.");

    left = (windowWidth - textwidth("Pe pagina de pornire se regasesc doua moduri de joc, iar in functie de care dintre acestea"))/2;
    outtextxy(left, 570, "Pe pagina de pornire se regasesc doua moduri de joc, iar in functie de care dintre acestea");

    left = (windowWidth - textwidth("este selectat, jucatorul va juca fie impotriva calculatorului, fie impreuna cu o alta persoana."))/2;
    outtextxy(left, 610, "este selectat, jucatorul va juca fie impotriva calculatorului, fie impreuna cu o alta persoana.");

}

void language_romana()
{

    // ALEXANDRA
    language_default();
    //ADD BUTTON BACK HOME
    settextstyle(font, HORIZ_DIR,3);
    outtextxy(1210 - textwidth("Pagina de pornire"), 25, "Pagina de pornire");
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
    outtextxy(1210 - textwidth("Pagina de pornire"), 25, "Pagina de pornire");

    // ADINA
    // ADD SETTINGS

    // ADD TEXT
    outtextxy(90, 200, "Selectati cine incepe primul:");
    outtextxy(90 + textwidth("Selectati cine incepe primul:") + 100, 200, "Jucator 1");
    outtextxy(90 + textwidth("Selectati cine incepe primul:") + 100 + 100 + textwidth("Jucator 1"), 200, "Jucator 2");
    outtextxy(90, 250, "Selectati culoarea:");
    outtextxy(textwidth("Selectati culoarea:") + 90 + 50, 250, "Jucator 1");
    outtextxy(textwidth("Selectati culoarea:") + 90 + 50, 300, "Jucator 2");
    outtextxy(90, 350, "Selectati dimensiunea tablei de joc:");
    outtextxy(250, 390, "Mica: 3×4");
    outtextxy(250, 425, "Medie: 4×5");
    outtextxy(250, 460, "Mare: 5×6");
    outtextxy(90, 500, "Selectati nivelul calculatorului:");
    outtextxy(250, 540, "Usor");
    outtextxy(250, 575, "Mediu");
    outtextxy(250, 610, "Dificil");

    // SELECT COLOURS AND WHO BEGINS

    const int DELAY = 50;
    int x, y, z, t;

    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);
    getmouseclick(WM_LBUTTONDBLCLK, z, t); // DOUBLECLICK

    // BOLD WHEN PLAYER 1 IS CLICKED AND UNBOLD WHEN IS DOUBLECLICKED
    if(x>=530 && x<=655 && y>=245 && y<=270 && currentWindow==12)
    {
        settextstyle(font, HORIZ_DIR, 4);
        outtextxy(90 + textwidth("Selectati cine incepe primul:") + 100, 250, "Jucator 1");
    }

    if(z>=530 && z<=655 && t>=245 && t<=270 && currentWindow==12)
    {
        settextstyle(font, HORIZ_DIR, 3);
        outtextxy(90 + textwidth("Selectati cine incepe primul:") + 100, 250, "Jucator 1");
    }

}

