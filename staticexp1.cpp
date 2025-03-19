/*normal variable vs static variable in cpp*/
#include<iostream>
using namespace std;
class program 
{
    public:void fun()
    {
        int n=0;//normal variable  a function
        n++;
        cout<<"\nvalue of n is "<<n<<endl;
        static int n=0;//static  variable  a function
        n++;
        cout<<"\nvalue of n is "<<n<<endl;
    }
};
int main()
{
    program obj1,obj2,obj3; //noramal variable object create separate copies of same variable funtion on calling
    obj1.fun();            //static variable retain its previous values then n is incremented by static word add to datatype initialization
    obj2.fun();
    obj3.fun();
    return 0;
}

