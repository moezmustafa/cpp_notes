#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{

	// Table printer , from here ;
	int bus[4][5] = { {8,12,9,7,10},{5,7,3,0,4},{20,15,18,21,14},{6,9,5,8,11} };

	char day[5] = { 'M' , 'T' , 'W' , 'T' , 'F' };




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

	// Table Printer code till here ; 

	//////////////////////////////////



	int sum_arr[4] = { 0,0,0,0 };
	for (int row = 0; row < 4; row++)
	{
		for (int col = 5; col > 5; col--)

			sum_arr[col+1] = sum_arr[col+1] + bus[row][col];
	}


  cout << " Sum of the 1st row : " << sum_arr[3] << "\n" << endl;

  for (int i = 0; i < 4; i++)
  {
	  cout << sum_arr[i] << "\t ";
  }



}