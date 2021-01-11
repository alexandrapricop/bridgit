
    // FERESTRE IN ROMANA - INSERARE IMAGINI
    // ADINA

void menu_romanian()
{

    // PAGINA DE PORNIRE

    clearviewport();
    readimagefile("menu_romanian.jpg", 0, 0, windowWidth, windowHeight);
}

void info_romanian()
{

    // INFO

    clearviewport();
    readimagefile("info_romanian.jpg", 0, 0, windowWidth, windowHeight);

}

void language_romanian()
{

    // LIMBI
    // DACA SELECTEZ LIMBILE DIN MENIU, ATUNCI ARE LOC DELAYUL
    // DACA NU SI VREAU SA COMUT LIMBA, ATUNCI NU ARE LOC NICIUN DELAY, CI SE INSEREAZA IMAGINILE UNA PESTE ALTA SI SE ACTUALIZEAZA CURRENTWINDOW

    if(currentWindow==1 || currentWindow==6 || currentWindow==11)
        clearviewport();

    readimagefile("language_romanian.jpg", 0, 0, windowWidth, windowHeight);
}

void settings_romanian()
{

    // SETARI
    clearviewport();
    readimagefile("settings_romanian.jpg", 0, 0, windowWidth, windowHeight);
    readimagefile("ar.jpg", dx*65, dy*25, dx*85, dy*40);
    readimagefile("p1_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
    readimagefile("small_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
    readimagefile("easy_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
}

void aboutsettings_romanian()
{

    // MAI MULTE DESPRE SETARI

    clearviewport();
    readimagefile("aboutsettings_romanian.jpg", 0, 0, windowWidth, windowHeight);
}

