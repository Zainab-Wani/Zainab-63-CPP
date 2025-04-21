/* 15/04/25
Function Overriding:- Update Base Class function in derived class.
Basic Program of Dynamic Polymorphism
*/
#include<iostream>
using namespace std;
class Base{
    public: Base(){
        cout<<"\nBase Class Constructor";
    }
    public: ~Base(){
        cout<<"\nBase Class Destructor";
    }
    virtual void Fun1() //we are declaring base class function as virtual to instruct compiler to override this function at run time.
    {
    cout<<"\nBase Class Function";
    }
};
class Derived: public Base {
    public: Derived(){
        cout<<"\nDerived Class Constructor";
    }
    public: ~Derived(){
        cout<<"\nDerived Class Destructor";
    }
    public: void Fun1() override{//this keyword is optional not mandatory here but it is a good practice to use this keyword so that compiler 
    //understands that this function overriding base class function.
    
    cout<<"\nDerived Class Function";
    }
};
int main(){
    Derived obj;
    obj.Fun1();
    return 0;
}