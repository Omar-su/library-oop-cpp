#pragma once  // prevents multiple inclusions
#include <list>
#include <set>
#include <map>
#include <string>
#include "Book.h"
#include <memory>


class Library {
private:
    std::list<std::shared_ptr<Book>> books;
    std::set<std::string> authors;
    std::map<std::string, std::shared_ptr<Book>> lib;

public:

    void addBook(std::shared_ptr<Book> b);
    std::shared_ptr<Book> findBook(const std::string& title);

    void printAuthors() const;
    void printAllBooks() const;
};