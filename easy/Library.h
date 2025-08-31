#pragma once  // prevents multiple inclusions
#include <list>
#include <set>
#include <map>
#include <string>
#include "Book.h"


class Library {
private:
    std::list<Book*> books;
    std::set<std::string> authors;
    std::map<std::string, Book*> lib;

public:

    void addBook(Book* b);
    Book* findBook(std::string title);

    void printAuthors() const;
    void printAllBooks() const;
};