/*a.create a class with name Bank
b.member variable with name balance
c.parametrized constructor to initialize member variable 
d.display function to display updated balance 
e.function with name NetBanking() //return object
this function will deposit amount and add thgis amount with balance */
//method 1:-Return as Value
//program to demonstrate working of returning object from function.
#include<iostream>
using namespace std;
class Bank 
{
    public:float balance;//balance =500;//class member variable 
    public:Bank(float bal)//parameterized constructor of class
    {                                                    /**/
        balance=bal;//initializing class member variable
    }
    void display()
    {
        cout<<"\n Balance in account is "<<balance;
    }
};
Bank NetBanking(Bank obj1)//function with return type as class.This function object as value
{
    float amt;//bal1;
    cout<<"\n enter the amount to deposit";
    cin>>amt;
    obj1.balance=obj1.balance+amt;//depositing amount in account
    //Bank obj1(obj1.balance+amt)
    //Bank obj1;
    //obj1.balance=obj1.balance+amt;
    return obj1;//returning object of class Bank
}
int main()
{
    Bank obj2(500);
    obj2.display();
    obj2=NetBanking(obj2);//calling fun function from class object1 
    obj2.display();    //as when this  function is called it will return a object
    return 0;          //to store return value , we use class object
}                    
