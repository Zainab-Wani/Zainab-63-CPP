/*3/04/25 
         MULTI LEVEL INHERITANCE */

         #include<iostream>
         using namespace std;
         class Parent{
             public: void Func1()
             { 
              cout<<"\nParent Class Function";
         
             }
         };
         class Child : public Parent{ //child class will extend Parent class
             public: void Func2()
             {
              cout<<"\nChild Class Function";
         
             }
         };
         class Grand_Child : public Child{ //Grand Child will extend child class 
             public: void Func3()
             {
              cout<<"\nGrand_child Class Function";    //atleast a new feature must be there
              // presently you are working in this grand chlid class so make instance pf this class only
               //logically child or parent class ka instance banaoge too no error but logically incorrect and make always instance of
               //that class in which u are currently working
             }
         };
         int main(){
             Grand_Child obj;
             obj.Func1();
             obj.Func2();
             obj.Func3();
             return 0;
         }
         