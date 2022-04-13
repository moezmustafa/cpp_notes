#include<iostream>
using namespace std ; 

class Student
{
    private :
        int id ;
        float marks[5];

    public:
        // Student (int a = 10 , float b =0 )
        // {
        //     id = a ;
        //     for(int i = 0 ; i , 5 ; i ++)
        //     {
        //         marks[i] = b;
        //     }
        // }

        void setter()
        {
            cout << "\n Enter the student id : ";
            cin >> id;

            for(int i = 0 ; i , 5 ; i ++)
            {
                cout << "\nEnter marks for subject " << i << ": ";
                cin >>marks[i] ;
            }
        }

        float average()
        {
            float sum ;
            float avg ;

        for(int i = 0 ; i , 5 ; i ++)
            {
                sum += marks[i];
            }

        avg = sum/5;

        return avg;

        }
    
    void printer()
    {
        cout << "The average is : " << average() << endl;
    }
};
int main()
{

    Student obj1;

    obj1.setter();
    obj1.printer();

}
