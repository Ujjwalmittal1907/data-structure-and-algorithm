#include<iostream>
using namespace std;
 
// Base class A
 class A {
    public:
 void func() {
        cout << " I am in class A" << endl;
    }
};
 // Base class B
 class B {
    public:
 
    void func() {
        cout << " I am in class B" << endl;
    }
};
 // Derived class C
class C: public A, public B {
 
 
};
 

 
int main() {
  if(5>4>1){
    cout << "a";
  }
  else{
    cout << "b";
  }
}