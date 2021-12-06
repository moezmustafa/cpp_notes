#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
      cout << "\n\n\n";
      const int n = 5 ;
   int arr[n];

srand(time(0));
//array filler 
   for (int i = 0 ; i < n ; i++)
   {
       arr[i]=rand( ) %100;
   }
//printer 
for(int i =0;i<n;i++)
{
 cout << arr[i] << "  ";
}
    cout << "\n\n\n";


//sorting algorithm

    for(int i =0; i<n-1;i++)
    {
        for(int j =i+1 ;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp ; 
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }


    // sorted array is 

    cout << "\n sorted array is : \n " ;
    for (int i =0 ; i < 5 ; i ++)
    {
        cout << arr[i] << " ";
    }
return 0;
}