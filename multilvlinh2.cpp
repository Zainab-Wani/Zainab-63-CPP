/* write a program to                  3/04/25             **** Multi Level Inheritance ****
a. create a base class with name Myapp
b. create a function message() , display welcome message on screen 
c. create a function Login() accept pin from user and validate pin against value 123 
and return Message 'yes' or 'no' 
d. create a derived class with name StudentInfo
e. create a function Accept() store student Information like Name, Registration Number, Course Name but only when user Login Successfull.
f. create a function display() to display student information on screen.
g. create one more derived class with name Grade_Calc, this class will take inheritance from StudentInfo Class.
h. Create a function cal(), this function will accept marks from Accept() function of StudentInfo class and calculate 
percentage and Grade as per following:
Percentage between 80 to 100 A
Percentage between 70 to 80 B
Percentage between 60 to 70 C
Otherwise Not Qualified
*/
#include<iostream>
using namespace std;

class MyApp{
    private: int pin;
    public: void Message(){
        cout<<"\nWelcome on Screen";
    }
    public: string Login(){
      
        cout<<"\nenter the pin";
        cin>>pin;
        if(pin==123){
            cout<<"\nThe Pin is Valid";
            return "yes";
        }
        else{
            cout<<"\nThe Pin is invalid";
            return "no";
        }
    }
};
class StudentInfo : public MyApp{
    private: string Name, CourseName;
    int RegistrationNumber;
    public:  float marks;
    public: float Accept(){
         
        cout<<"\nenter the Name, Registration Number and Course Name of the stduent: ";
        cin>>Name>>RegistrationNumber>>CourseName;
        cout<<"\nenter the marks";
        cin>>marks;
        cout<<marks;

        return marks;

       
    }
    public: void display(){
        cout<<"\nNmae is "<<Name<<"\n"<<"Reg No is "<<RegistrationNumber<<"\n"<<"Course Name is "<<CourseName<<"\n"<<"marks is "<<marks<<"\n";
    }
};
class Grade_Calc : public StudentInfo{
    public: float per;
public: void cal(float ma){
   // marks=ma;
    per=(ma/500)*100;
    //cin>>per;
    // cout<<per;
  if(per>=80.00 && per<100.00){
    cout<<"\nthe garde is A on the percentage "<<per; 
    
  }
  else if(per>=70.00 && per<=80.00){
    cout<<"\nthe grade is B on the percentage "<<per;
  }
  else if(per>=60.00 && per<=70.00){
    cout<<"\nthe grade is C on the percentage "<<per;
  }
  else{
    cout<<"\nnot qualified on the percentage "<<per;
  }
}
};

int main(){
    Grade_Calc obj;
  
        obj.Message();
        string res;
        res=obj.Login();
        if(res=="yes"){
            float rees;
            rees=obj.Accept();
           
            obj.cal(rees);
           
       
            obj.display();
        }
        else{
            cout<<"\nthe pin is invalid\n";
        }
    
      
        return 0;
    }
    
