#include <iostream>
using namespace std;
int main()
{
	//upper part 
	for (int i = 0; i < 5; i++)
	{
		//gradual decrease in spaces 
		//spaces loop 
		for (int k = 5; k > i; k--)
		{
			cout << " ";

		}

		// start printer 
		for (int j = 0; j < i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	//lower halve 
	for (int i = 0; i < 5; i++)
	{
		// gradual increase in spaces 
		//spaces loop lower halve 
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}

		// star printer 
		for (int j = 5; j > i; j--)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}


	return 0;
}

/*
   print the upper half of a triangle and with each line you hve to add spaces 
   to do that just add a space above that star printer loop 

   to do that you have to set that loops counter to the max number of spaces that you need 

   but this will only give you are right shifted triangle to make it a perfect pyramid you have to add space
   after the * in the space printer loop as well 
*/