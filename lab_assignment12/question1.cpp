#include<iostream>
#include<string>
using namespace std;

typedef struct point {
	int x;
	int y;
} poi;

poi p1;
poi p2;
poi q;


void getinput(poi & p1, poi & p2)
{

	cout << "Enter the value of P1.X";
	cin >> p1.x;
	cout << " Enter the value of P1.Y ";
	cin >> p1.y;

	cout << "Enter the value of P2.X";
	cin >> p2.x;
	cout << " Enter the value of P2.Y ";
	cin >> p2.y;


}

void addpoints(poi p1, poi p2 , poi & q)
{


	q.x = p1.x + p2.x;
	q.y = p1.y + p2.y;

     

}




int main()
{


    system("color 1B") ;

	getinput(p1, p2);  //maine aik dafa call kia hai


	cout << endl;
	cout << endl;
	cout << endl;

	cout << "values in the main function " << endl;

	cout << "values of p1 (" << p1.x << "," << p1.y << ")";
	cout << endl;

	cout << "values of p2 (" << p2.x << "," << p2.y << ")";

	cout << endl;
	addpoints(p1, p2 ,q );

	cout << "The sum point is (" << q.x << "," << q.y << ")";

}



   