/*********************************************************************
** Author: David Rider
** Date: 2/16/2016
** Description: This program contains a function which uses array data and size
** as parameters and returns a vector containing the mode of an array
*********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//function prototype
vector<int> findMode(int arrayData[], int size);
//I used a constant variable for the array size
int const SIZE = 10;

//this function takes an array and the size of the array as parameters
//and returns a vector. This function contains for loops that loop through
//the array data and vector data. The function returns the vector.
vector<int> findMode(int arrayData[], int SIZE) {
	int number = arrayData[0];
	int mode = number;
	int count = 1;
	int modeCount = 1;
	int vCount;

	vector <int> results;

	//std::sort(arrayData, arrayData + size);

	/*for (int i = 0; i < size; i++) {
		findMode(arrayData, size);
	};*/
	
	for (int i = 1; i < SIZE; i++) {
		if (arrayData[i] == number) {
			count++;
		}
		else {
			if (modeCount < count) {
				modeCount = count;
				mode = number;
			}
			count = 1;
			number = arrayData[i];
		}
	}
	for (vCount = 0; vCount < SIZE - 1; vCount++) {
		if (count == modeCount) {
			cin >> mode;
			results.push_back(mode);
		}
	}

	std::sort(results.begin(), results.end());

	for (count = 0; count < SIZE - 1; count++) {
		cout << mode << endl;
		return results;
	}
	return results;
}