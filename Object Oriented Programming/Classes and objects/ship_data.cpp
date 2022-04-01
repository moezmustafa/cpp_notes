#include<iostream>
#include<string>
using namespace std ; 

class Ship {
    private :
        string name ;
        string captain ;
        int number ;
        double lattitude ;
        double longitude ;
    public :
        void ship_date_setter()
        {
            
            cout << "\n\n\n Enter the name of ship  : " ;
            cin >> name ;

            cout << "\n\n\n Captain of " << name << "is : " ;
            cin >> captain;

            cout << "\n\n\n Enter the registration of number : " ;
            cin >> number ;
        }
        void location_setter()
        {
            cout << "\n\n\n Enter the value of lattitude : " ;
            cin >> lattitude ;
            cout << "\n\n\n Enter the value of longitude : " ;
            cin >> longitude ;
        }
        void report_generator()
        {
            ship_date_setter();
            location_setter();
        }
        void report_display()
        {
            cout << "\n\n\n The ship named " << name << "has the registration number : "<< number << " \n and it is currently geolocated at \n" ;
            cout << "longitude : " << longitude << endl;
            cout << "lattitude : " << lattitude << endl;
        }
};

int main()
{

    Ship santa_maria , mayflower , black_pearl ;



    santa_maria.report_generator();
    mayflower.report_generator();
    black_pearl.report_generator();



    cout << endl;
    santa_maria.report_display();

    cout << endl;

    mayflower.report_display();

    cout << endl;

    black_pearl.report_display();

    return 0 ;

}