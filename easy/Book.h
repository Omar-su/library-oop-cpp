
#pragma once   // or use include guards

#include <string>
#include <iostream>


class Book {
protected:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string title, std::string author, int year);

    std::string getTitle() const;
    void setTitle(const std::string& t);

    std::string getAuthor() const;
    int getYear() const;

    virtual void printInfo() const;
};
