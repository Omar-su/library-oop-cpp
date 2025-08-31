#include "PrintedBook.h"


PrintedBook::PrintedBook(std::string title, std::string author, int year, double weight) : Book(title, author, year), weight(weight) {}

void PrintedBook::printInfo() const{
    std::cout << "Title: " << getTitle()
              << ", Author: " << getAuthor()
              << ", Year: " << getYear()
              << ", Weight: " << weight << " KG"
              << std::endl;
}