#include<iostream>
#include<string>

using namespace std;

typedef struct student {

	int roll;
	char name[50];
	int marks;
}stu;

stu arry[10];



int main()
{
	
    system("color 1B") ;
    
	for (int i = 0; i < 10; i++)
	{
        cout << "Enter the value of roll : ";
        cin >> arry[i].roll;
        cout << "Enter the value of name : ";
        cin >> arry[i].name;
        cout << "Enter the value of marks : ";
        cin >> arry[i].marks;
        cout << endl;
		
	}


cout << "these students have failed : " ;
cout << endl;
cout << endl;
cout << endl;
	for (int i = 0; i < 10; i++)
	{
	    
        if (arry[i].marks < 20)
        {
            cout << arry[i].name ;
            cout << endl;
        }
	}


}