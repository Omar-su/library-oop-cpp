#pragma once  // prevents multiple inclusions

#include <string>
#include <iostream> // needed if printInfo() uses std::cout
#include "Book.h"

class EBook : public Book {
protected:
    double fileSize;

public:
    EBook(std::string title, std::string author, int year, double fileSize);

    void printInfo() const;
};
