//To add the details of a student class using a parametrized constructor of a student class.
#include<iostream>
using namespace std;
class Student
{
    public:string StudentName;int StudentID;
    float Marks,per;
    public:Student(string Name,int Id,float Mark)
    {
        StudentName=Name;
        StudentID=Id;
        Marks=Mark;       
    }
    void display()
    {
        cout<<"\nInformation entered by the Student is ";
        cout<<"\nName= "<<StudentName<<"\t Student ID is "<<StudentID<<"\t Marks are ";
        cout<<Marks;
    }
    void Grade()// method 2:int or char grade
    {
        per=Marks/500*100;
        if(per>=80 && per<=100)
        {
            cout<<"\n Your Grade is A";
            //return 1orA
        }
        else if(per>=70 && per<80)
        {
            cout<<"\n Your Grade is B";
            //return 2orB
        }
        else if(per>=60 && per<70)
        {
            cout<<"\n Your Grade is C";
            //return 3orC
        }
        else if(per>=50 && per<60)
        {
            cout<<"\n Your Grade is D";
            //return 4orD
        }
        else
        {
            cout<<"\n Not Qualified.";
        }
    }
    void Club_Assignment() // on the basis of grades
    {
        if(per>=80 && per<=100)
        {
            cout<<"\n You are assigned to sports Club ";
        }
        else if(per>=70 && per<80)
        {
            cout<<"\n You are assigned to  ECO Club";
        }
        else if(per>=60 && per<70)
        {
            cout<<"\n You are assigned to  NCC Club ";
        }
        else if(per>=50 && per<60)
        {
            cout<<"\n You are assigned to  NSS Club ";
        }
        else
        {
            cout<<"\n Not Qualified for any club ";
        }
        /* method 2:Club_Assignment
        int grade=grade()
        if(grade==1,A)
        {
        cout<<"\n You are assigned to sports Club ";
        }
        else if(grade==2,B)
        {
        cout<<"\n You are assigned to  ECO Club";
        }
        else if(grade==3,C)
        {
        cout<<"\n You are assigned to  NCC Club ";
        }
        else if(grade==4,D)
        {
        cout<<"\n You are assigned to  NSS Club ";
        }
        else
        {
        cout<<"\n Not Qualified for any club ";
        }
        */
    }
    public:~Student()
    {
        cout<<" \nDestruction Invoked";
    }
};
int main()
{
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\nInformation of Student with ID "<<obj[i].StudentID;
        obj[i].display();
        obj[i].Grade();
        obj[i].Club_Assignment();
    }
    return 0;
}
