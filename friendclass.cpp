/*program:- Friend class
In Banking App , we create a friend class admin class as friend class of Banking App class 
which can access internal data of this class and can modify*/
#include<iostream>
using namespace std;
class Admin;//forward declaration
class BankApp
{
    private: int Account_Number;
    string username;
    int password;
    float balance;
    //parameterized constructor of class
    public:
    BankApp(int Number,string user,int pass,float bal)
    {
        Account_Number=Number;
        username=user;
        password=pass;
        balance=bal;
    }
    //display function
    void display()
    {
        cout<<"\nAccount Number : "<<Account_Number<<endl;
        cout<<"\nUsername : "<<username<<endl;
        cout<<"\nPassword : "<<password<<endl;
        cout<<"\nBalance is "<<balance<<endl;
    }
    //friend function
    friend class Admin;//declaration freind class admin inside this class
};
class Admin
{
    private: int p=1111;
    public: void Reset_Pass(BankApp& obj)
    {
        obj.password=p;
    }
};
int main()
{
    BankApp obj1(101,"User1",1111,10000);
    obj1.display();
    cout<<"After Password resetting";
    Admin obj2;
    obj2.Reset_Pass(obj1);
    obj1.display();
    return 0;
}