/*Program to demonstrate working of static function in program
1.Static functions belongs to class rather than instance of class.
2.can be accessed using class name e.g Program::func()
3.IMP:-can access static member only, cannot access non static members of class because they require/depend on instance of 
class for memory initialization while non static members can access both static and non static members.*/
#include<iostream>
using namespace std;
class Program
{
    public: int a=5;//non static variable
    static int b;//static variable
    void Fun1()//non static function
    {
        cout<<"\n (Fun1)Value of a is "<<a;//non sttaic function can access both static and non static variables
        cout<<"\n (Fun2)Value of b is "<<b;
    }
    static void Fun2()
    {
        //cout<<"\n (Fun2)Value of a is "<<a;//not able to access non static variable and can access static variable only
        cout<<"\n (Fun2)Value of b is "<<b;
    }
};
int Program::b=1;//initialising static variable outside class
int main ()
{
    Program  obj1;
    obj1.Fun1();//calling of non static function using class object
    Program::Fun2();//calling of static function using class and calling can be done outside main or in  class also
    return 0;
}
