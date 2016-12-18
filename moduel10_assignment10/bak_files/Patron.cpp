/********************************************************************* 

** Author: Woohyuk Yang

** Date: March. 10th. 2016

** Description: CS161 Module10_Assignment10_Project_Library Simulator
*********************************************************************/
#include "Patron.hpp"
#include <iostream>

using namespace std;
/********************************************************************* 
** Description:

** The constructor for class "Patron" initializing each elements. 
*********************************************************************/
Patron::Patron(string idn, string n)
{
     idNum = idn;
     name  = n;
     fineAmount = 0;
  

}
/********************************************************************* 
** Description:

** The function "getIdCode" which returns idNum.
********************************************************************/
string Patron::getIdNum()
{
    return idNum;
}
/********************************************************************* 
** Description:

** The function "getName" which returns name.
********************************************************************/
string Patron::getName()
{
    return name;
}
/********************************************************************* 
** Description:

** The function "getCheckedOutBooks" which returns checkedOutBooks.
********************************************************************/
vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;

}
/********************************************************************* 
** Description:

** The function "addBook" which adds a parameter to checkedOutBooks vector.
********************************************************************/
void Patron::addBook(Book* b)
{
    checkedOutBooks.push_back(b);    
}

/********************************************************************* 
** Description:

** The function "removeBook" which removes a parameter from checkedOutBooks vector.
********************************************************************/
void Patron::removeBook(Book* b)
{
   
    for(int i = 0; i < checkedOutBooks.size(); i++)
    {
    
        if(checkedOutBooks[i]->getIdCode() == b->getIdCode());
           {
               checkedOutBooks.erase(checkedOutBooks.begin() + i);
      
           }
   
     
    }

}

/********************************************************************* 
** Description:

** The function "getFineAmount" which returns fineAmount.
********************************************************************/
double Patron::getFineAmount()
{

    return fineAmount;
}

/********************************************************************* 
** Description:

** The function "amendFine" which adds amount which was taken as a parameter to fineAmount.
********************************************************************/
void Patron::amendFine(double amount)
{

   fineAmount += amount;

}
