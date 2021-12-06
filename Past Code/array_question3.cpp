#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int bus[4][5] = { {8,12,9,7,10},{5,7,3,0,4},{20,15,18,21,14},{6,9,5,8,11} };

	char day[5] = { 'M' , 'T' , 'W' , 'T' , 'F' };

	//int sum = 0, j1 = 0;

	//int count = 1;




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

       //sum of greatest row 

	   // part 3 of the question

	   int sum1 = 0;
	   int sum2 =0 ;
	   int sum3 = 0;
	   int sum4 = 0;

//for  row 1 col 5 
int sum=0;


int sum_arr[4] = {0,0,0,0};
	for (int k = 0; k < 5; k++)
	{
		for (int i = 0; i < 4; i++)
		{
			sum = sum + bus[i][k];
			
		}
		sum_arr[k] = sum;
		sum = 0;
		//sum_arr[k] = sum + bus[0][k];
	}

	

	

	for (int row =0 ; row < 4 ; row++)
	{
		cout << "\n\n" << sum_arr[row] << setw(3);
	}

}