#include<iostream>
using namespace std;
int main()
{
    int number ; 
    int new_number ;
    int final = 0 ;
    int og_number;

  

    cout << "Enter a number : " ;
    cin >> number ;

  og_number = number ;q
    cout << "The number you entered is : " << number << endl; 

    for ( ; number > 0 ;)
    {
        new_number = number % 10 ;
     
     cout << "The new number is : " << new_number << endl;

        number = number / 10 ;

        cout << "The new number is : " << number << endl;

        final = final + (new_number*new_number*new_number) ;

        cout << "The final number is : " << final << endl;

    }
    cout << " outside final : " << final << endl;
    cout << " outside og_number : " << og_number << endl;

    if (final == og_number)
    {
        cout << "The number is a armstrong number" << endl;
    }
    else
    {
        cout << "The number is not a armstrong number" << endl;
    }
}
