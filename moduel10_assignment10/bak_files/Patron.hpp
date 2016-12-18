
#ifndef PATRON_HPP
#define PATRON_HPP

#include <string>
#include <vector>
#include "Book.hpp"

//class LibraryItem;

class Patron
{
private:
    std::string idNum;
    std::string name;
    std::vector<Book*> checkedOutBooks;
    double fineAmount; // it could be negative.
public:
    Patron(std::string idn, std::string n); // idNum, name, fineAmount to zero.
    std::string getIdNum();
    std::string getName();
    std::vector<Book*> getCheckedOutBooks();
    void addBook(Book* b);    // adds the specified Book to checkedOutBooks.  
    void removeBook(Book* b); // remove the specified Book from checkedOutBooks.
    double getFineAmount();   
    void amendFine(double amount); // a apositive argument increase it, negative decreases it.
};

#endif
