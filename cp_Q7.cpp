//for loop to print ascii alphabet

#include<iostream>
using namespace std;
int main()
{
    int a ;

    cin >> a ;

    cout << char(a);


for (int i ; i<=90 && i>=65 ; i++)
{
    cout << "The input integer here is : " << i <<endl;
    cout << "The ascii value of the character is : " << char(i) <<endl;
}

}