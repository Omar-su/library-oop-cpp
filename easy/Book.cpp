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
    Book b("haha", "hihi", 2020);
    Book b2("Hello", "mtoek", 2012);
    EBook eb("eb", "auth", 1999, 2.2221212);
    PrintedBook pb("pb", "pbauthor", 2010, 3.7);

    std::vector<Book*> books = {&b, &b2, &eb, &pb};
    Book booksArray[] = { b, b2, eb, pb };
    

    for(Book* q : books){
        q -> printInfo();
    }

    Book* booksPtrArray[] = { &b, &b2, &eb, &pb };

    for (Book* book : booksPtrArray) {
        book->printInfo();  // use -> for pointers
    }


    Book b4("Title1", "Author1", 2020);
    Book b3("Title2", "Author2", 1222);

    Library lib;
    lib.addBook(&b3);
    lib.addBook(&b4);
    lib.addBook(&eb);

    lib.printAllBooks();
    lib.printAuthors();

    
    Book* n = lib.findBook(eb.getTitle());

    if (n != nullptr) {
        n->printInfo();   // safe, the book exists
    } else {
        std::cout << "Book not found!" << std::endl;
    }

}
