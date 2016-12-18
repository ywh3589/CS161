

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>
#include "Patron.hpp"

class Library
{
private:
    std::vector<Book*> holdings;
    std::vector<Patron*> members;
    int currentDate; // stoeres current date represented as an integer num of "days" since the Library object was created.
public:
    Library(); 		// initialize the currentDate to zero. 
    void addBook(Book*);
    void addPatron(Patron*);
    std::string checkOutBook(std::string pID, std::string bID); //
    std::string returnBook(std::string bID);
    std::string requestBook(std::string pID, std::string bID);
    std::string payFine(std::string pID, double payment); // use amendFine to update the Patron's fine. 
    void incrementCurrentDate(); // 10 cents for each overdue Book they have checked out(using amendFine) , on day 22, the book is overdue and fines will be charged. 
    Patron* getPatron(std::string pID);  // same like below (Patron tho)
    Book* getBook(std::string bID);      // returning a pointer to the Book corresponding to the ID parameter, or NULL if no such book is in the holdings.
};

#endif
