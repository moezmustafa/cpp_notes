#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int number ;//array input
    int counter = 0;
    cout << ":::::::::::Enter 20 numbers:::::::" << endl;
    cout<< endl;
    for(int i=0;i<20;)
    {
        
        cout << "Enter number " << i+1 << ": ";
        cin >> number;

        
        
            //greater than 10 smaller than 100 , checker
            if(number >10 && number <100)
            {
                cout << "Error Enter number between 10 and 100" << endl;
                break;
            }
            else 
      {
          for (int count =0 ; count != i ; count++)
        {
          //linear search Algorithm
            if (arr[count] == number)
            {
                cout << "Duplicate number found" << endl;
                counter++;
                break;
            }
            else
            {
                arr[i] = number;
                i++;
            }
        }

        }
        
    
    }
system("cls");
    //printing the array
    cout << " The final array is : " << endl;
    cout << endl;
    cout << endl;
    for(int i=0;i<20;i++)
    {
        cout << arr[i] << " ";
    }
}