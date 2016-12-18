#include <iostream>
#include <vector>

using namespace std;

vector<int> findMode(int [], int);
int main()
{
    int arr[] = {1,2,3,4};
    vector<int> test;


    test =  findMode(arr, sizeof(arr) / sizeof(int));
    
    cout << "vector is ";
     for( int i = 0; i < test.size(); i++)
      {    
            cout << test[i] << " ";
      }
    cout << endl; 
   //cout << sizeof(arr) / sizeof(int) << endl;
  //cout << "vector's size" << test.size() << endl;
    return 0;
}
