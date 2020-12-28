
    // FERESTRE IN ENGLEZA - INSERARE IMAGINI
    // ADINA

void menu_english()
{
    // PAGINA DE PORNIRE
    clearviewport();
    readimagefile("menu_english.jpg", 0, 0, windowWidth, windowHeight);
}

void info_english()
{
    // INFO
    clearviewport();
    readimagefile("info_english.jpg", 0, 0, windowWidth, windowHeight);
}

void language_english()
{
    int x=mousex(), y=mousey();

    // LIMBI
    // DACA SELECTEZ LIMBILE DIN MENIU, ATUNCI ARE LOC DELAYUL
    // DACA NU SI VREAU SA COMUT LIMBA, ATUNCI NU ARE LOC NICIUN DELAY, CI SE INSEREAZA IMAGINILE UNA PESTE ALTA SI SE ACTUALIZEAZA CURRENTWINDOW

    if(currentWindow==1 || currentWindow==6 || currentWindow==11)
        clearviewport();

    readimagefile("language_english.jpg", 0, 0, windowWidth, windowHeight);


    if(x>=765 && x<=900 && y>=245 && y<=300)
        readimagefile("language_english_p2.jpg", 0, 0, windowWidth, windowHeight);
}

void settings_english()
{

    int x, y;

    getmouseclick(WM_LBUTTONDOWN, x, y);

    // SETARI
    if(currentWindow==1 || currentWindow==5)
        clearviewport();

    readimagefile("settings_english.jpg", 0, 0, windowWidth, windowHeight);
    readimagefile("ar.jpg", dx*60, dy*24, dx*82, dy*38);
    readimagefile("p1_english.jpg", dx*49, dy*24, dx*58, dy*40);
    readimagefile("small_english.jpg", dx*17, dy*44, dx*34, dy*65);
    readimagefile("easy_english.jpg", dx*17, dy*75, dx*34, dy*95);

       buttons();

}

void aboutsettings_english()
{
    // MAI MULTE DESPRE SETARI
    clearviewport();
    readimagefile("aboutsettings_english.jpg", 0, 0, windowWidth, windowHeight);
}
