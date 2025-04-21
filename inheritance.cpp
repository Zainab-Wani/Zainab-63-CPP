/* Inheritance : Important Feature of OPP    2/04/25
Reusability is possible in Software Application only because of Inheritance.
In Inheritance we use existing class features into new class but our new class must have atleast 1 new feature. 
Types of Inheritance in cpp
1. Single level Inheritance --java and python  ye dono hi hote in java and python 
2. Multi level Inheritance --java and python
3. Multiple Inheritance 
4. Hybrid Inheritance 
5. Hierarchichal Inheritance 
In inheritance we create instance of child class only
base class known as parent class or super class */

//Program Single Level Inheritance:
#include<iostream>
using namespace std;
class MyApp  //Parent class 
{
public: void message(){
    cout<<"Welcome to My Application";
}
};
class Login : public MyApp //child class (Syntax class child class name sign of Inheritance : public base class)
{
    private : int pin1 =123, pin2;
    public: string Accept(){
        cout<<"\n Enter your pin ";
        cin>>pin2;
        if(pin1==pin2){
            cout<<"\n Login Successful";
            return "yes";
        }
        else{
            cout<<"\n Login Fail";
            return "no";
        }
    }
};
int main(){
    MyApp obj;
    obj.message();
    return 0;
}
