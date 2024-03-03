
#pragma once
#include <string>
//nagłówek dla klasy Book

class Book
{
public:
    /// Konstruktor domyślny.
    Book();

    /// Parametry
    /// <param name="tytul">tytuł książki.</param>
    /// <param name="autor">autor książki.</param>
    /// <param name="rok">rok publikacji książki.</param>
    Book(const std::string& title, const std::string& author, int year);

    /// Destructor.
    ~Book();

    std::string getTitle() const;

    std::string getAuthor() const;

    int getYear() const;

    /// Wyswietla informacje o książce
    void displayInfo() const;

private:
    //zmienne
    std::string title;
    std::string author;
    int publicationYear;
};
