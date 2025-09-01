#include <string>
#include <iostream>
#include "Book.h"
#include "EBook.h"
#include "PrintedBook.h"
#include <vector>
#include "Library.h"



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
    Library lib;

    auto ebook1 = std::make_shared<EBook>("Title1", "Kafka", 2012, 25);
    auto pbook1 = std::make_shared<PrintedBook>("Title2", "Kafka", 1975, 0.8);

    lib.addBook(ebook1);
    lib.addBook(pbook1);

    std::cout << "\nAll Books:\n";
    lib.printAllBooks();

    std::cout << "\nAuthors:\n";
    lib.printAuthors();

    std::cout << "\nFind book:\n";
    auto found = lib.findBook("C++ Primer");
    if (found) {
        found->printInfo();
    } else {
        std::cout << "Book not found.\n";
    }

    return 0;

}
