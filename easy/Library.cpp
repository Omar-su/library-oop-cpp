#include "Library.h"



void Library::addBook(Book* b) {
    books.push_back(b);

    authors.insert(b->getAuthor());

    lib[b->getTitle()] = b;
}

Book* Library::findBook (std::string title) {
    auto it = lib.find(title);

    if (it != lib.end()) {
        return it->second; 
    } else {
        return nullptr;     
    }
}

void Library::printAllBooks () const {
    for (Book* b : books)
    {
        b->printInfo();
    }
}


void Library::printAuthors () const {
    for (std::string a : authors)
    {
        std::cout << "author: " << a << std::endl;
    }
}