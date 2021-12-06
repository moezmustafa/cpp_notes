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

    // PART B of the question 

	int sum2 = 0;

	int route = 0;

	cout << " \n\nEnter the Route Number : ";
	cin >> route;

	for (int r = 0; r < 5; r++)
	{
		sum2 = sum2 + bus[route - 1][r];
	}
	cout << "\n\nPart (b) : " << endl;
	cout << "Sum of all passangers on Route : " << route << " =" << setw(3) << sum2 << endl;

}