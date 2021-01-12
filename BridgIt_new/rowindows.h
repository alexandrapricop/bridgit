
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
    if(currentWindow==11 || currentWindow==15)
        clearviewport();

    readimagefile("settings_romanian.jpg", 0, 0, windowWidth, windowHeight);

}

void aboutsettings_romanian()
{

    // MAI MULTE DESPRE SETARI

    clearviewport();
    readimagefile("aboutsettings_romanian.jpg", 0, 0, windowWidth, windowHeight);
}

void buttons_ro()
{
    // ALEXANDRA

        if(difficulty == 1){
            readimagefile("easy_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
        }
        if(difficulty == 2){
           readimagefile ("medium_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
        }
        if(difficulty == 3){
             readimagefile("hard_romanian.jpg", dx*16, dy*75, dx*32, dy*95);
        }

        if(boardsize == 3){
             readimagefile("small_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
        }

        if(boardsize == 4){
             readimagefile("mediumb_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
        }

        if(boardsize == 5){
             readimagefile("large_romanian.jpg", dx*16, dy*46, dx*33, dy*68);
        }

        if(colour2 == 7){
            readimagefile("a_colour.jpg", dx*65, dy*33, dx*83, dy*40);
        }
        if(colour2 == 4){
              readimagefile("r_colour.jpg", dx*65, dy*33, dx*83, dy*40);
        }
        if(colour2 == 12){
                readimagefile("g_colour.jpg", dx*65, dy*33, dx*83, dy*40);
        }
        if(colour2 == 11){
                readimagefile("v_colour.jpg", dx*65, dy*33, dx*83, dy*40);
        }

        if(colour1 == 7){
                readimagefile("a_colour.jpg", dx*65, dy*25, dx*83, dy*32);
        }
        if(colour1 == 4){
               readimagefile("r_colour.jpg", dx*65, dy*25, dx*83, dy*32);
        }
        if(colour1 == 12){
                readimagefile("g_colour.jpg", dx*65, dy*25, dx*83, dy*32);
        }
        if(colour1 == 11){
                readimagefile("v_colour.jpg", dx*65, dy*25, dx*83, dy*32);
        }
        if(firstPlayer==1){
                readimagefile("p1_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
        }
        if(firstPlayer==2){
                readimagefile("p2_romanian.jpg", dx*54, dy*25, dx*64, dy*42);
        }
}

