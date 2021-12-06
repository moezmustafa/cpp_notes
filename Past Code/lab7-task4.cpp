//declare array[5][20] of integer and fill it with random numbers
#include<iostream>
using namespace std;
int main()
{
    int array[5][20];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 20; j++)
        {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    //print array
    cout << endl;
    cout << "The Array is : " << endl;
    cout<<endl;
    cout<<endl;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 20; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
system("pause");
system("cls");
cout << " \n\nSearch in the Array : " << endl;
cout << endl;
cout << endl;
    int m ,n;
    cout << "Enter the row number : ";
    cin >> m;
    cout << "Enter the column number : ";
    cin >> n;
    cout << "The element at [" << m << "],[" << n << "] is : " << array[m][n] << endl;
    return 0;
}