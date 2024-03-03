#include "Book.h"
#include <iostream>
int main()
{
    //Tworzy objekt Book uzywając domyślnego konstruktora
    Book book1;
    book1.displayInfo();

    // Tworzy objekt Book używając sparametryzowanego konstruktora
    Book book2("Drakula", "Stoker Bram", 1897);
    book2.displayInfo();

    // Use getters (tytuł, autor, rok wydania)
    std::cout << " Autor book2: " << book2.getAuthor() << "\n";

    return 0;
}
