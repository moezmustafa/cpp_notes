#include<iostream>
#include<string>

class numbers
{
    private : 
        int numerator;
        int denumerator ;

    public : 
        numbers()
        {
            numerator = 0 ;
            denumerator = 0;

        }
        numbers(int one , int two )
        {
            numerator = one ;
            denumerator = two ;
        }

        void setter_numbers()
        {
            std :: cout << "Enter the value of the numerator : ";
            std :: cin >> numerator ;

            std :: cout << "Enter the value of the denumerator : ";
            std :: cin >> denumerator;
        }

        int numerator_return()
        {
            return numerator ;
        }
        int denumerator_return()
        {
            return denumerator ;
        }

};

class Rational_maker
{
    private : 
        numbers object1 ; 
    public :
        

}
