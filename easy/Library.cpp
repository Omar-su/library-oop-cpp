#include "Library.h"
#include <memory>



void Library::addBook(std::shared_ptr<Book> b) {
    books.push_back(b);
    authors.insert(b->getAuthor());
    lib[b->getTitle()] = b; 
}


std::shared_ptr<Book> Library::findBook(const std::string& title) {
    auto it = lib.find(title);

    if (it != lib.end()) {
        return it->second; 
    } else {
        return nullptr;     
    }
}

void Library::printAllBooks () const {
    for (auto& b : books) {
        std::cout << b->getTitle() << std::endl;
    }
}


void Library::printAuthors () const {
    for (const std::string& a : authors) {
        std::cout << "author: " << a << std::endl;
    }
}