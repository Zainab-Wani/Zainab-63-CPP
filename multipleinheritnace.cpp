/*  7/04/25
Multiple Inheritance: multiple child classes and parent classes both*/
#include<iostream>
using namespace std;
class Parent1{
    public: Parent1(){
        cout<<"\nParent 1 class Constructor";
    }
     public: void Fun1(){
        cout<<"\nParent 1 class Function";
    }
};
class Parent2{
    public: Parent2(){
        cout<<"\nParent 2 class constructor";
    }
    public: void Fun2(){
        cout<<"\nParent 2 class Function";
    }
};
class Child : public Parent1, public Parent2  //child class extend multiple parent classes then sq. of parent class will be 
// the sq. called in child class 
{
    public: Child(){
        cout<<"\nChild class Constructor";
    }
    public: void Fun3(){
        cout<<"\nChild Class Function";
    }
};
int main(){
    Child obj;
    obj.Fun1();
    obj.Fun2();
    obj.Fun3();
    return 0;
}