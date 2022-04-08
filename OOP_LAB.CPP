#include<iostream>
#include<iostream>

using namespace std;


// //Function prototype//
// void average_rating_calculator();
// void clean_screen();
// void display_movie_names();



// //Function prototype//



  int movie_number;
int rating;
    Movie  objects_array[5];  // making an array that will store the data for 5 arrays 





class Movie 
{
    private :
        string movie_name;
        string movie_pg_rating;
        int movie_rating;
        int movie_year;

        int possible_rating[5];

    public :

        //deafult constructor
        Movie()
        {
            movie_name = "";
            movie_pg_rating = "";
            movie_rating = 0;
            movie_year = 0;
            possible_rating[0] = 0;
        }

        //parameter constructor
        Movie(string movie_name, string movie_pg_rating, int movie_rating, int movie_year)
        {
            this->movie_name = movie_name;
            this->movie_pg_rating = movie_pg_rating;
            this->movie_rating = movie_rating;
            this->movie_year = movie_year;
        }

        //setter functions
        void set_movie_name(string movie_name)
        {
            this->movie_name = movie_name;
        }

        void set_movie_pg_rating(string movie_pg_rating)
        {
            this->movie_pg_rating = movie_pg_rating;
        }

        void set_movie_rating(int movie_rating)
        {
            this->movie_rating = movie_rating;
        }

        void set_movie_year(int movie_year)
        {
            this->movie_year = movie_year;
        }

        //getter functions

        string get_movie_name()
        {
            return movie_name;
        }

        string get_movie_pg_rating()
        {
            return movie_pg_rating;
        }

        int get_movie_rating()
        {
            return movie_rating;
        }

        int get_movie_year()
        {
            return movie_year;
        }

        //display movie name
        void display_movie_name()
        {
            cout << "Movie Name : " << this->movie_name << endl;
        }




        //display function

        void display()
        {
            cout << "Movie Name : " << this->movie_name << endl;
            cout << "Movie PG Rating : " << this->movie_pg_rating << endl;
            cout << "Movie Rating : " << this->movie_rating << endl;
            cout << "Movie Year : " << this->movie_year << endl;
        }



        void getting_data_for_object_array()
        {
             for(int i = 0 ; i < 5 ; i++)
   {
       cout << "Enter Data for Movie " << i+1 << endl;
       cout << endl;
       string movie_name;
         string movie_pg_rating;
            int movie_rating;
            int movie_year;
            cout << "Enter the movie name : ";
            cin >> movie_name;
            cout << "Enter the movie PG rating : ";
            cin >> movie_pg_rating;
            cout << "Enter the movie rating : ";
            cin >> movie_rating;
            cout << "Enter the movie year : ";
            cin >> movie_year;
            objects_array[i].set_movie_name(movie_name);
            objects_array[i].set_movie_pg_rating(movie_pg_rating);
            objects_array[i].set_movie_rating(movie_rating);
            objects_array[i].set_movie_year(movie_year);

    }
        }


    void giving_rating_for_each_movie()
    {
        
    cout << "\nWhich movie do you want to give a rating to ? ";
  

    cin >> movie_number;
    cout << "\nEnter the rating : ";
    cin >> rating;
    objects_array[movie_number-1].set_movie_rating(rating);
    }



    void average_rating_calculator()
{
  if(rating == 1)
    {
        objects_array[movie_number-1].possible_rating[0] = 1;
    }
    else if(rating == 2)
    {
        objects_array[movie_number-1].possible_rating[1] = 2;
    }
    else if(rating == 3)
    {
        objects_array[movie_number-1].possible_rating[2] = 3;
    }
    else if(rating == 4)
    {
        objects_array[movie_number-1].possible_rating[3] = 4;
    }
    else if(rating == 5)
    {
        objects_array[movie_number-1].possible_rating[4] = 5;
    }
    else
    {
        cout << "Invalid Rating";
    }
}


void clean_screen()
{
    system("cls");
}

void display_movie_names()
{
     cout << "\n\n Data for all the movies : \n\n";
    for(int i = 0 ; i < 5 ; i++)
    {
        objects_array[i].display();
        cout << endl;
    }
}
};


int main()
{

   

    Movie.getting_data_for_object_array();

    Movie.clean_screen();

    Movie.display_movie_names();


    Movie.giving_rating_for_each_movie();

    // collecting data for the average rating of the movie
    Movie.average_rating_calculator();

    //displaying the average rating of the movies
    for(int i = 0 ; i < 5 ; i++)
    {
        int average_rating_from_possibleRating_array = 0;
        int temp_sum;
        for(int i =0 ; i<5;i++)
        {
            temp_sum +=  objects_array[i].possible_rating[i];
        }
        average_rating_from_possibleRating_array = temp_sum/5;


        cout << "\n The average rating of the movie " << objects_array[i].get_movie_name() << " is " << average_rating_from_possibleRating_array << endl;
    }
    
    return 0;


}


