
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Patron;

// These three locations are mutually exclusive, but note that
// a Book can be on request for a Patron while being checked
// out to another Patron.  In that case the Book's location is
// CHECKED_OUT, and when it is returned, it's location will
// become ON_HOLD_SHELF.
enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Book
{
private:
    std::string idCode;								//key value; unique
    std::string title;                              //it can't be unique
    std::string author;
	// idCode,title, author do not need set methods. initialized directly by a constructor.
    Locale location; 								// on the shelf, on the hold shelf, checked out
    Patron* checkedOutBy;                     
    Patron* requestedBy;                            // if any.
    int dateCheckedOut;								// set to the currentDate of the Library
public:
    static const int CHECK_OUT_LENGTH = 21;
    Book(std::string idc, std::string t, std::string a); // takes an idCode, title and author; checkedOutBy and requestedBy should be initialized to NULL; a new Book should be on the shelf
    int getCheckOutLength();
    std::string getIdCode();
    std::string getTitle();
    std::string getAuthor();
    Locale getLocation();
    void setLocation(Locale);
    Patron* getCheckedOutBy();
    void setCheckedOutBy(Patron*);
    Patron* getRequestedBy();
    void setRequestedBy(Patron*);
    int getDateCheckedOut();
    void setDateCheckedOut(int);
};


#endif
