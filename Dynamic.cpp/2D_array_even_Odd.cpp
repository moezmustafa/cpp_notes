#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std; 
int main()
{
    int arr[6][7];

    //filling the array with random 
    srand(time(0));

    for(int i =0 ; i < 6 ; i ++)
    {
        for (int j = 0 ; j < 7 ; j ++ )
        {
                  arr[i][j]=rand()%20;
        }

    }



    // array printer 
    for(int i =0 ; i < 6 ; i ++)
    {
        for (int j = 0 ; j < 7 ; j ++ )
        {
                  cout << arr[i][j] << setw(3) ;
        }
        cout << endl;

    }

    // even odd algorithm 
int even=0 , odd =0;
    for(int i =0 ; i < 6 ; i ++)
    {
        for (int j = 0 ; j < 7 ; j ++ )
        {
                if(arr[i][j]%2==0){
                    even++;
                }
                else if(arr[i][j]%2!=0)
                {
                    odd++;
                }
        }

    }


    //even odd printer 

    cout << endl;
    cout << endl;

    cout << "The Number of ODD numbers are : " << odd << endl;
    cout << " The Number of EVEN numbers are : " << even << endl;

    cout << endl ;
    cout << endl ;

    
}