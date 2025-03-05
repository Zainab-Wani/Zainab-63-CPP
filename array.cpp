/* Program to demonstrate Array Declaration and Array Initialization:
using Direct Method    24/02/25 */
#include<iostream>
using namespace std;
class ArrayProgram
{
    private: int a[5]; //Array Declaration
    int b[5]={1,2,3,4,5}; //Direct Initialization of Multiple Array Elements   **//best method//**
    //at Declaration Point.
    public: void Display()
    {
        a[0] = 10; //Initialization of Array Element at index 0 using Direct Method
        a[1] = 5; //Initialization of Array Element at index 1 using Direct Method

    cout<<"\nArray Element at index 0 is "<<a[0];
    cout<<"\nArray Element at index 1 is "<<a[1];//cout<<"\nArray Element at index 2 is "<<a[2];
    cout<<"\nEnter array Element "; // give a garbage value by itself in c++ if value not given at index.....
    cin>>a[2];
    cout<<"\nArray Element entered by user at index 2 is "<<a[2];
    cout<<"\nArray Element of array b at index 0 is "<<b[0];
    }
};
int main()
{
    ArrayProgram obj;
    obj.Display();
    return 0;
}

