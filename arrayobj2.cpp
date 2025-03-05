/*wrte a program create a class with name Student_Management_System
Store Student Data from Rollno 1to 10
Data include(name ,RollNo,Percentage)
Display All the data in reverse order using Array of Object*/
#include<iostream>
using namespace std;
class Student_Management_System//class declaration
{
    private :string Name ;int Rollno;float Percentage;//private member of class
    public:Student_Management_System(string N,int R,float P)//paramerized constructior of a class
    {
        Name=N;
        Rollno=R; //local variable=paramerized variable
        Percentage=P;
    }
    public:void Display() //function of class
    {
        cout<<"\n Name of student= "<<Name;
        cout<<"\n Rollno of student= "<<Rollno;
        cout<<"\n Percentage of student= "<<Percentage;
    }
};
int main()
{
    Student_Management_System obj[10]={{"ritru",1,50.6},{"soni",2,77.6},{"ayuu",3,55.4},{"simu",4,55.6},{"tipo",5,44.7},{"tina",6,66.6},{"reno",7,55.6},{"yani",8,88.9},{"balo",9,99.9},{"dina",10,55.9}};//array of object manaual initialization,best suited for minimum data 
    int i;
    for(i=0;i<10;i++)
    {
        obj[i].Display();
    }
}
