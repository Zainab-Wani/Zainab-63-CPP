/*program to create a class with name Student_Data with function name,Welcome_Message(),this function on execution will display a message Welcome to Miet Jammu.)*/
#include<iostream>
using namespace std;
class Student_Data
{
    public : void Welcome_Message()
    {
        cout<<"welcome to MIET Jammu";
    }
};
int main()
{
    Student_Data obj;
    obj.Welcome_Message();
    return 0;
}



