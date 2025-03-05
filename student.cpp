//Analyze and design classes for a student management statemnet.
#include<iostream>
using namespace std;
class student
{
    private: string Name;
    private:int Rollno;
    private:string departmentName;
    public: void Management()
    {
        cout<<"enter the name of the student";
        cin>>Name;
        cout<<"enter the roll no of the student";
        cin>>Rollno;
        cout<<"enter the department name of the student";
        cin>>departmentName;
    }
    void display()
    {
        cout<<"name of the student is"<<Name;
        cout<<"roll no of student is"<<Rollno;
        cout<<"department name of student is"<<departmentName;
    }
};
int main()
{
    student obj;
    obj.Management();
    return 0;

}