/********************************************************************* 

** Author: Woohyuk Yang

** Date: March. 10th. 2016

** Description: CS161 Module10_Assignment10_Project_Library Simulator
*********************************************************************/
#include "Library.hpp"
#include <iostream>

using namespace std;

/********************************************************************* 
** Description:

** The constructor for class "Library" initializing currentDate to '0'. 
*********************************************************************/
Library::Library()
{
    currentDate = 0;

}


/********************************************************************* 
** Description:

** The function "addBook" which adds a parameter to holdings(books) vector.
********************************************************************/
void Library::addBook(Book* b)
{
    holdings.push_back(b);
  
}


/********************************************************************* 
** Description:

** The function "addPatron" which adds a parameter to members(patrons) vector.
********************************************************************/
void Library::addPatron(Patron* p)
{
    members.push_back(p);
 
}


/********************************************************************* 
** Description:

** The function "checkOutBook" which checking out the book using two parameters taken**

***specification*****************************************************
if the specified book is not in the library, return "book not found"  
if the specified book is already checked out, return "book already checked out"  
if the specified book is on hold by another patrn, return"book on hold by other patron" 
otherwise update the book's checkedOutBy, dateCheckedOut and Location; if the book was on hold for this patron, updatae requestedBy, update the Patron's checkedOutBooks; return "check out successful"
********************************************************************/
string Library::checkOutBook(string pID, string bID)
{

    
    Book* b = getBook(bID);
     
    if(b == NULL)
    {   
        return "book not found";
    }


    Patron* p = getPatron(pID);
    
    if(p == NULL)
    {    
        return "patron not found";
    }

    
    if(b->getLocation() == CHECKED_OUT)
        { 
            if(b->getRequestedBy() != NULL)
            {
                return "book on hold by other patron";
            }
             return "book already checked out";
           
        }
   else if( b->getLocation() == ON_HOLD_SHELF)
        {
           if(b->getRequestedBy() == p)
            {
                b->setRequestedBy(NULL);
                p->addBook(b);
                b->setLocation(CHECKED_OUT);
          b->setDateCheckedOut(currentDate);
         int date =  b->getDateCheckedOut();
                return "check out successful";
            }

            return "book on hold by other patron";
        
         }
    else 
        {
            b->setCheckedOutBy(p);
            b->setDateCheckedOut(currentDate);
            
           b->setLocation(CHECKED_OUT);
          
         
          p->addBook(b);

            return "check out successful";
       

        }
}



/********************************************************************* 
** Description:

** The function "returnBook" which returns a book using book's ID.
***specification*****************************************************
if the specified book is not in the library, return "book not found"   
if the book is not checked out, return "book already in library"      
update the patron's checkedOutBooks; update the Book's location depending on whether another patron has requested it;update the Book's checkedOutBy;return "return successful"
********************************************************************/
string Library::returnBook(string bID)
{
 
    Book* b = getBook(bID);
    
    
    if(b == NULL)
        return "book not found";
    if((b->getLocation()) != CHECKED_OUT)
        return "book already in library";
         for(int i = 0; i < members.size(); i++)
         {
            
            for(int j = 0; j < members[i]->getCheckedOutBooks().size(); j++)
            {
               if(( members[i]->getCheckedOutBooks()[j]->getIdCode()) == b->getIdCode() )
                { 
                    members[i]->removeBook(b); 
                   b->setCheckedOutBy(NULL); 
            if((b->getRequestedBy()) != NULL)
             {
                 b->setLocation(ON_HOLD_SHELF);
         
            }
         
        
        
             b->setCheckedOutBy(NULL);

            b->setLocation(ON_SHELF);
            return "return success";
         
           
            }   
         
         
         }
         }
         
        
        
         
         }
       
             
       





/********************************************************************* 
** Description:

** The function "requestBook" which requests books uisng parameters(books's id, patron's id)
***specification*****************************************************
if the specified Book is not in the libary, return "book not found" 
if the specified Patron is not in the libary, return "patron not found"  
if the specified Book is already requested, return "book already on hold" 
update the Book's requestedBy, if the Book is on the shelf, update its location to on hold; return "request successful"
********************************************************************/
string Library::requestBook(string pID, string bID)
{

    Patron* p = getPatron(pID);   
    Book* b = getBook(bID);

    if(getBook(bID) == NULL)
        return "book not found";
    if(getPatron(pID) == NULL)
        return "patron not found";

    if((b->getRequestedBy()) != NULL)
        return "book already on hold";
    
    b->setRequestedBy(p);

    if( b->getLocation() == ON_SHELF)
    {
        b->setLocation(ON_HOLD_SHELF);
      
    }
 
    return "request successful";


}





/********************************************************************* 
** Description:

** The function "payFine" which allows patrons paying fine for themselves.
********************************************************************/
string Library::payFine(string pID, double payment)
{

    Patron* p = getPatron(pID);
   
    
    if(p == NULL)
        return "Patron not found";

   
    p->amendFine(-payment);
        return "Payment successful";

}










/********************************************************************* 
** Description:

** The function "incrementCurrentDate" which increment a date and charges fine if the books were not returned by due day.
********************************************************************/
void Library::incrementCurrentDate()
{

    currentDate++;

  
    for(int i = 0; i < members.size(); i++)
    {
    
       for(int j = 0; j < (members[i]->getCheckedOutBooks()).size(); j++)
        {
            int date = members[i]->getCheckedOutBooks()[j]->getDateCheckedOut();
       		int due = members[i]->getCheckedOutBooks()[j]->getCheckOutLength();
               if(currentDate > date + due)
                    {
                        double fine = 0;
                        fine += 0.1;
             
                        members[i]->amendFine(fine);
                        
                    
               
                    }
           
         }

    
    
   }

}
/********************************************************************* 
** Description:

** The function "getPatrons" checking out the patron with pID exists as a library member.
********************************************************************/
Patron* Library::getPatron(string pID)
{
    Patron* patron = NULL;
   
        for(int i = 0; i < members.size(); i++)
          {
            if( members[i]->getIdNum() == pID)
                {
                    patron = members[i];
            
                   return patron;
                }
           
           }
          return NULL;
}
/********************************************************************* 
** Description:

** The function "getBook" checking out the book with bID exists at the library.
********************************************************************/
Book* Library::getBook(string bID)
{
    Book* book = NULL;

        
        for(int j = 0; j < holdings.size(); j++)
           {
                if( holdings[j]->getIdCode() == bID)
                {
                    book = holdings[j];
                
                    return book;
                }
       
          }  
          return NULL;
          
}



