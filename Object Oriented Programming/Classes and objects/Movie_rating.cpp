#include<iostream>
#include<string>
using namespace std ;

class Movie_rating
{
    private :
        string name ;
        int rating ;
        string pg_rating;
        int average_rating ;
    public :

    //default constructor
        Movie_rating(string name , int rating , string pg_rating)
        {
            this->name = name ;
            this->rating = rating ;
            this->pg_rating = pg_rating ;
            this->average_rating = 0 ;
        }
    //name setter
        void set_name(string name)
        {
            this->name = name ;
        }
    //rating setter
        void set_rating(int rating)
        {
            this->rating = rating ;
        }
    //pg_rating setter
        void set_pg_rating(string pg_rating)
        {
            this->pg_rating = pg_rating ;
        }
    //display function
        void display()
        {
            cout << "Name : " << this->name << endl ;
            cout << "Rating : " << this->rating << endl ;
            cout << "PG Rating : " << this->pg_rating << endl ;
            cout << "Average Rating : " << this->average_rating << endl ;
        }

       

};

int main()
{

//create random movie ratings
    Movie_rating m1("The Shawshank Redemption",9,"R") ;
    Movie_rating m2("The Godfather",9,"R") ;
    Movie_rating m3("The Godfather: Part II",9,"R") ;
    Movie_rating m4("The Dark Knight",9,"R") ;
return 0 ;

}