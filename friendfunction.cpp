/*Program:- Friend function
In Banking Application where internal data like account number,
balance opr account holder name is required by Audit Function() ?
here we declare Audit function() in Bank class as friend to access its private data outside the class*/
#include<iostream>
using namespace std;
class BankApp
{
    //private data members
    private: int Account_no;
    string Acc_holder_name;
    float Balance;
    //parametrized constructor to initialize account number, name and balance
    public: BankApp(int acno,string name,float bal)
    {
        Account_no=acno;
        Acc_holder_name=name;
        Balance=bal;
    }
    //function to display account details
    public: void show()
    {
        cout<<"Account number is "<<Account_no<<endl;
        cout<<"Account holder name is "<<Acc_holder_name<<endl;
        cout<<"Balance is "<<Balance<<endl;
    }
    friend void Audit(BankApp obj1); // Friend function declaration as object,or reference,or pointer
    // Friend function to access private data of BankApp class
};
void Audit(BankApp obj1) // Friend function definition
{
    cout<<"Auditor Function"<<endl;
    cout<<"Account balance of Account number is "<<obj1.Balance<<"\t"<<obj1.Account_no<<endl;
}
int main()
{
    /*//create object of BankApp class
    BankApp obj1(101,"ABC",10000.00);
    BankApp obj2(102,"BBC",20000.00);
    //call show() function to display account details
    obj1.show();
    obj2.show();
    //call Audit() function to access private data of BankApp class
    Audit(obj1);
    Audit(obj2);*/
    //Array of objects
    BankApp obj[10]={{101,"ABC",10000.00},{102,"BBC",20000.00},{103,"BAC",30000.00},{104,"BDC",40000.00},{105,"BOC",50000.00},
                    {106,"BIC",600000.00},{107,"BVC",70000.00},{108,"BPC",80000.00},{109,"BXC",90000.00},{102,"BBC",100000.00}};  
    for (int i=0;i<10;i++) 
    {
        obj[i].show();
        Audit(obj[i]);
    }
    return 0;
}