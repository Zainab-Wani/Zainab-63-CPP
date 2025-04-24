/*Program :-This Pointer */
#include<iostream>
using namespace std;
class A
{
    private:int x;//local variable
    public:A(int x)//parameterized constructor
    { 
        this->x=x; //this pointer
    } 
    public:void display()
    {
        cout<<"Value of x is : "<<this->x<<endl;//printing value of local variable
    }
};
int main()
{
    A obj(1);//object creation
    obj.display();//function calling
    return 0;
}