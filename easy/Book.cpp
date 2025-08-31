#include <string>
#include <iostream>


class Book {
protected:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string title, std::string author, int year)
        : title(title), author(author), year(year) {}

    std::string getTitle() const { return title; }
    void setTitle(const std::string& t) { title = t; }

    std::string getAuthor() const { return author; }
    int getYear() const { return year; }

    void printInfo() const {
        std::cout << "Title: " << title 
                  << ", Author: " << author 
                  << ", Year: " << year << std::endl;
    }
};


int main() {
    Book b("haha", "hihi", 2020);
    Book b2("Hello", "mtoek", 2012);

    b.printInfo();
    b2.printInfo();
}
