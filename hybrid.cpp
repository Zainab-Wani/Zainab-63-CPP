/*5.Hybrid inheritance 
combining two or more than 2 diiferent types of inheritance to form hybrid inheritance.
In some situation,when we r trying to access base class functtion with derived class in hybrid inheritance,
compiler raise error that function is ambiguous in nature more than 1 path exists in  the code to reach base class function and compiler confused 
to select the path and raise this ambiguity error.
to solve this error we use scope resolution operator or virtual inheritnace.*/
/* HYBRID INHERITANCE */
#include<iostream>
using namespace std;
class Parent{
  public: Parent(){
    cout<<"\n Parent Class Constructor";
  }
  public: ~Parent(){
    cout<<"\n Parent Class Destructor";
  }
//   protected: void Fun1(){
//     cout<<"\n Parent Class Funciton"; //Fun1() access nhi hoga through child3 beacuse if we will put protected access specifier
                                            // so direct access mein public  aur indirect acess mein private hojayega 
//   }
public: void Fun1(){
    cout<<"\n Parent Class Funciton";
  }
};
class Child1 : public Parent{
    public: Child1(){
        cout<<"\n Child1 Class Constructor";
    }
    public: ~Child1(){
        cout<<"\n Child1 Class Destructor";
    }
    public: void Fun2(){
        cout<<"\n Child1 Class Function";
    }
};
class Child2 : public Parent {
    public: Child2(){
        cout<<"\n Child2 Class Constructor";
    }
    public: ~Child2(){
        cout<<"\n Child2 Class Destructor";
    }
    public: void Fun3(){
        cout<<"\n Child2 Class Function";
    }
};
class Child3 : public Child1, public Child2{
    public: Child3(){
        cout<<"\n Child3 Class Constructor";
    }
    public: ~Child3(){
        cout<<"\n Child3 Class Destructor";
    }
    public: void Fun4(){
        cout<<"\n Child3 Class Function";
    }
};
int main(){
    Child3 obj;//obj hamesha- last class jo use ki, us hi ka banega { instance (object) of last class }
    //obj.Fun1();  Ambiguous Error
    // now use scope resolution operator
    obj.Child1::Fun1(); //using scope resolution operator we access the Fun1 from parent class
    obj.Child2::Fun1();
    obj.Fun2();
    obj.Fun3();
    obj.Fun4();
}