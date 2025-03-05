//method 1.Pass by value
//program to demonstrate working of passing object as parameter to function.
#include<iostream>
using namespace std;
class program
{
    public:int a;
    public:program(int b)//parameterized constructor of program class
    {
        a=b;
    }
    public:void display()
    {
        cout<<"\n value  of a is:"<<a;
    }
};
void modify(program obj2)//modify function accepts obj2 as parameter
{
    obj2.a=10; //any change inside this function will not modify original value of a this 
                //will create separate instance of program class
    cout<<"\n latest value  of a is:"<<obj2.a;
};
int main()
{
    program obj1(9);//original object of class with initialisation of parameterizd constructor.
    obj1.display();
    modify(obj1);//calling modify function by obj1
    obj1.display();
}