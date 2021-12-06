//declare array[5][6] of integer and initialize it with values

#include <iostream>
using namespace std;
int main()
{
    int array[5][6] = { { 1, 2, 3, 4, 5, 6 }, 
    { 7, 8, 9, 10, 11, 12 }, 
    { 13, 14, 15, 16, 17, 18 },
     { 19, 20, 21, 22, 23, 24 },
      { 25, 26, 27, 28, 29, 30 } };
    
   



    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Enter the value for array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
           
        }
        cout << endl;
    }
   
   //print array
   cout << "\n\nThe array is: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}