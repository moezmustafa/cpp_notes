
//declare array [4][5] take input from user

#include<iostream>
using namespace std;
int main()
{
    int a[4][5];
    int i, j;
    for (i = 0; i < 4; i++)
    {
    cout << "Enter the vlaue for index("<<i<<")  of the array: " << endl;

        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    //printing the array 
    cout << "The array is: " << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // minimum values in array 
    int min = a[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    cout << "The minimum value in the array is: " << min << endl;
    return 0;
}