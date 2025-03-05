/*Analyze and design classes for a student management system.*/
#include<iostream>
using namespace std;
class Student_login
{
    public:Student_login()
    {
        cout<<"welcome to MIET Jammu";
    }
    public:~Student_login()
    {
        cout<<"succefully loaded the login page";
    }
    
};
class student_Profile
{
    private : string name,section; int regno; string departmentname;
    public:void Profile()
    {
    cout<<"\n enter the student regno=";
    cin>>regno;
     if(regno>=60 && regno<=120)
     {
       cout<<"student is enrolled in the college";
       cout<<"\nenter the student name=";
       //cin>>name;
       getline(cin,name);
       cout<<"enter the student departmentname=";
       //cin>>departmentname;
       getline(cin,departmentname);
       cout<<"\nenter the student section=";
       //cin>>section;
       getline(cin,section);
     }
     else 
     {
        cout<<"student is not enrolled in the college";
     }
}
void display()
{
    cout<<"information enter by the student is";
    cout<<"\nstudent name="<<name;
    cout<<"\nstudent regno="<<regno;
    cout<<"\nstudent departmentname="<<departmentname;
    cout<<"\nstudent section="<<section;
}
    private:int att;
    public:void attend()
    {
        cout<<"enter the student attendence from 100%= ";
        cin>>att;
        if(att>=75 && att<100)
        {
            cout<<"student is eligible for final exams";
        }
        else
        {
            cout<<"student is not eligible for final exams";
        }
    }      
    private : string coursename,cenr,ccmp;
    int cid,ccd;
    public:void course()
    {
        cout<<"\nenter the student course name=";
        //cin>>coursename;
        getline(cin,coursename);
        cout<<"\nenter the course ID=";
        cin>>cid;
        cout<<"\nenter course enrollement date=";
        //cin>>cenr;
        getline(cin,cenr);
        cout<<"\nenter the course completion date=";
        //cin>>ccmp;
        getline(cin,ccmp);
        cout<<"\nenter the course credits=";
        cin>>ccd;
    }
    void display1()
    {
        cout<<"\ncourse enrollement of the student is";
        cout<<"\ncoursename="<<coursename;
        cout<<"\ncourse ID="<<cid;
        cout<<"\ncourse enrollemnent date= "<<cenr;
        cout<<"\ncourse completion date= "<<ccmp;
        cout<<"\ncourse credits= "<<ccd;
    }
    public :~student_Profile()
    {
        cout<<"sucessfully login to student profile";
    }
};
int main()
{
    Student_login obj;
    student_Profile s1;
    s1.Profile();
    s1.display();
    s1.course();
    s1.display1();
    s1.attend();
    return 0;
}