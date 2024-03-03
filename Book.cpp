
#include "Book.h"
#include <iostream>

// Konstruktor domyslny
Book::Book() : title("Nieznany"), author("Nieznany"), publicationYear(0)
{
    std::cout << "Domyslny Konstruktor Book\n";
}

// Parametry
Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), publicationYear(year)
{
    std::cout << "Konstruktor Book\n";
}

// Destructor
Book::~Book()
{
    std::cout << "Destructor Book " << title << "\n";
}

// Tytuł książki
std::string Book::getTitle() const
{
    return title;
}

// Autor książki
std::string Book::getAuthor() const
{
    return author;
}

// Rok wydania książki
int Book::getYear() const
{
    return publicationYear;
}

// Wyswietlenie informcji o książce
void Book::displayInfo() const
{
    std::cout << "Tytul: " << title << "\n";
    std::cout << "Autor: " << author << "\n";
    std::cout << "Rok publikacji: " << publicationYear << "\n";
}
