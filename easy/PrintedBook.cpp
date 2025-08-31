#include "PrintedBook.h"


PrintedBook::PrintedBook(std::string title, std::string author, int year, double weight) : Book(title, author, year), weight(weight) {}

void PrintedBook::printInfo() const{
    std::cout << "Title: " << title
              << ", Author: " << author
              << ", Year: " << year
              << ", Weight: " << weight << " KG"
              << std::endl;
}