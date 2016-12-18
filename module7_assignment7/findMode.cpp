
#include <vector>
#include <algorithm>

using namespace std;



vector<int> findMode(int arr[], int size)
{
    vector<int> mode_vector;

    sort(arr, arr + size);

    int frequency[size];
    int mode = 0;
    int mode_temp = 0;
    int highestFre = 0;
    int count = 0;

    for( int i = 0; i < size; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            count++;
            frequency[i] = count;
        }
        else if(arr[i] != arr[i + 1])
        {
            count = 0;
            frequency[i] = 0;
        }

        frequency[size - 1] = 0;
    
    }

    highestFre = frequency[0];

    for( int i = 1; i < size; i++)
    {
        if(highestFre < frequency[i])
        {
            highestFre = frequency[i];

            if(highestFre == frequency[i])
            {
                highestFre = frequency[i];
            }
        else
            {
                highestFre = frequency[i];
                mode = arr[i];
                mode_vector.push_back(mode);
                return mode_vector;
            }
       } 
    } 

    for( int j = 0;  j < size; j++)
    {
        if(highestFre == frequency[j])
        {
            int two_mode = arr[j];
            mode_vector.push_back(two_mode);
        }
    
    }


	sort(mode_vector.begin(), mode_vector.end());
    
	return mode_vector;

}
















        
        
        
    
    



