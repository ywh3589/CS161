/********************************************************************* 

** Author: Woohyuk Yang

** Date: March. 10th. 2016

** Description: CS161 Module10_Assignment10_Project_Library Simulator
*********************************************************************/


#include "Book.hpp"
#include <iostream>

using namespace std;

/********************************************************************* 
** Description:

** The constructor for class "Book" initializing each elements. 
*********************************************************************/ 
Book::Book(string idc, string t, string a)
{
    idCode = idc;
    title = t;
    author = a;        
    location = ON_SHELF;
    checkedOutBy = NULL;
    requestedBy = NULL;

  
}

/********************************************************************* 
** Description:

** The function "getCheckOutLength" which gets the length of static constant CHECK_OUT_LENGTH
*********************************************************************/
int Book::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}
/********************************************************************* 
** Description:

** The function "getIdCode" which returns idCode.
********************************************************************/
string Book::getIdCode()
{
    return idCode;
}
/********************************************************************* 
** Description:

** The function "getTitle" which returns title.
********************************************************************/
string Book::getTitle()
{
    return title;
}
/********************************************************************* 
** Description:

** The function "getAuthor" which returns author.
********************************************************************/
string Book::getAuthor()
{
    return author;
}
/********************************************************************* 
** Description:

** The function "getLocation" which returns location.
********************************************************************/
Locale Book::getLocation()
{
    return location;
}
/********************************************************************* 
** Description:

** The function "setLocation" which sets location with a parameter.
********************************************************************/
void Book::setLocation(Locale loc)
{
     location = loc;
}
/********************************************************************* 
** Description:

** The function "getCheckedOutBy" which returns checkedOutBy.
********************************************************************/
Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}
/********************************************************************* 
** Description:

** The function "setCheckedOutBy" which sets checkedOutBy with a parameter.
********************************************************************/

void Book::setCheckedOutBy(Patron* patron)
{
     checkedOutBy = patron;
   
}
/********************************************************************* 
** Description:

** The function "getRequestedBy" which returns requestedBy.
********************************************************************/

Patron* Book::getRequestedBy()
{
    return requestedBy;
}
/********************************************************************* 
** Description:

** The function "setRequestedBy" which sets requestedBy with a parameter.
********************************************************************/

void Book::setRequestedBy(Patron* patron)
{
   
    requestedBy = patron;
}
/********************************************************************* 
** Description:

** The function "getDateCheckedOut" which returns dateCheckedOut.
********************************************************************/

int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}
/********************************************************************* 
** Description:

** The function "setDateCheckedOut" sets dateCheckedOut with a parameter.
********************************************************************/

void Book::setDateCheckedOut(int date)
{
   dateCheckedOut = date;
}


