/*Program to demonstrate working of Array of Objects(Method1: with the help of paramerized constructor)*/
#include<iostream>
using namespace std;
class Program //class declaration
{
    private : int Regno;float Marks;//private member of class
    public:Program(int R,float M)//paramerized constructior of a class
    {
        Regno=R; //local variable=paramerized variable
        Marks=M;
    }
    public:void Display() //function of class
    {
        cout<<"\n RegNumber= "<<Regno<<"\t"<<"Marks= "<<Marks;
    }
};
int main()
{
    Program obj[3]={{101,450},{102,430},{103,440}};//array of object manaual initialization,best suited for minimum data 
    int i;
    /*for(i=0;i<3;i++)
    {
        //obj[i].Display();//calling of display function with array of objects

    }*/
   obj[2].Display();
}
