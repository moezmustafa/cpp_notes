#include<iostream>
using namespace std;
int main(){
    
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};
    int arr3[5] = {1,2,3,4,5};


for (int i = 0; i < 5; i++)
{
    cout << "Enter the values for the "<<i<<"th element of the array 1 : ";
    cin >> arr1[i];
}
for (int i = 0; i < 5; i++)
{
    cout << "Enter the values for the "<<i<<"th element of the array 2 : ";
    cin >> arr2[i];
}

cout << " Array 1 is : ";
for (int i = 0; i < 5; i++)
{
    
    cout << arr1[i] << " ";
}

cout << " \n\n Array 2 is : ";
for (int i=0; i < 5; i++){
    cout << arr2[i] << " ";
}

    for(int i=0 ; i<5 ; i++){
        arr3[i] = arr1[i] + arr2[i];
    }
cout << " \n \n The sum of the Array 1 and Array 2 : " << endl;
    for(int i=0 ; i<5 ; i++){
        cout << arr3[i] << " ";
    }
}