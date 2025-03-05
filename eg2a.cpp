/*program to create a class with name Student_Data with function name,Welcome_Message(),this function on execution will display a message Welcome to Miet Jammu.)
now, we will add 1  more function with name Validate_RegNo(),this function will accept student name and registratioin number from student and validate it.
(valid RegNo's are from 61 to 120)*/
#include<iostream>
using namespace std;
class Student_Data
{
    public : void Welcome_Message()
    {
        cout<<"\n welcome to MIET Jammu";
    }
    private :string Name;
    int RegNo;
    public : string Validate_RegNo()
    {
        cout<<"\n Enter your Name";
        cin>>Name;
        cout<<"\n Enter your registration number";
        cin>>RegNo;
        if(RegNo>=61 && RegNo<=120)
        {
            return "True";
        }
        else 
        {
            return "False";

        }
    }
};
int main()
{
    Student_Data obj;
    obj.Welcome_Message(); 
    string res;
    res=obj.Validate_RegNo();
    if(res=="True")
    {
        cout<<"\n Login Successfully";
    }
    else
    {
        cout<<"\n Login Fail";
    }
    return 0;
}
