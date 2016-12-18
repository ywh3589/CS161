/******************************************************************************************************
** Author: Salwa Mohamed
** Date: 02/17/2016
** Description: Function that takes as paramters an array of int and the size of the array and then 
   Calculate the mode and returning them as vector.
*******************************************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//function findMode to find the mode of an array. the function takes the an array and the size of the array as values 

vector<int> findMode(int NumArray[], int size)
{
	sort(NumArray, NumArray + size); // sort the array first

	//number being currently evaluated
	int MaxNum = 0;
	//The frequency of the number being evaluated
	int frequency = 0;

	//finding out the highest frequency
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			frequency++;
		}
		else
		{
			if (NumArray[i] == NumArray[i - 1]) // compare the two numbers in the array 
			{
				frequency++;
			}
			else
			{
				frequency = 1; // result the counter 
			}
		}

		if (frequency > MaxNum)
		{
			MaxNum = frequency;
		}
	}

	vector<int> result; // Loop through the sorted array to find all matces number and put each of them into vector 
	frequency = 0;

	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			frequency++;
		}
		else
		{
			if (NumArray[i] == NumArray[i - 1])
			{
				frequency++;
			}
			else
			{
				frequency = 1;
			}
		}
		if (frequency == MaxNum)
		{
			result.push_back(NumArray[i]);
		}
	}
	return result;
}


