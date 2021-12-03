#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int bus[4][5] = { {8,12,9,7,10},{5,7,3,0,4},{20,15,18,21,14},{6,9,5,8,11} };

	char day[5] = { 'M' , 'T' , 'W' , 'T' , 'F' };

	int sum = 0, j1 = 0;

	int count = 1;




	for (int k = 0; k < 5; k++)
	{
		cout << "\t" << "\t" << day[k] << setw(0);
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "ROUTE no . " << i + 1 << " \t";
		for (int j = 0; j < 5; j++)
		{


			cout << bus[i][j] << setw(2) << "\t\t";


		}

		cout << "\n";

	}


    // PART A of the question 

	for (int k = 0; k < 4; k++)
	{
		sum = sum + bus[k][4];
	}
	cout << "\n\nPart (a) : " << endl;
	cout << "Sum of all passangers on Friday : " << setw(1) << sum << endl;
}