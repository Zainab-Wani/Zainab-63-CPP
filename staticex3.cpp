/*declaring static variable inside funtion and inside class 
IMP:-static variable inside the class are initialised outside the class*/
#include<iostream>
using namespace std;
class UserCount
{
    public:static int count;//static variable inside a class
    void counter()
    {
        //count=0; initialize inside function
        count++;
    }
    void display()  
    {
        cout<<"Users are: "<<UserCount::count<<endl;
    }
};
int UserCount::count=0;//initialize outside class 
int main()             //using syntax datatype class name scope resolution operator and static variable name
{
    UserCount user1;
    user1.counter();
    user1.display();
    return 0;
}

