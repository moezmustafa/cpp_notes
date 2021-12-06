#include<iostream>
using namespace std;
int main()
{
    float arr1[10];
    float average;
    float sum_all = 0;
    int total;

    for(int i =0 ; i<10; i++)
    {
        cout<<"Enter the value of arr1["<<i<<"] : ";
        cin>>arr1[i];
    }

    cout << " \n\n The array is : " ;
    for(int i =0 ; i<10; i++)
    {
        cout<<arr1[i]<<" ";
    }

    for(int i =0 ; i<10; i++)
    {
        sum_all = sum_all + arr1[i];

        total = i + 1  ;
    }

average = sum_all / total;

cout << " Total : " << total << endl;
cout << " \n Average is : " << average; 

cout << endl; 

       
}