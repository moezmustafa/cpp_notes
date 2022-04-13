#include<iostream>
#include<string>


class Point 
{
    private:
        float one ; 
        float two ;
    public : 
        Point()
        {
            one = 0 ;
            two = 0 ;
        }
        Point(float one1 , float two1)
        {
            one = one1 ;
            two = two1 ;
        }
        void setter_point()
        {
            std :: cout << "Enter the value of the (center)  : ";
            std :: cin >> one ;

            std :: cout << "Enter the value of the (radius) : ";
            std :: cin >> two;
        }
        void getter_point()
        {
            std :: cout << "The value of the (center) is : " << one << std :: endl;
            std :: cout << "The value of the (radius) is : " << two << std :: endl;
        }
        float value_vertices1()
        {
            return one ;
        }
        float value_vertices2()
        {
            return two ;
        }
};


class Circle

{
    private : 
        Point obj ;
    public:
        Circle()
        {
            obj = Point() ;
        }
        Circle(Point obj1)
        {
            obj = obj1 ;
        }
        void setter_circle()
        {
            obj.setter_point() ;
        }
        void getter_circle()
        {
            obj.getter_point() ;
        }

        float value_vertices1()
        {
            return obj.value_vertices1() ;
        }
        float value_vertices2()
        {
            return obj.value_vertices2() ;
        }


};

class Cylinder
{
    private : 
        Circle obj ;
        int height ;
    public :
        Cylinder()
        {
            height = 0 ;
            obj = Circle() ;
        }
        Cylinder(float height1)
        {
            height = height1 ;
         
        }

        void setter_cylinder()
        {
            obj.setter_circle() ;
            std :: cout << "Enter the height of the cylinder : ";
            std :: cin >> height ;
        }

        void getter_cylinder()
        {
            obj.getter_circle() ;
            std :: cout << "The height of the cylinder is : " << height << std :: endl;
        }

        float volume_cylinder()
        {
            float volume = 3.14 * obj.value_vertices1() * obj.value_vertices1() * height ;
            return volume ;
        }

       
};


int main()
{

    Cylinder obj ;
    obj.setter_cylinder() ;
    obj.getter_cylinder() ;
    std :: cout << "The volume of the cylinder is : " << obj.volume_cylinder() << std :: endl;
    return 0 ;

   
}

