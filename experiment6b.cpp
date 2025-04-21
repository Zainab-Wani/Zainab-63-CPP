/* To get the details of a course by course_id using a member function of course class. */
#include<iostream>
using namespace std;
class course{
    public: string CourseName; int CourseID,per,att; int CourseCredits, CourseDuration;
    public: course(string Name, int ID, int Credits, int CDurt){
        CourseName=Name;
        CourseID=ID;
        CourseCredits=Credits;
        CourseDuration=CDurt;

    }
    void display(){
        cout<<"\n course name is "<<CourseName;
        cout<<"\n course Credits are "<<CourseCredits;
        cout<<"\n course Duration is "<<CourseDuration<<"\n";
        
    }



int search(){
    int C_id1;
    cout<<"\n Enter Course_ID to get the details of Course ";
    cin>>C_id1;
    return C_id1;
}

};
int main(){
    course obj[5]={{"C",1,8,12},{"C++",2,6,10},{"Java",3,4,12},{"SQL",4,12,20},{"PHP",5,16,22}};
    int i,c_id2;
    for(i=0;i<5;i++){
        cout<<"\n details of Course with Course_Id "<<obj[i].CourseID;
        obj[i].display(); 
           
    }  
  
    c_id2=obj[i].search();
    for(i=0;i<5;i++){
        if(c_id2==obj[i].CourseID){
            cout<<"\nCourse_ID is valid ";
            cout<<"\n course name is "<<obj[i].CourseName;
            cout<<"\n course Credits are "<<obj[i].CourseCredits;
            cout<<"\n course Duration is "<<obj[i].CourseDuration<<"\n";

        }
    }
    return 0;
}