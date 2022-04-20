#include<iostream>


class Time {

    private : 
        int minute ;
        int hour ;

    public :
        Time()
        {
            minute = 0 ;
            hour = 0 ; 
        }

        Time(int a , int b)
        {
            minute = a ;
            hour = b ;
        }

        void setter()
        {
            std::cout << "Enter the Hours: ";
            std::cin>> hour ;
            std::cout << "Enter the Minutes : ";
            std::cin>> minute ;
        }
       
        
        //overloading the ++ operator 

        // Time operator ++()
        // {
        //     minute++ ;
        //     if(minute == 60)
        //     {
        //         minute = 0 ;
        //         hour++ ;
        //     }
        //     return *this ;
        // }
        // Time operator ++(int)
        // {
        //     minute++ ;
        //     if(minute == 60)
        //     {
        //         minute = 0 ;
        //         hour++ ;
        //     }
        //     return *this ;
        // }

        // //overloading the -- operator

        // Time operator --()
        // {
        //     minute-- ;
        //     if(minute == -1)
        //     {
        //         minute = 59 ;
        //         hour-- ;
        //     }
        //     return *this ;
        // }



        // Time operator --(int)
        // {
        //     minute-- ;
        //     if(minute == -1)
        //     {
        //         minute = 59 ;
        //         hour-- ;
        //     }
        //     return *this ;
        // }
    
        void display(){
            std::cout << "The time is : " << hour << ":" << minute << std::endl ;

     }
        

//Friend function 
//Friend function 
//Friend function 

// friend Time operator ++(Time &a);
// friend Time operator --(Time &a);

// friend Time operator ++(Time &a , int);
// friend Time operator --(Time &a , int);


friend Time operator +(Time&a , Time&b);
friend Time operator > (Time&a , Time&b);

friend bool operator < (Time&a , Time&b);

//Friend function 
//Friend function 
//Friend function 


};




//OVERLOADING USING THE FRIEND FUNCTION 
//OVERLOADING USING THE FRIEND FUNCTION 
//OVERLOADING USING THE FRIEND FUNCTION 
//OVERLOADING USING THE FRIEND FUNCTION 

// Time  operator ++(Time &a)
// {
    
//     a.minute++ ;
//     if(a.minute == 60)
//     {
//         a.minute = 0 ;
//         a.hour++ ;
//     }
//     return a ;
// }


// Time operator --(Time &a)
// {
//     a.minute-- ;
//     if(a.minute == 60)
//     {
//         a.minute = 0 ;
//         a.hour-- ;
//     }

// return a ;
// }


// Time operator --(Time &a , int)
// {
//     a.minute-- ;
//     if(a.minute == -1)
//     {
//         a.minute = 59 ;
//         a.hour-- ;
//     }
// return a ;
// }

// Time operator ++(Time &a , int)
// {
//     a.minute++ ;
// //Main Function
//     if(a.minute == 60)
//     {
//         a.minute = 0 ;
//         a.hour++ ;
//     }
// return a ;
// }


// ///////////////////////////////////////////////////


Time operator +(Time&a , Time&b)
{
    Time c ;
    c.minute = a.minute + b.minute ;
    c.hour = a.hour + b.hour ;
    if(c.minute >= 60)
    {
        c.minute = c.minute - 60 ;
        c.hour++ ;
    }
    return c ;


}

Time operator > (Time&a , Time&b)
{
    if(a.hour > b.hour)
    {
        return a ;
    }
    else if(a.hour == b.hour)
    {
        if(a.minute > b.minute)
        {
            return a ;
        }
        else
        {
            return b;
        }
    }
    else
    {
        return b;
    }
}


bool operator < (Time&a , Time&b)
{
    if(a.hour < b.hour)
    {
        return true ;
    }
    else if(a.hour == b.hour)
    {
        if(a.minute < b.minute)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }
    else
    {
        return false ;
    }
}

//OVERLOADING USING THE FRIEND FUNCTION 
//OVERLOADING USING THE FRIEND FUNCTION 
//OVERLOADING USING THE FRIEND FUNCTION 
//OVERLOADING USING THE FRIEND FUNCTION 







//Main Function
//Main Function
//Main Function 


int main()
{
    Time t1 , t2 , t3 , t4 , t5;

    //calling setter function for t1 and t2
    t1.setter();
    t2.setter();

    // //task number 6

    // t3 = ++t1 ;
    // t3.display() ;

    // t4 = t2++ ;
    // t4.display() ;

    // t1-- ;
    // t1.display() ;


    // t5 = --t2;
    // t5.display();




    // //PART  number 7 a

    std :: cout << std::endl;
    std :: cout << std::endl;
    std :: cout << std::endl;


    t3 = t1 + t2 ;
    t3.display() ;
    //PART  number 7 b

    std :: cout << std::endl;
    std :: cout << std::endl;
    std :: cout << std::endl;

    bool b = t1 < t2 ;
    if(b)
    {
        std::cout << "t1 is less than t2" << std::endl ;
    }
    else
    {
        std::cout << "t1 is greater than t2" << std::endl ;
    }

    std :: cout << std::endl;
    std :: cout << std::endl;
    std :: cout << std::endl;

    //PART  number 7 c


    t4 = t1 > t2 ;
    t4.display();
}
