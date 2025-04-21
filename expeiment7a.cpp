/* 09/04/25
Exp:- 7a To implement Inheritance for a UG Course Class, PG Course Class and Diploma Course Class.
Using Multiple Inheritance 
Write a Program to 
a. Create a base class with name UG Course Class,
b. Create a function with name SubjectList(), here in this function display a list of Subjects and ask user to select a
 choice from given list.
c. Create a funciton with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. Create a derived class with name PG Course Class,
e. Create a funciton with name SpecializationList(), here in this function display a list of subjects and ask user to 
 select a choice from given list.
f. Create a funciton with name MarksObtained(), here in this function ask user to enter marks obtained in the selected course.
d. create a derived class with name Result Class,
e. Create a funciton with name SelectionCriteria(), here in this funciton display a Selection criteria for the post.
1. Post1: Software Develoeper :
5 points for percentage more than 80 percent in UG
5 points for percentage more than 80 percent in PG
5 points for percentage more than 80 percent in Diploma 
f. Create a funciton with name FinalResult(), candiates scored more 12 ponits are qualified for this post.
 */
#include<iostream>
using namespace std;
//parent class
class UGCourse
{
    public:float UGmarks;
    public: void Subjectlist()
    {
        cout<<"Select a course from the following list"<<endl;
        cout<<"1. Maths"<<endl;
        cout<<"2. Science"<<endl;
        cout<<"3. Physics"<<endl;
        cout<<"4. Chemestry"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"You have selected Maths"<<endl;
            break;
            case 2:
            cout<<"You have selected Science"<<endl;
            break;
            case 3:
            cout<<"You have selected Physics"<<endl;
            break;
            case 4:
            cout<<"You have selected Chemestry"<<endl;
            break;
        }
    }
    void MarksObtained1()
    {
        cout<<"Enter marks obtained in the selected course"<<endl;
        cin>>UGmarks;
    }
};
//parent class
class PGCourse
{
    public:float PGmarks;
    public: void SpecializationList()
    {
        cout<<"Select the Specialized Subject from the given list" ;
        cout<<"1. Data Science"<<endl;
        cout<<"2. Machine Learning"<<endl;
        cout<<"3. Artificial Intelligence"<<endl;
        cout<<"4. Cyber Security"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"You have selected Data Science"<<endl;
            break;
            case 2:
            cout<<"You have selected Machine Learning"<<endl;
            break;
            case 3:
            cout<<"You have selected Artificial Intelligence"<<endl;
            break;
            case 4:
            cout<<"You have selected Cyber Security"<<endl;
            break;
        }
    }
    void MarksObtained2()
    {
        cout<<"Enter marks obtained in the selected course"<<endl;
        cin>>PGmarks;
    }
};
//parent class
class DiplomaCourse
{
    public:float DPmarks;
    public: void CourseList()
    {
        cout<<"Select a course from the following list"<<endl;
        cout<<"1. Diploma in Computer Science"<<endl;
        cout<<"2. Diploma in Electronics"<<endl;
        cout<<"3. Diploma in Mechanical"<<endl;
        cout<<"4. Diploma in Civil"<<endl;
        int choice;
        cin>>choice;
    }
    public:void Marksobtained3()
    {
        cout<<"Enter marks obtained in the selected course"<<endl;
        cin>>DPmarks;
    }
};
//derived class 
class Result_Class:public UGCourse,public PGCourse,public DiplomaCourse
{
    private:int UGper,PGper,DPper;
    float points;
    public:void seletioncriteria()
    {
        points=0;
        UGper=UGmarks/500*100;
        PGper=PGmarks/500*100;
        DPper=DPmarks/500*100;
        if(UGper>80)
        {
            points+=5;
        }
        if(PGper>80)
        {
            points+=5;
        }
        if(DPper>80)
        {
            points+=5;
        }
        cout<<"Your points are "<<points<<endl;
    }
    public: void Final_result()
    {
        if(points>12)
        {
            cout<<"candidate is selected for the Software developer post";
        }
        else
        {
            cout<<"selection criteria for candidate is not matched ";
        }
    }   
};
int main()
{
    Result_Class obj;
    return 0;
}



