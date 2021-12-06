#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    cout<<"\n\n\nThis is your array " << endl;
    cout<<endl;
    cout<<endl;
    for(int i =0 ; i<10; i++)
    {
      cout<<arr[i]<<" ";
    }

    int num_search;
    cout<<"\n\nEnter the number you want to search ";
    cin>>num_search;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == num_search)
        {
            cout<<"\n\nThe number "<<num_search<<" is found at index "<<i;
            break;
        }
        else if(i == 9)
        {
            cout<<"\n\nThe number "<<num_search<<" is not found in the array";
        }
    }
}