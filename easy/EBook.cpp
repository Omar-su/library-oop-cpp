#include <string>
#include "EBook.h"

EBook::EBook(std::string title, std::string author, int year, double fs)
    : Book(title, author, year), fileSize(fs) {}

void EBook::printInfo() const {
    std::cout << "Title: " << getTitle()
              << ", Author: " << getAuthor()
              << ", Year: " << getYear()
              << ", File size: " << fileSize << " MB"
              << std::endl;
}