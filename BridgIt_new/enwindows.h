
    // FERESTRE IN ENGLEZA - INSERARE IMAGINI
    // ADINA

void menu_english()
{
    // PAGINA DE PORNIRE
        clearviewport();
    readimagefile("menu_english.jpg", 0, 0, windowWidth, windowHeight);

    std::cout<<language;
}

void info_english()
{
    // INFO
    clearviewport();
    readimagefile("info_english.jpg", 0, 0, windowWidth, windowHeight);
}

void language_english()
{

    // LIMBI
    // DACA SELECTEZ LIMBILE DIN MENIU, ATUNCI ARE LOC DELAYUL
    // DACA NU SI VREAU SA COMUT LIMBA, ATUNCI NU ARE LOC NICIUN DELAY, CI SE INSEREAZA IMAGINILE UNA PESTE ALTA SI SE ACTUALIZEAZA CURRENTWINDOW

    if(currentWindow==1 || currentWindow==6 || currentWindow==11)
        clearviewport();

    readimagefile("language_english.jpg", 0, 0, windowWidth, windowHeight);

}

void settings_english()
{
    strcpy(language, "english");

    // SETARI
    if(currentWindow==1 || currentWindow==5)
        clearviewport();

    readimagefile("settings_english.jpg", 0, 0, windowWidth, windowHeight);

}

void aboutsettings_english()
{
    // MAI MULTE DESPRE SETARI
    clearviewport();
    readimagefile("aboutsettings_english.jpg", 0, 0, windowWidth, windowHeight);
}

void buttons_en(){

        // ALEXANDRA

        if(difficulty == 1){
            readimagefile("easy_english.jpg", dx*17, dy*75, dx*34, dy*95);
        }
        if(difficulty == 2){
           readimagefile("medium_english.jpg",dx*17, dy*75, dx*34, dy*95);
        }
        if(difficulty == 3){
             readimagefile("hard_english.jpg", dx*17, dy*75, dx*34, dy*95);
        }

        if(boardsize == 3){
            readimagefile("small_english.jpg", dx*17, dy*44, dx*34, dy*65);
        }

        if(boardsize == 4){
            readimagefile("mediumb_english.jpg", dx*17, dy*44, dx*34, dy*65);
        }

        if(boardsize == 5){
            readimagefile("large_english.jpg", dx*17, dy*44, dx*34, dy*65);
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

        if(firstPlayer == 1){
                readimagefile("p1_english.jpg", dx*54, dy*25, dx*64, dy*42);
        }
        if(firstPlayer == 2){
                readimagefile("p2_english.jpg", dx*54, dy*25, dx*64, dy*42);
        }
}
