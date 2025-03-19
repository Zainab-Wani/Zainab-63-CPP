/*write a program to create a class with name UseCount and a function count(),
this function will count total number of users of class
normal variable vs static variable in cpp
IMP POINT:- staic variables can be declare inside a class and initialised outside a class*/
#include<iostream>
using namespace std;
class UserCount
{
    public:static int cnt;//declare  inside a class
    public:UserCount()
    {
        cnt++;
    }
};
int UserCount::cnt =0;//initialise static class outside class
int main()
{
    UserCount obj1,obj2,obj3;
    cout<<"Total number of users are "<<UserCount::cnt;
    return 0;
}

