#include <string>
#include <iostream>
#include "Book.h"
#include "EBook.h"



Book::Book(std::string title, std::string author, int year)
    : title(title), author(author), year(year) {}

std::string Book::getTitle() const { return title; }
void Book::setTitle(const std::string& t) { title = t; }

std::string Book::getAuthor() const { return author; }
int Book::getYear() const { return year; }

void Book::printInfo() const {
    std::cout << "Title: " << title 
                << ", Author: " << author 
                << ", Year: " << year << std::endl;
}



int main() {
    Book b("haha", "hihi", 2020);
    Book b2("Hello", "mtoek", 2012);
    EBook eb("eb", "auth", 1999, 2.2221212);
    
    b.printInfo();
    b2.printInfo();
    eb.printInfo();
}
