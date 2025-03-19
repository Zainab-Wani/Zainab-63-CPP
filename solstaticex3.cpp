/*Solution using constructor*/
#include<iostream>
using namespace std;
class UserCount
{
    public:static int count;//static variable inside a class
    UserCount() //constructor of class
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
    UserCount user1,user2;
    user1.display();
   //user2.display();
    return 0;
}

