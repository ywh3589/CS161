/***************************************************************************
**	Author: Spencer Moran
**	Date: 2/16/2016
**	Description: Returns mode for a given array of ints.
****************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> findMode(int numberSet[], int size)
{
	std::vector<int> numSet;
	std::vector<int> result;
	std::vector<int> count;
	int highestCount = 0;
	int current;
	int next;

	//Initialize count and numSet.
	for (current = 0; current < size; current++)
	{
		count.push_back(0);
		numSet.push_back(numberSet[current]);
	}
	std::sort(numSet.begin(), numSet.end());

	//First. Count the times each value appears. Don't worry about mode.
	for (current = 0; current < size; current++)
	{
		for (next = 0; next < size; next++) 
		{
			if (numSet.at(current) == numSet.at(next))
			{		//while looping, if the numbers match, increment the count.
				count.at(current)++;
			}
		}
	}

	//Then, set the highest count.
	for (current = 0; current < size; current++)
	{				//while looping, if the count is higher than the highest count. set it as highest.
		if (count.at(current) > highestCount)
		{
			highestCount = count.at(current);
		}
	}
	//Reset current. Check if first matches highest. If so, push to result vector.
	current = 0; 
	if (count.at(current) == highestCount)
	{
		result.push_back(numSet.at(current));
	}
	//After that, loop and check which values match the highest count.
	//Starting with the second value, check to see if they are duplicates.
	//If not duplicates, push them to the result vector. Else, do nothing.
	for (current = 1; current < size; current++)
	{
		if (count.at(current) == highestCount)
			{
				if (numSet.at(current) != numSet.at(current - 1))
				{
					result.push_back(numSet.at(current));
				}
				else
				{
					
				}
			}
	}


	/********************
	**	DEBUG SECTION  **
	*********************/
	/*
	std::cout << "The highest number of occurences is: " << highestCount << "\n" << std::endl;

	std::cout << "The contents of the result vector are:" << std::endl;

	for (size_t current = 0; current < result.size(); current++) //The signed/unsigned problem was driving me nuts.
	{
		std::cout << result.at(current) << std::endl; //DEBUG
	}
	std::cout << std::endl;
	
	std::cout << "The contents of the count vector are:" << std::endl;
	for (size_t current = 0; current < count.size(); current++) //The signed/unsigned problem was driving me nuts.
	{
		std::cout << count.at(current) << std::endl; //DEBUG
	}
	
	std::cout << "The contents of the numSet vector are:" << std::endl;
	for (size_t current = 0; current < numSet.size(); current++) //The signed/unsigned problem was driving me nuts.
	{
		std::cout << numSet.at(current) << std::endl; //DEBUG
	}*/

	/****************
	**	END DEBUG  **
	*****************/
	return result;
}

/* TEST MAIN
int main()
{
	int set1[10] = { 1,2,2,2,4,5,5,5,9,10 };
	int set2[5] = { 1,2,3,4,5 };
	int set3[3] = { 1,2,2 };
	int set4[3] = { 1,1,2 };
	findMode(set1, 10);
	findMode(set2, 5);
	findMode(set3, 3);
	findMode(set4, 3);
	std::cin.get();
	std::cin.get();
	return 0;
}
*/
