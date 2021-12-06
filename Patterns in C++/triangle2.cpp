#include<iostream>
using namespace std;
int main()
{

	//inverted simple triangle 

	for (int i = 0; i < 4; i++)
	{
		//cout << "you are in the 2nd for loop";
		cout << " The interation for the outer loops is : i :  " << i << endl;a
		for (int j = 4; j>i ; j--)
		{
			cout << " the interation number is " << j << endl;
			cout << "*";

		}
		cout << endl;
	}

}

/* i    , j =0 ,j=1 , j=2 , j =3 
   i = 0        *     *     *     *
   i = 1		*     *     *
   i = 2	    *     *
   i = 3	    *
*/
   