#include<iostream>
using namespace std;

//what are class modifiers ? they are the keywords that are used to modify the class
//types of class modifiers : public, private, protected, friend, virtual, static, const, volatile
//public class modifiers are accessible from anywhere in the program
//private class modifiers are accessible only from within the class
//protected class modifiers are accessible from within the class and from within the derived classes
//friend class modifiers are accessible from within the class and from within the derived classes
//virtual class modifiers are used to modify the class
//static class modifiers are used to modify the class   
//const class modifiers are used to modify the class
//volatile class modifiers are used to modify the class



class Public_Modifiers{
//public class modifiers
public:
    int public_variable;
    void public_function(){
        cout << "public function" << endl;
    }

};

class Private_Modifiers{
//private class modifiers
private:
    int private_variable;
    void private_function(){
        cout << "private function" << endl;
    }
//you cannot access the members of the private class modifiers from outside the class
//in order to get access to the members of the private class modifiers you must declare them as friend classes
//friend classes are classes that are part of the class but are not part of the object



};

class Protected_Modifiers{
    //protected class modifiers
protected:
    int protected_variable;
    void protected_function(){
        cout << "protected function" << endl;
    }

};



int main()
{

Public_Modifiers one ;
one.public_function();
one.public_variable = 10;
cout << one.public_variable << endl;

Private_Modifiers two;
two.private_function();
two.private_variable = 10;
}