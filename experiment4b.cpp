
/* To get the results of students by rollno using a member function of student class. */
#include<iostream>
using namespace std;
class Student{
public : string StudentName ,CourseName; int StudentRollNo;
float Marks,per;
public: Student(string Name , int Roll,float Mark, string CN  ){
    StudentName = Name;
    StudentRollNo = Roll;
Marks = Mark;
CourseName= CN;
}
void Display(){
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
    cout<<"\nCourse Name: "<<CourseName;
}
void Grade(){
    per=Marks/500*100;
    if(per>=80 && per <=100){
        cout<<"\n Your Result Grade is A";
       
    }
   else if(per>=70 && per <80){
        cout<<"\n Your Result Grade is B";
        
    }
    else if(per>=60 && per <70){
        cout<<"\n Your Result Grade is C";
      
    }
    else if(per>=50 && per <60){
        cout<<"\n Your Result Grade is D";
        
    }else{
    cout<<"\n Not Qualified. ";
    }
}


int search(){
    int Roll1;
    cout<<"\n Enter  Student RollNo to get the results of students ";
    cin>>Roll1;
    return Roll1;
}

};
int main(){
    Student obj[4]={{"Ram",101,450,"Physics"},{"Sita",102,480,"Maths"},{"Gita",103,250,"Science"},{"Raman",104,300,"IT"}};
    int i,Roll2;
    for(i=0;i<4;i++){
        cout<<"\n Information of Student with RollNo "<<obj[i].StudentRollNo;
        obj[i].Display(); 
           
    }  
  
    Roll2=obj[i].search();
    for(i=0;i<4;i++){
        if(Roll2==obj[i].StudentRollNo){
            cout<<"\nStudent RollNo is valid ";
            cout<<"\nStudent Name is "<<obj[i].StudentName;
            cout<<"\nStudent Marks= "<<obj[i].Marks;
            obj[i].Grade(); 

        }
    }
    return 0;
}
