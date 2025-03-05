/*Program to demonstrate the concept of function overloading.
Create a class with name shapes/area,create a function with name Area(),
with area function calculate area of circle,area of rectangle,area of triangle,using function overloading.*/
#include<iostream>
using namespace std;
class Area
{
    private: float res=0;float l1;float b;
    public : Area(float radius)// Constructor1 //return type void hata denge
    {
        res=3.14*radius*radius;
        cout<<"\n Area of Circle is "<<res;
    }
    public : Area(float l,float h)// Constructor2
    {
        res=0.5*l*h;
        cout<<"\n Area of Triangle is "<<res;
    }
    public : Area()// constructor3 
    {
        l1=6,b=9;
        res=l1*b;
        cout<<"\n Area of Rectangle is "<<res;
    }
    
};
int main()
{
    Area obj1;
    Area obj2(8);
    Area obj3(8
        
        
        
        
        
        
        
        
        
        
        
        ,9);
    return 0;
}
