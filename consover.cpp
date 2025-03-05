/*Program to demonstrate working of function overloading and constructor overloading,
create a class with name LoginApp,with function name Register(),
overload this function three times in this program.
1.Register function will accept username and display "Hi Message with username".
2.REgister function will accept Registration Number and validate Registration number between (1 to 50).
3.Register function will accept Marks and Calculate Credit,for every 10 marks provide 1 credit (Max 100).
4.Create a default constructor of class ,display message "Welcome to LoginAPP".
5.Create a prameterized constructor of class ,that accept login credentials,like Login Pin.*/
#include<iostream>
using namespace std;
class LoginApp
{
    private:string username;
    public:void Register()
    {
        cout<<"Hi Message with username";
    }

};
int main()
{
    LoginApp obj;
    return 0;
}