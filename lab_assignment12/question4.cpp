#include<iostream>
#include<string>

using namespace std ;

typedef struct book {

    char title[50] ;
    char author[50] ;
    char subject[50] ;
    int book_id ;
} bo ;

bo object1 ;

bo object2 ;

int main()
{


cout << "Enter the value of object1 title ";
cin >> object1.title ;
cout << "Enter the value of object1 author ";
cin >> object1.author ;
cout << "Enter the value of object1 subject ";
cin >> object1.subject ;
cout << "Enter the value of object1 book_id ";
cin >> object1.book_id ;



cout << "Enter the value of object2 title ";
cin >> object2.title ;
cout << "Enter the value of object2 author ";
cin >> object2.author ;
cout << "Enter the value of object2 subject ";
cin >> object2.subject ;
cout << "Enter the value of object2 book_id ";
cin >> object2.book_id ;




cout << "The values of object1 are : " << endl;
cout << "Title : " << object1.title << endl;
cout << "Author : " << object1.author << endl;
cout << "Subject : " << object1.subject << endl;
cout << "Book_id : " << object1.book_id << endl;


cout << "The values of object2 are : " << endl;
cout << "Title : " << object2.title << endl;
cout << "Author : " << object2.author << endl;
cout << "Subject : " << object2.subject << endl;
cout << "Book_id : " << object2.book_id << endl;


}