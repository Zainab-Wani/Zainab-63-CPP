/* To search student details by roll no using a member function of student class. */
#include<iostream>
using namespace std;

class Student{
public : string StudentName, CourseName; int StudentRoll;
float Marks,per;
public: Student(string Name , int Roll,float Mark,string CN ){
    StudentName = Name;
    StudentRoll = Roll;
    CourseName= CN;
Marks = Mark;
}
void Display(){
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
    cout<<"\nCourse Name: "<<CourseName;
}

int search(){
    int roll1;
    cout<<"\n Enter the St RollNo to search student details ";
    cin>>roll1;
    return roll1;
}
};
int main(){
    Student obj[4]={{"Ram",101,450,"Physics"},{"Sita",102,350,"Maths"},{"Gita",103,250,"Science"},{"Raman",104,300,"IT"}};
    int i,roll2;
    for(i=0;i<4;i++){
        cout<<"\n Information of Student with RollNo "<<obj[i].StudentRoll;
        obj[i].Display(); 
        
    }   
    
    roll2=obj[i].search();
    for(i=0;i<4;i++){
    if(roll2==obj[i].StudentRoll){
            cout<<"\nStudent RollNo is valid ";
            cout<<"\nStudent Name is : "<<obj[i].StudentName;
            cout<<"\nStudent Marks= "<<obj[i].Marks;
            cout<<"\nThe course in which Student enrolled : "<<obj[i].CourseName;
        }
    }
    return 0;
    
}