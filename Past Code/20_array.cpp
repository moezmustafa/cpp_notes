//array of size 20 
//number less than 100 but greater than 10 
//no number should repeat 

#include <iostream>
using namespace std;
int main()
{
    int a[20];
    int number ;
    
    for(int i=0;i<20;i++)
    {
        cout << " Enter number " << i+1 << " : ";
        cin >> number;
        a[i]=number;
        if(a[i]>10 && a[i]<100)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]==a[j]&& number>10&&number<100)
                {
                     cout<<"\nNumber already exist";
                    break;
                    cout << " Number is repeated " << endl;
                    break;
                }
                
            }
        }
        
        
    }

     //display array 
     for(int i =0  ; i<20 ; i++)
     {
         cout<<"\n"<<a[i];
     }
        return 0;
}