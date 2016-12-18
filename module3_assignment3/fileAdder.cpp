/********************************************************************* 
** Author: Woohyuk Yang 
** Date: January.20th.2016
** Description: CS161 Module3_Assingment3_project3.b_program able to read 
				the file checking it is available and writing a sum of the numbers
				written in th file(previoulsy read) into "sum.txt" file .
**********************************************************************/ 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string filename;
    int sum, num = 0;

    cout << "Enter the name of a filename: ";
    cin >> filename;

    inputFile.open(filename.c_str());

    if(inputFile)
    {
        while(inputFile >> num)
        {
            sum += num;
        }


         outputFile.open("sum.txt");
         outputFile << sum << endl;
    }

    else
    {
        cout << "could not access file. " << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

