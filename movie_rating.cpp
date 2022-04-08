#include<iostream>
#include<string>

class Movie{

    private:
        
    public :
string name;
        string pg_rating;
        int average_rating_array[5];
        Movie()
        {
            name = "";
            pg_rating = "";
            average_rating_array[0] = 0;
        }


        Movie(string name, string pg_rating)
        {
            this->name = name;
            this->pg_rating = pg_rating;
        }

        void get_movie_rating(int rating)

             if(rating == 1)
            {
                this->rating[0] = 1;
                average_rating_array[0] += 1;

            }
            else if(rating == 2)
            {
                this->rating[1] = 2;
                average_rating_array[2] += 1;
            }
            else if(rating == 3)
            {
                this->rating[2] = 3;
                average_rating_array[3] += 1;
            }
            else if(rating == 4)
            {
                this->rating[3] = 4;
                average_rating_array[4] += 1;
            }
            else if(rating == 5)
            {
                this->rating[4] = 5;
                average_rating_array[5] += 1;
            }
            else
            {
                cout<<"Invalid Rating"<<endl;
            }
        }


        void display_basic_data()
        {
            cout<<"Name : "<<this->name<<endl;
            cout<<"PG Rating : "<<this->pg_rating<<endl;

        }

        for(int i =0 ; i < 5 ; i ++)
        {
        cout << "number of" << i+1 << " star ratings : " << average_rating_array[i] << endl;
        }


        //sum of all the ratings
        int sum_of_all_ratings()
        {

            int sum = 0;
            float average_rating;
            for(int i = 0 ; i < 5 ; i++)
            {
                sum += average_rating_array[i];
            }

            average_rating = sum/5;

            return average_rating;
        }


        void display_average_rating()
        {
            cout << "Average Rating : " << sum_of_all_ratings() << endl;
        }




    
};



int main()
{
    
    Movie movie_array[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        cout << "Enter Data for Movie " << i+1 << endl;

        cout << endl;

        cout << "Enter the movie name : ";
        string movie_name;
        cin >> movie_name;
        cout << "Enter the movie PG rating : ";
        string movie_pg_rating;
        cin >> movie_pg_rating;
        Movie.get_movie_rating(movie_name, movie_pg_rating);

    }

    cout << "\n\nAll the data is stored in the object array" << endl;

    for(int i = 0 ; i < 5 ; i++)
    {
        movie_array[i].display_basic_data();
    }

    cout << "\nWhich movie do you want to see the average rating of? " << endl;
    int movie_number;
    cin >> movie_number;
    

    int loop_counter = 0;

do{


   cout << "\nWhich movie do you want to see the average rating of? " << endl;
    int movie_number;
    cin >> movie_number;

    random_rate = rand() % 5 + 1;

    switch(movie_number)
    {
        case 1 :
            Movie.get_movie_rating(random_rate);
            break;
        case 2 :
            Movie.get_movie_rating(random_rate);
            break;
        case 3 :
            Movie.get_movie_rating(random_rate);
            break;
        case 4 :
            Movie.get_movie_rating(random_rate);
            break;
        case 5 :
            Movie.get_movie_rating(random_rate);
            break;
        default :
            cout << "Invalid movie number" << endl;
    }

system("cls");

}while(loop_counter < 10);



system("cls");

cout << "\n\nEvery Movie , it's PG-rating , and it's average rating" << endl;
cout << endl;

for(int i = 0 ; i  < 5 ;  i ++)
{
    movie_array[i].display_basic_data();
    movie_array[i].display_average_rating();
    cout << endl;
}


}