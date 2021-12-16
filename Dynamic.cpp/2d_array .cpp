#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std; 
int main()
{

srand(time(0));
    int* pointer ; 
int row ,col ;

cout << " Enter the number of the rows : " ;
cin>> row ;

cout << " Enter the number of the rows : " ;
cin>> col ;

    pointer = new int[row][col];

for(int i =0 ; i < row ; i ++)
{
    for (int j = 0 ; j < col ; j ++)
    {
        pointer[i][j] = rand() % 10 ; 
    }
}

for(int i =0 ; i < row ; i ++)
{
    for (int j = 0 ; j < col ; j ++)
    {
        cout << pointer[i][j] << setw(3) ; 
    }
}

system("pause");
}