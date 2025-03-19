/*write a program to 
a.create class with name BankAPP,
b.create a parameterized constructor of this class,that initialize class attributes like,
ProductID,ProductName,ProductPrize.
c.implement display function to display all records.
d.update function to change product prize.(update function will not modify original prize of the product)
additionally
e.create array of objects to store product information of 5 different products.
f.accept product id from user and chnage price of that product only.
g.display product not exist,if user enter incorrect product id. */

//method 1.Pass by value
//program to demonstrate working of passing object as parameter to function.
#include<iostream>
using namespace std;
class BankAPP
{
    public:int pid,pamt;string pname;
    public:public:BankAPP(int pid,int pamt,string pname)//parameterized constructor of program class
    {
        
              
    }
    public:void display()
    {
        cout<<"\n value  of a is:"<<a;
    }
};
};