/*Write a program to create a class with name PayApp,with differentfunctions,
Accept()Function will accept the amount from user.
Validate() Function will check amount(>0).
Discount() Function will calculate 10% Discount on amount.
Display() Function will display final bill on Screen*/

#include<iostream>
using namespace std;
class PayApp
{
   private:float Amount,discount;
   public:void Accept() 
   {
    cout<<"Enter Amount";
    cin>>Amount;
   }
   public:void Validate()
   {
    if(Amount>0)
    {
        cout<<"\n Amount is Acceptable"; /*When we call function from inside another function definition,we call it using function name only. eg:Display()*/
        Discount();
        Display();
    }
    else
    {
        cout<<"\n Amount is not Acceptable";
    }
   }
   public:void Discount()
   {
    discount=Amount/100*10;
    cout<<"\n discount is"<<discount;
   }
   public:void Display()
   {
     cout<<"\n Your Payable Bill is"<<Amount-discount;
   }
};
int main()    /*when we call function from main()function,we call with object. eg:obj.Accept()*/
{
    PayApp obj;
    obj.Accept();
    obj.Validate();
    return 0;
}
