
    // WINDOWS IN ENGLISH
    // ADINA

void menu_english()
{

    // WINDOW FOR MAIN MENU

    clearviewport();
    readimagefile("menu_english.jpg", 0, 0, windowWidth, windowHeight);
}

void info_english()
{

    // WINDOW FOR INFO

    clearviewport();
    readimagefile("info_english.jpg", 0, 0, windowWidth, windowHeight);

}

void language_english()
{

    // WINDOWS FOR LANGUAGES

    clearviewport();
    readimagefile("language_english.jpg", 0, 0, windowWidth, windowHeight);
}

void settings_english()
{

    // WINDOW FOR SETTINGS

    clearviewport();
    readimagefile("settings_english.jpg", 0, 0, windowWidth, windowHeight);
    buttons();
}

void aboutsettings_english()
{

    // WINDOW FOR MORE ABOUT SETTINGS

    setbkcolor(WHITE);
    clearviewport();
    readimagefile("aboutsettings_english.jpg", 0, 0, windowWidth, windowHeight);

}
