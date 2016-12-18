/********************************************************************* 
** Author: Woohyuk Yang 
** Date: January.7th.2016
** Description: CS161 Module1_Assingment1_program able to type someone's 
                favorite animal and printing out the kind of aniaml
**********************************************************************/ 
#include <iostream>
#include <string>

//a simple example program
int main()
{
  std::string faveAnimal;
  std::cout << "Please enter your favorite animal." << std::endl;
  std::cin >> faveAnimal;
  std::cout << "Your favorite animal is the " << faveAnimal;
  std::cout << "." << std::endl;

  return 0;
}

