/*Write a program to create two classes,
1. Class Login_Details,
with functions as :-
a. Validate() accept Login password(default 1234) from user
b.Display() display message on Screen "Welcome to MyAPP"
2. Class User_Profile
with functions as:
a.Accept() accept username,email id and name from user.
b. Display() will display information entered by the user on screen.*/
#include<iostream>
using namespace std;
class Login_Details
{
    private:int password;
    public:int Validate()
    {
        cout<<"\n Enter your Login Password"; 
        cin>>password;                        
        if(password==1234)  
        {               
          
            return 1;        //{ cout<<"pass is validated"}
        }                    //display()
        else               
        {
            return 0;       //{ cout<<"password invalid"}
        }  
    }
   public:void Display()
    {
        cout<<"\n Welcome to MyAPP";
    }

};
class User_Profile
{
    private:string Username,EmailID,Name;
    public:void Accept()
    {
        cout<<"\n Enter Your Username";
        cin>>Username;
        cout<<"\n Enter your EmailID";
        cin>>EmailID;
        cout<<"\n Enter your Name";
        cin>>Name;
    }
    public:void Display()
    {
        cout<<"\n Username:"<<Username;
        cout<<"\n EmailID:"<<EmailID;
        cout<<"\n Name:"<<Name;
    }
};
int main()
{
Login_Details obj;
int res;              /*incase we use second method we dont use result value */
res=obj.Validate();
if(res==1)
{
    cout<<"\n Login Sucessfully";
    obj.Display();
    User_Profile obj1;
    obj1.Accept();
    obj1.Display();
}
else
{
    cout<<"\n Invalid Password";
}
return 0;
}
