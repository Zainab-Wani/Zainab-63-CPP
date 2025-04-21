/* 16/04/25
In Hybrid Inheritance
When we access parent class function from child class object due to multiple path, compiler raise an error 
known as Ambigious Function Error.
or
Daimond Problem.
    To solve this error, we have 2 diffferent methods:
    1.Scope Resolution Operator ::
    2.Virtual Inheritance 
    */
   #include<iostream>
   using namespace std;
   class Parent{
    public: void Fun1(){
        cout<<"\nParent class Function";
    }
   };
   class Child1: virtual public Parent{
    public: void Fun2(){
        cout<<"\nChild1 class Function";
    }
   };
   class Child2: virtual public Parent{
    public: void Fun3(){
        cout<<"\nChild2 class Function";
    }
   };
   class Child3: public Child1, public Child2{
    public: void Fun4(){
        cout<<"\nChild3 class Function";
    }
   };
   int main(){
    Child3 obj;
    obj.Fun1(); //This will raise error, Ambigious Function Error (Daimond Problem)
     // by using virtual inheritance , single instance of the parent class is created and then child3 will have 1 path to goto baseclass.
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
    return 0;
   }