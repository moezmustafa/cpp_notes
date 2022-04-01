#include<iostream>

using namespace std ;


class Circumference
{
    private : 
        float radius ;
    public :
        void get_radius()
        {
            cout << "\n\n\n Enter the value of radius : " ;
            cin >> radius ;
        }
        float computecircumference()
        {
            return 2 * 3.14 * radius ;
        }

        float computearea()
        {
            return 3.14 * radius * radius ;
        }

        void print_circumference()
        {
            cout << "\n\n\n The circumference of circle is : " << computecircumference() ;
        }
        
        void print_area()
        {
            cout << "\n\n\n The area of circle is : " << computearea() ;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
        }


};

int main()
{
    Circumference object1 ;

    object1.get_radius() ;
    object1.print_circumference() ;
    object1.print_area() ;

    return 0 ;
}