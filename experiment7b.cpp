/*7b
Implement Polymorphism for a UG Course Class, PG Course Class and Diploma Course Class.
Polymorphism:-Function overloading or function overriding
Using Multiple Inheritance 
Write a Program to 
a. Create a base class with MyStudyAPP,
b. Create a function Login() overload this function for admin,student and Guest login,
c. Login function for admin has two parameters username(admin) and pin(121)
d. Login function for student has 1 parameter (Registration Number, Range b/w 1 to 100)
f. Create a funciton Greet() as pure virtual function of this class,
g.create a function Accept() to store user information 
h.create a function Display() to display usr information
i.create a derived class UG-Class
j.accept choice from user to Login as Admin, student or Guest,according to users choice invoke base class Login()
Function,Now overide base class functions  Greet() this function will greet() user custom message 
e.g:Welcome Admin,override Accept() and display() function store and Display user details for 
Student Admission in PG-Class.
k.Function,Now overide base class functions  Greet() this function will greet() user custom message 
e.g:Welcome Admin,override Accept() and display() function store and Display user details for 
Student Admission in Diploma-Class.
H.Function,Now overide base class functions  Greet() this function will greet() user custom message 
e.g:Welcome Admin,override Accept() and display() function store and Display user details for 
Student Admission in Diploma-Class.
*/
#include<iostream>
using namespace std;
// Base class
class MyStudyAPP {
public:
    // Function Overloading1

   static void Login(string username, int pin) {
        if (username == "admin" && pin == 121)
            cout << "Admin Login Successful!\n";
        else
            cout << "Invalid Admin Credentials.\n";
    }

    void Login(int regNo) {
        if (regNo >= 1 && regNo <= 100)
            cout << "Student Login Successful!\n";
        else
            cout << "Invalid Registration Number.\n";
    }

    void Login() {
        cout << "Guest Login Successful!\n";
    }

    // Virtual-like interface (will override manually)
    virtual void Greet() {}
    virtual void Accept() {}
    virtual void Display() {}
};

// UG Course class
class UG : public MyStudyAPP 
{
    string name, course;
    public: void Greet() 
    {
            cout << "Welcome UG Student!\n";
        }
        void Accept() 
        {
            cout << "Enter UG Student Name: ";
            cin >> name;
            cout << "Enter UG Course: ";
            cin >> course;
        }
        void Display() 
        {
            cout << "UG Student Name: " << name << "\n";
            cout << "UG Course: " << course << "\n";
        }
};

// PG Course class
class PG : public MyStudyAPP 
{
    string name, specialization;
    public:void Greet() 
    {
        cout << "Welcome PG Student!\n";
    }

    void Accept() 
    {
        cout << "Enter PG Student Name: ";
        cin >> name;
        cout << "Enter PG Specialization: ";
        cin >> specialization;
    }

    void Display() 
    {
        cout << "PG Student Name: " << name << "\n";
        cout << "PG Specialization: " << specialization << "\n";
    }
};

// Diploma Course class
class Diploma : public MyStudyAPP 
{
    string name, stream;
    public:void Greet() 
    {
        cout << "Welcome Diploma Student!\n";
    }
    void Accept() 
    {
        cout << "Enter Diploma Student Name: ";
        cin >> name;
        cout << "Enter Diploma Stream: ";
        cin >> stream;
    }
    void Display() 
    {
        cout << "Diploma Student Name: " << name << "\n";
        cout << "Diploma Stream: " << stream << "\n";
    }
};

int main()
 {
    int choice,c;
    cout << "Login as:\n1. Admin\n2. Student\n3. Guest\nEnter choice: ";
    cin >> choice;
    UG ug;
    PG pg;
    Diploma dip;
    if (choice == 1) 
    {
        string username;
        int pin;
        cout << "Enter Admin Username: ";
        cin >> username;
        cout << "Enter Pin: ";
        cin >> pin;
        MyStudyAPP::Login(username, pin); 
    }
    else if (choice == 2) 
    {
        int regNo;
        cout << "Enter Registration Number: ";
        cin >> regNo;
        cout<<"\n1. UG class\n2. PG-class\n3. Diploma \nEnter choice:";
        cin>>c;
        if(c==1)
        {
            cout<<"\n enetr you ug login details";
            ug.Greet();
            ug.Accept();
            ug.Display();
        }
        else if(c==2)
        {
            cout << "enter your pg login details";
            pg.Greet();
            pg.Accept();
            pg.Display();  
        }
        else if(c==3)
        {
            cout << "\n enter your diploma login details";
            dip.Greet();
            dip.Accept();
            dip.Display(); 
        }
       else 
        {
            cout << "Invalid choice!\n";
        }
    }
    else if (choice == 3)
    {
        cout << "Guest Login Successful!\n";
    } 
    else
    {
        cout << "Invalid choice!\n";
    }

    return 0;
}
