/*Program to demonstrate working of Array Initialization using Accept Method*/
#include<iostream>
using namespace std;
class Program{
    private: int a[10]; int  i; //Declaration of Array
    public: void Accept(){

        //Initialization of Array Elements using Accpet Method (using Any type of Loop)
        int i;
        for(i=0;i<=9;i++){
            cout<<"\n Enter Array Elements ";
            cin>>a[i];
        }
    }
    public: void Display(){

       cout<<"\n Array Elements entered by user is: ";
        for(i=0;i<=9;i++){
            cout<<"\t"<<a[i];
            //cin>>a[i];
        }
    }
};
int main(){
    Program obj;
    obj.Accept();
    obj.Display();
    return 0;

}