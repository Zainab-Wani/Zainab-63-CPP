/* 15/04/25
Write a Program
a.To create a base class with name Employee Management System
b. Create a function eith name SalaryCalculate(), this function will 
calculate Employee Salary, accept Basic Salary From User, Number of working days and calculate salary.
c.Create Derived class with name Manager.
d.Override Base Class function. SalaryCalculate() and calculate Manager Salary adding Component like TA 3% of Basic Salary, 
DA 10% of Basic Salary.
e. create a Derived class with name Developer
Override Base Class function, SalaryCalculate() and calculate Developer Salary adding component like TA 5% of Basic Salary,
DA 12% of Basic Salary.
f. Create Derived Class with name Accountant
g.Override Base class function, SalaryCalculate() and calculate Accountant Salary adding Component like TA 4% of Basic Salary, 
DA 9%  of Basic Salary.

*/
#include<iostream>
using namespace std;
class Emloyee_Management_System{
    public: float  BS, WD,Salary, TA,DA;
    public:  virtual void SalaryCalculate(){
    cout<<"\ncalculate the employee salary, accept basic salary from user";
    cin>>BS;
    cout<<"\nthe no of working days";
    cin>>WD;
    cout<<WD;
    cout<<"\nEmployee Salary ";
    Salary=(BS/30)*WD;
    cout<<Salary;
    }
};
class Manager: public Emloyee_Management_System{

    public: void SalaryCalculate() override{
    cout<<"\ncalculate the manager, accept basic salary from user";
    cin>>BS;
    cout<<"\nenter the no of working days";
    cin>>WD;
    cout<<"\nCalculate Manager Salary ";
    Salary=(BS/30)*WD;
    cout<<Salary;
    TA=BS*0.03;
    cout<<"\nTA is "<<TA;
    DA=BS*0.10;
    cout<<"\nDA is "<<DA;
    }

};
class Developer: public Emloyee_Management_System{

    public: void SalaryCalculate() override{
    cout<<"\ncalculate the developer salary, accept basic salary from user";
    cin>>BS;
    cout<<"\nenter the no of working days";
    cin>>WD;
    cout<<"\nCalculate developer Salary ";
    Salary=(BS/30)*WD;
    cout<<Salary;
    TA=BS*0.05;
    cout<<"\nTA is "<<TA;
    DA=BS*0.12;
    cout<<"\nDA is "<<DA;
    }

};
class Accountant: public Emloyee_Management_System{
   
    public: void SalaryCalculate() {

    cout<<"\ncalculate the Accountant ssalary, accept basic salary from user";
    cin>>BS;
    cout<<"\nenter the no of working days";
    cin>>WD;
    Salary=(BS/30)*WD;
    cout<<"\nCalculate Accountant Salary "<<Salary;
    TA=0.04*BS;
    cout<<"\nTA is "<<TA;
    DA=0.09*BS;
    cout<<"\nDA is "<<DA;

    }
};
int main(){
    Accountant obj; 
    obj.SalaryCalculate();
    return 0;
}

