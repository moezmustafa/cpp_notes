#include<iostream>
using namespace std; 


int division(int , int ) ;

int main()
{
    int a , b ; 

    cout << "Enter te value of 1st number : ";
    cin >>a;
    cout << "Enter the value 2nd number :";
    cin >>b;

    cout << "Calling the Division Funciton : Value is : " << division(a,b) <<endl;

}

int division(int x , int y) 
{
    int div = 0 ;

    div = x/y ;

    return div ;
}
