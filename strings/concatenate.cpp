#include<iostream>
#include<string>
using namespace std; 
void printCharArray(const char[],int);

int main()
{
char first = 'C';
char second = 'P';

cout << first << second << endl;

char courseTitle1[9] = { 'C','o', 'm', 'p', 'u', 't','e','r' };
char courseTitle2[12] = { 'P','r', 'o', 'g', 'r', 'a','m','m','i','n','g','\0' };
char myName[] = "Muhammad Izaan Ali";

char courseTitle[] = "Computer Programming 1B";
const char* topicForToday = "We are uderstanding strings";

printCharArray(topicForToday, strlen(topicForToday));
cout << topicForToday << endl;
cout << courseTitle << endl;

printCharArray(courseTitle1,8);
cout << courseTitle2 << endl;

//cout << myName << endl;

printCharArray(myName, 19);

system("pause");
}

