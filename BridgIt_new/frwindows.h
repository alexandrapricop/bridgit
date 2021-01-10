
    // FERESTRE IN FRANCEZA - INSERARE IMAGINI
    // ADINA

void menu_french()
{

    // PAGINA DE PORNIRE

    clearviewport();
    readimagefile("menu_french.jpg", 0, 0, windowWidth, windowHeight);
}

void info_french()
{

    // INFO

    clearviewport();
    readimagefile("info_french.jpg", 0, 0, windowWidth, windowHeight);

}

void language_french()
{

    // LIMBI
    // DACA SELECTEZ LIMBILE DIN MENIU, ATUNCI ARE LOC DELAYUL
    // DACA NU SI VREAU SA COMUT LIMBA, ATUNCI NU ARE LOC NICIUN DELAY, CI SE INSEREAZA IMAGINILE UNA PESTE ALTA SI SE ACTUALIZEAZA CURRENTWINDOW

    if(currentWindow==1 || currentWindow==6 || currentWindow==11)
        clearviewport();


     readimagefile("language_french.jpg", 0, 0, windowWidth, windowHeight);
}

void settings_french()
{

    // SETARI

    clearviewport();
    readimagefile("settings_french.jpg", 0, 0, windowWidth, windowHeight);
    readimagefile("ar.jpg", dx*65, dy*25, dx*85, dy*40);
    readimagefile("p1_french.jpg", dx*55, dy*25, dx*64, dy*42);
    readimagefile("small_french.jpg", dx*15, dy*46, dx*32, dy*68);
    readimagefile("easy_french.jpg", dx*15, dy*75, dx 32, dy*95);

void aboutsettings_french()
{

    // MAI MULTE DESPRE SETARI

    clearviewport();
    readimagefile("aboutsettings_french.jpg", 0, 0, windowWidth, windowHeight);
}
