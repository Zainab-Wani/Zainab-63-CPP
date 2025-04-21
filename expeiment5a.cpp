/* To add the details of a course using a parameterized constructor of course class. */
#include<iostream>
using namespace std;
class Course{
    public: string CourseName; int CourseID,per,att; int CourseCredits, CourseDuration;
    public: Course(string Name, int ID, int Credits, int CDurt){
        CourseName=Name;
        CourseID=ID;
        CourseCredits=Credits;
        CourseDuration=CDurt;

    }
    void display(){
        cout<<"\n course name is "<<CourseName<<"\tCourse Id is "<<CourseID;
        cout<<"\n course Credits are "<<CourseCredits<<"\n";
        cout<<"\n course Duration is "<<CourseDuration<<"\n";
        
    }
    public: void CoursAssignment(){
        //Here Accept Student Percentage, Attendence and Assign course according to
        /*1. percentage greater than 80 or Attendence more than 90, course option all
        2. Percentage between 70 to 80 or attendence more than 80 course option java
        3.  Percentage between 60 to 70 or attendence more than 70 course option cpp
        4.Percentage between 60 to 70 or attendence more than 60 course option PHP
        5. Percentage between 50 to 60 or attendence more than 50 course option C */
        cout<<"\nenter the percentage ";
        cin>>per;
        cout<<"\nenter the attendence ";
        cin>>att;
        if(per>80 || att>90){
            cout<<"\nyou can choose all the courses";
        }
        else if(per>=70 && per<=80 || att>80){
            cout<<"\ncourse option is java";
        }
        else if(per>=60 && per<=70 || att>70){
            cout<<"\ncourse option is CPP";
        }
        else if(per>=60 && per<=70 || att>60){
            cout<<"\ncourse option is PHP";
        }
        else if(per>=50 && per<=60 || att>50){
            cout<<"\ncourse option is C";
        }
        else{
            cout<<"\nstudent perc not acccpeted\n";
        }



    }

};
int main(){
    Course obj[5]={{"C",1,8,12},{"C++",2,6,10},{"Java",3,4,12},{"SQL",4,12,20},{"PHP",5,16,22}};
    int i;
    for(i=0;i<5;i++){
        obj[i].display();
        //obj[i].CoursAssignment();
    }
    for(i=0;i<5;i++){
       cout<<"\ncourse options according to  the student percenatage and attendence!!";
        obj[i].CoursAssignment();
    }
    return 0;
}