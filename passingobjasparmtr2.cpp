//Pass by reference:passing object as parameter to function.
//using different methods
//1.pass by value
//2.pass by reference
//3.pass by pointer
//4.pass by const reference(no changes apply only read)
//program to create student class,parametrized constructor ,display function and
//semester functions to update marks semester wise
#include<iostream>
using namespace std;
class Result
{
    public:string Name;int RollNo;float Marks;int Credits;//LOCAL VARIABLE
    public:Result(string Name1,int RollNo1,int Credits1,float Marks1)//parameterized constructor of program class
    {
        Name=Name1;
        RollNo=RollNo1;
        Marks=Marks1;
        Credits=Credits1;
    }
    public:void display()
    {
        cout<<"Name= "<<Name<<"\t Roll No= "<<RollNo<<"\t Marks= "<<Marks<<"\t Credits= "<<Credits;
    }
};
void semester1(Result sem1)
{
    sem1.Marks=400;//function calling using access method
    sem1.Credits= sem1.Marks/10;
    cout<<"\n Marks of Semester1 = "<<sem1.Marks;
    cout<<"\n Credits of Semester1 = "<<sem1.Credits;
}
void semester2(Result sem2)
{
    sem2.Marks=350;
    sem2.Credits= sem2.Marks/10;
    cout<<"\n Marks of Semester2 = "<<sem2.Marks;
    cout<<"\n Credits of Semester2 = "<<sem2.Credits;
}
void semester3(Result sem3)
{
    sem3.Marks=450;
    sem3.Credits= sem3.Marks/10;
    cout<<"\n Marks of Semester3 = "<<sem3.Marks;
    cout<<"\n Credits of Semester3 = "<<sem3.Credits;
}
int main()
{
    Result obj("ABC",1,0,0);
    obj.display();//calling function using object
    semester1(obj);
    semester2(obj);
    semester3(obj);
    return 0;
}