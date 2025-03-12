//Pass by reference:passing object as parameter to function.
//using different methods
//1.pass by value
//2.pass by reference
//3.pass by pointer
//4.pass by constant reference(no changes apply only read)
#include<iostream>
using namespace std;
class program
{
    public: int a=10;
    public:void display()
    {
        cout<<"\n value of a in a class "<<a;
    }
};
void method1(program obj1)//pass by value (create a seperate copy of a)
{
    obj1.a=2;//any change inside this function will noyt modify original value
    cout<<"\n value of a in method1 "<<obj1.a;
}
void method2(program &obj)//pass by reference
{
    obj.a=3;//change in this function will modify original value
    cout<<"\n value of a in method2 "<<obj.a;
}
void method3(program *pobj)//pass by pointer 
{
    pobj->a=4;//pointer will change original value 
    cout<<"\n value of a in method3 "<<pobj->a;
}
void method4(const program obj)//passby const reference
{
    //obj2.a=5;this will generate error (we can only  read data but not modify)
    cout<<"\n value of a in method4 "<<obj.a;
}
int main()
{
    program obj;
    obj.display();
    method1(obj);
    method2(obj);
    obj.display();
    method3(&obj);
    obj.display();
    method4(obj);
    obj.display();
    return 0;
}

