#include<iostream>
using namespace std ;

class Complex 
{
    private : 
        float num1 ;
        float num2 ;
    public:



    //default value caonstructor 
    Complex(float def1 = 10 , float def2 = 12){
        def1 = num1;
        def2 = num2;

    }

        void setter ()
        {
            cout << "Enter the value for Real part for number :";
            cin >> num1 ;

            cout << "\nEnter the value for the Imaginart part for number :";
            cin >> num2;
        }

    Complex addition (Complex obj1 , Complex obj2)
    {
        Complex sum ;
        sum.num1 = obj1.num1 + obj2.num1;
        sum.num2=obj1.num2 + obj2.num2;
        return sum ;
    }

    void printer()
    {
        Complex addition (Complex obj1 , Complex obj2);
        cout << "\n\nThe number is : \n";
        cout << Complex.addition

    }
  


};

int main()
{
    Complex obj1 , obj2 ,obj3;
    
    // obj1.setter();
    // obj2.setter();

    obj3.sum(obj1 , obj2);

    

}