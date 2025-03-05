/*Analyze and design classes for a student management system.*/
#include<iostream>
using namespace std;

class student_Profile
{
    private : string name; int rollno,age; string departmentname;
    string section ,gender;

    public: void My_profile()
    {
        cout<<"enter the student name=";
        cin>>name;
        cout<<"enter the student rollno=";
        cin>>rollno;
        cout<<"enter the student departmentname=";
        cin>>departmentname;
        cout<<"enter the student section=";
        cin>>section;
        cout<<"enter the student gender=";
        cin>>gender;
        cout<<"enter the student age=";
        cin>>age;
    }
};
class attendence
{
    private:int att;
    public:void attend()
    {
        cout<<"enter the student attendence from 100%= ";
        cin>>att;
        if(att>=75 && att<75)
        {
            cout<<"student is eligible for final exams";
        }
        else
        {
            cout<<"student is not eligible for final exams";
        }
    }      
};
class course_enrolled
{
    private : string coursename,cenr,ccmp;
    int cid,ccd;
    public:void course()
    {
        cout<<"enter the student course name=";
        cin>>coursename;
        cout<<"enter the course ID=";
        cin>>cid;
        cout<<"enter course enrollement date=";
        cin>>cenr;
        cout<<"enter the course completion date=";
        cin>>ccmp;
        cout<<"enter the course credits=";
        cin>>ccd;
    }
};
int main()
{
    student_Profile s1;
    s1.My_profile();
    course_enrolled c1;
    c1.course();
    attendence a1;
    a1.attend();
    return 0;
}