//non-repeating elements in an array

#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,k,flag=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Non-repeating element is: "<<a[i]<<endl;
        }
        flag=0;
    }
    return 0;
}