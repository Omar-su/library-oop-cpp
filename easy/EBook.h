#pragma once  // prevents multiple inclusions

#include <string>
#include <iostream> 
#include "Book.h"

class EBook : public Book {
private:
    double fileSize;

public:
    EBook(std::string title, std::string author, int year, double fileSize);

    void printInfo() const;
};
