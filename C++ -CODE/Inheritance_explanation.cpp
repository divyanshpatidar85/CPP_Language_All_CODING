#include<iostream>
using namespace std;
 
// Base class A
 
class A {
    public:
    int a=50;
    void func() {
        cout << " I am in class A" << endl;
    }
};
 
// Base class B
 
class B {
    public:
    int a=10;
    void func() {
        cout << " I am in class B" << endl;
    }
};
 
// Derived class C
 
class C: public A, public B {
    public:
  //  B::a;
//   void func() {
//       A::func();
//     }
 
 
};
 
// Driver Code
 
int main() {
 
    // Created an object of class C
 
    C obj;
 
    // Calling function func()
 
    cout<<obj.A::a;
    obj.B::func();
   
    return 0;
}