/* Inheritance And Constructor, Destructor           7/04/25
In Inheritance Constructor follows Top to Bottom Approach, first base class constructor will called and then child class constructor.
Destructor follows Bottom Up Approach, first Child Class destructor called and then parent class.*/
#include<iostream>
using namespace std;
class Parent{
    public: Parent() //Base Class Constructor 
    {
        cout<<"\n1 Parent Class Constructor";  
    }
    public: ~Parent() //Base Class destrructor 
    {
        cout<<"\n1 Parent Class destructor";  
    }
    void Fun1(){ //Base Class Function 
        cout<<"\nParent Class Function"; //will call depending upon the sequence of calling 
    }
};
class Child: public Parent //child class extending Parent class 
{
    public: Child() //Derived class 1 constructor 
    {
      cout<<"\n2 Child Class constructor";
    }
    public:~ Child() //Derived class 1 destructor 
    {
      cout<<"\n2 Child Class destructor";
    }
    void Fun2(){ //Derived Class 1 Function
        cout<<"\nChild Class Function";
    }
};
class Grand_Child : public Child //Grand Child class extending child class (to implement multi level inheriance)
{
    public: Grand_Child() //Derived  class 2 constructor 
    {
        cout<<"\n3 Grand_child class constructor";
    }
    public: ~Grand_Child() //Derived  class 2 destructor 
    {
        cout<<"\n3 Grand_child class destructor";
    }
    void Fun3(){// Derived class 2 function 
        cout<<"\nGrand_Child Class Function";

    }
};
int main()
{
    Grand_Child obj;
    obj.Fun1();
    obj.Fun2();
    obj.Fun3();
    return 0;
}