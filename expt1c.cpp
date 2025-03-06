//To create a course class,its constructor,destructor and member functions.
#include<iostream>
using namespace std;
class Course
{
    public:string CourseName;int CourseID;float CourseCredits;
    public:Course(string Name,int ID,float Credits)
    {
        CourseName= Name;
        CourseID= ID;
        CourseCredits= Credits;
    }
    void display()
    {
        cout<<"\n Course Name is "<<CourseName<<"\t Course Id is "<<CourseID;
        cout<<"Course Credits are "<<CourseCredits;
    }
    void CourseAssignment()
    {
        /*Here accept student percentage,Attendence and assign Course According to
        1.Percentage grater than 80 or Attendence more than 90 Course option all.
        2.Percentage between 70 to 80 or Attendence more than 80 Course option Java.
        3.Percentage between 70 to 80 or Attendence more than 70 Course option CPP.
        4.Percentage between 60 to 70 or Attendence more than 60  Course option PHP.
        5.Percentage between 50 to 60 or Attendence more than 50  Course option C.*/
        float percentage,attendence;
        cout<<"\n Enter Student Percentage: ";
        cin>>percentage;
        cout<<"Enter Student Attendence:";
        cin>>attendence;
        if(percentage>80||attendence>90)
        {
            cout<<"\n Course Option is All Course";
        }
        else if(percentage>=70 && percentage<80||attendence>80)
        {
            cout<<"\n Course Option is Java Course";
        }
        else if(percentage>=60 && percentage<70||attendence>70)
        {
            cout<<"\n Course Option is CPP Course";
        }
        else if(percentage>=60 && percentage<70||attendence>60)
        {
            cout<<"\n Course Option is PHP Course";
        }
        else if(percentage>=50 && percentage<60||attendence>50)
        {
            cout<<"\n Course Option is C Course";
        } 
        else
        {
            cout<<"\n Student is not Eligible for any Course";
        }
    }
    /* float per,Att;
    cout<<"Enter your Percentage and Attendence ";
    cin>>per>>Att;
     then as above*/
     public:~Course()
     {
         cout<<" \nDestruction Invoked";
     }

};
int main()
{
    Course obj[5]={{"C",1,8},{"C++",2,6},{"Java",3,4},{"SQL",4,12},{"PHP",5,16}};
    int i;
    for(i=0;i<5;i++)
    {
        obj[i].display();
    }
    obj[0].CourseAssignment();
    return 0;
}