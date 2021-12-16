//declare array[6][7] of integer and fill it with random numbers

#include<iostream>
using namespace std;
int main()
{
    int array[6][7];
    int i, j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<7; j++)
        {
            array[i][j]=rand()%100;
        }
    }

    //print array
    for(i=0; i<6; i++)
    {
        for(j=0; j<7; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
 
     //odd and even numbers
    int odd=0, even=0;
    for(i=0; i<6; i++)
    {
        for(j=0; j<7; j++)
        {
            if(array[i][j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    cout<<"odd numbers: "<<odd<<endl;
    cout<<"even numbers: "<<even<<endl;
    return 0;
}