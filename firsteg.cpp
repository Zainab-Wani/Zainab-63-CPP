/*program to demonstrate working of function with no return type and no parameter oops features (nmaespace,class,object,access specifier ,member variables and member functions)*/
#include<iostream> //header file
using namespace std; //namespace
class Program //class
{
    public : void Message() //access specifier , by default access speifier is public 
    {
        cout<<"Hi";
    }
};
int main()
{
    Program obj; // class name creating object
    obj.Message(); //object.class function calling
    return 0;
}