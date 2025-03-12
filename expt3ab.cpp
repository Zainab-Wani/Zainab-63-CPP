//3a.To update the details of a student using a member functions of student class.
//3b. To delete the details of a student using functions os student class
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
        cout<<"\n Name= "<<StudentName<<"\t Student ID is "<<StudentID<<"\t Marks are ";
        cout<<Marks;
    }
};
void semester1(Student sem1)
{
    sem1.Marks=400;
    //sem1.per=(sem1.Marks/500)*100;
    cout<<"\nSemester1 Marks= "<<sem1.Marks;//<<"\t Percentage= "<
}
void semester2( Student sem2)
{
    sem2.Marks=450;
    //sem2.per=(sem2.Marks/500)*100;
    cout<<"\n Semester2 Marks= "<<sem2.Marks;//<<"\t Percentage=
}
void update(Student &obj)//PASS BY REFERENCE
{
    cout<<"\n enter your updated information Name, Roll Number";
    cin>>obj.StudentName>>obj.StudentID;
}
/*void del(Student *pobj)//pass by reference
{
    pobj->StudentID=0;
    pobj->StudentID; 
    cout<<"\nno record found :";
}*/
    void Delete( Student *pobj)//pass by pointer
{
    cout<<"\n student record not found";
    pobj->StudentName="";
    pobj->StudentID=0;
    pobj->Marks=0;
}
int main()
{
    Student obj("ABC",101,0);
    //obj.display();
    semester1(obj);
    semester2(obj);
    update(obj);
    obj.display();
    Delete(&obj);
    //del(&obj);
    obj.display(); 

    return 0;
}
    



    