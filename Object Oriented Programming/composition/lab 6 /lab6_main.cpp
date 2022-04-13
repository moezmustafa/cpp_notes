#include<iostream>
#include<string>

#include <cmath>



class Point
{
    private:
        float vertices1;
        float vertices2;
        float vertices3;
    public :
        Point()
        {
            vertices1 = 0 ;
            vertices2 = 0 ; 
            vertices3 = 0 ;

        }

        Point(float one , float two , float three)
        {
            one = vertices1 ;
            two = vertices2 ;
            three = vertices3 ;

        }

        void setter_point()
        {
            std :: cout << "Enter the value of the vertice 1  : ";
            std :: cin >> vertices1 ;

            std :: cout << "Enter the value of the vertice 2  : ";
            std :: cin >> vertices2;

            std :: cout << "Enter the value of the vertice 3  : ";
            std :: cin >> vertices3 ;
        }


        void getter_point()
        {
            std :: cout << "The value of the vertice 1 is : " << vertices1 << std :: endl;
            std :: cout << "The value of the vertice 2 is : " << vertices2 << std :: endl;
            std :: cout << "The value of the vertice 3 is : " << vertices3 << std :: endl;
        }

        float value_vertices1()
        {
            return vertices1 ;
        }
        float value_vertices2()
        {
            return vertices2 ;
        }
        float value_vertices3()
        {
            return vertices3 ;
        }


};

class Triangle
{
    private : 
        Point vertice_object1;
    public : 
        void setter_triangle()
        {
            vertice_object1.setter_point();
        }

        void getter_triangle()
        {
            vertice_object1.getter_point();
        }

        float area()
        {
            float area_of_triangle ;

            float a , b , c , s ;

            a = vertice_object1.value_vertices1();
            b = vertice_object1.value_vertices2();
            c = vertice_object1.value_vertices3();


            s = (a + b + c) / 2 ;

            area_of_triangle = sqrt(s * (s - a) * (s - b) * (s - c));

            return area_of_triangle ;
        }

};

int main()
{

    Triangle triangle_object;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    triangle_object.setter_triangle();

    std :: cout << std :: endl;
    std :: cout << std :: endl;
    std :: cout << std :: endl;

    triangle_object.getter_triangle();
    
    std :: cout << std :: endl;
    std :: cout << std :: endl;
    std :: cout << std :: endl;

    std :: cout << "The area of the triangle is : " << triangle_object.area() << std :: endl;

    return 0;

}
