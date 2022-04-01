#include<iostream>

using namespace std;


class Employee {
    private :
        string name ;
        string designation ;
        int id ;
        double salary ;
        double bonus ;
    public :
        void employee_data_setter()
        {
            
            cout << "\n\n\n Enter the name of employee  : " ;
            cin >> name ;
            
            cout << "\n\n\n Enter the designation of employee  : " ;
            cin >> designation;
            
            cout << "\n\n\n Enter the id of employee  : " ;
            cin >> id;
            
            cout << "\n\n\n Enter the salary of employee  : " ;
            cin >> salary;
            
            cout << "\n\n\n Enter the bonus of employee  : " ;
            cin >> bonus;
        }
        void employee_data_display()
        {
            
            cout << "\n\n\n The employee named " << name << "\ndesignation : "<< designation << endl;
            cout << "id : " << id << endl;
            cout << "salary : " << salary << endl;
            cout << "bonus : " << bonus << endl;
        }
};


int main()
{

    Employee array[3];

    for(int i=0 ; i<3  ; i++){
        cout << endl;
        cout << endl;
        cout << "Enter data for the Employee NO: " << i+1 << endl;
        array[i].employee_data_setter();
        system("cls");
    }

    for(int i=0 ; i<3  ; i++){
        array[i].employee_data_display();
        cout << endl;
    }

}