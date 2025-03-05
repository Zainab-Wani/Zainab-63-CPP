/*Program in cpp to create a class with name Area , default constrcutor of class which set radius
value 5,and function() with name calculate (),this function will calculate Area of circle(3.14 *radius *radius)*/
#include<iostream>
using namespace std;
class Area
{
    private: int radius;
    public : Area()// default constructor 
    {
        radius=5;
        cout<<"\n radius="<<radius;
    }
    private:float area;
    public: void calculate()
    {
        area=3.14*radius*radius;
        cout<<"\n area="<<area;
    }
    public: ~Area()
    {
        cout<<"\n destruction called";
    }
};
int main()
{
    Area obj;
    obj.calculate();
    return 0;
}