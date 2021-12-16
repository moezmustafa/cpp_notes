//declare array[5][6] of integer and initialize it with values

#include <iostream>
using namespace std;
int main()
{
    int array[5][6] = 
    
   



    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Enter the value for array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
           
        }
        cout << endl;
    }
   
   
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