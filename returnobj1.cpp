//method 1:-Return as Value
//program to demonstrate working of returning object from function.
#include<iostream>
using namespace std;
class program
{
    public:int a;//class member variable
    public:program(int b)//parameterized constructor of class
    {
        a=b;//initializing class member variable
    }
    void display()
    {
        cout<<"value of a is "<<a;
    }
};
program Fun()//function with return type as class.This function object as value
{
    //method 1
    program obj1(10);
    return obj1;
}
int main()
{
    program obj2=Fun();//calling fun function from class object1 
    obj2.display();    //as when this  function is called it will return a object
    return 0;          //to store return value , we use class object
}                    