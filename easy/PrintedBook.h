#pragma once  // prevents multiple inclusions

#include <string>
#include <iostream> // needed if printInfo() uses std::cout
#include "Book.h"

class PrintedBook : public Book {
private:
    double weight;

public:
    PrintedBook(std::string title, std::string author, int year, double weight);

    void printInfo() const;
};
