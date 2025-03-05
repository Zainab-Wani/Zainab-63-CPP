/*program to demonstrate working and execution sequence of constructor, destructor and other functions*/
#include<iostream>
using namespace std;
class program //class
{
    private: int a;
    public: void fun1()
    {
        cout<<"\n function1";
    }
    public: void fun2()
    {
        cout<<"\n function2";
    }
    public :program() // default constructor 
    {
        a=5;
        cout<<"\n a="<<a;

    }
    public: ~program()
    {
        cout<<"\n destruction called";
    }
};
int main()
{
    program obj; // here class object calling both constructor and destructor 
    obj.fun2();
    obj.fun1();
    return 0;
}