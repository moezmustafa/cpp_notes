#include<iostream>
using namespace std ;

class Date {
    private : 
        int day ;
        int month ;
        int year ;
    public :
        void spacer()
        {
            cout << "\n\n\n\n";
        }
        void get_date()
        {
            cout << "\n\n\n Enter the value of day : " ;
            cin >> day ;
            cout << "\n\n\n Enter the value of month : " ;
            cin >> month ;
            cout << "\n\n\n Enter the value of year : " ;
            cin >> year ;
        }
        void show_date()
        {
            char *str = new char[100] ;
            sprintf(str, "%d/%d/%d", day, month, year) ;
            cout << "\n\n\n The date is : " << str ;
            spacer() ;
        }
};

int main()
{
    Date object  ;
    object.get_date() ;
    object.show_date() ;
    return 0 ;
}