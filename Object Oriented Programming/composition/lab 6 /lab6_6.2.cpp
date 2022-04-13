#include<iostream>
#include<string>



class NamePerson
{

    private : 
        std::string first ;
        std::string last ;
    
    public:
        NamePerson()
        {
            first = "empty_one";
            last = "empty_last" ;
        }
        NamePerson(std::string first1, std::string last1 )
        {
            first = first1;
            last = last1;
        }

        void setter()
        {
            std::cout << "Enter your first name :";
            std::cin >> first;
            std::cout << "Enter your last name : ";
            std::cin>>last ; 

        }
        void getter_display()
        {
            std::cout << "Your first name is : " << first << std::endl;
            std::cout << "Your last name is : " << last << std::endl;
        }

        std::string value_first()
        {
            return first ;
        }
        std::string value_last()
        {
            return last ;
        }
};

class datePerson
{

    private : 
        int day ;
        int month ;
        int year ;
    public :
        datePerson()
        {
            day = 0 ;
            month = 0 ;
            year = 0 ;
        }
        datePerson(int day1, int month1, int year1)
        {
            day = day1 ;
            month = month1 ;
            year = year1 ;
        }

        void setter()
        {
            std::cout << "Enter the day : ";
            std::cin >> day;
            std :: cout << "Enter the month : ";
            std :: cin >> month;
            std :: cout << "Enter the year : ";
            std :: cin >> year;
        }
        void getter_display()
        {
            std::cout << "The day is : " << day << std::endl;
            std::cout << "The month is : " << month << std::endl;
            std::cout << "The year is : " << year << std::endl;
        }

        int value_day()
        {
            return day ;
        }
        int value_month()
        {
            return month ;
        }
        int value_year()
        {
            return year ;
        }

};


class BirthdayInfo
{

    private: 
        NamePerson name ;
        datePerson date ;
    public :
        BirthdayInfo()
        {
            name = NamePerson();
            date = datePerson();
        }
        BirthdayInfo(NamePerson name1, datePerson date1)
        {
            name = name1 ;
            date = date1 ;
        }

        void setter()
        {
            name.setter();
            date.setter();
        }
        void getter_display()
        {
            name.getter_display();
            date.getter_display();
        }

        void birthday_info_display()
        {
            std::cout << "The name of the person is : " << name.value_first() << " " << name.value_last() << std::endl;
            std::cout << "The date of the person is : " << date.value_day() << "/" << date.value_month() << "/" << date.value_year() << std::endl;
        }
};

int main()
{

    BirthdayInfo birthday_info_object;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    birthday_info_object.setter();
    birthday_info_object.birthday_info_display();


}