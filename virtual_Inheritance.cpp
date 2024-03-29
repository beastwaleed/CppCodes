#include<iostream>
using namespace std;

class A{
    public:
    void Hello(){
        cout<<"Hello from A\n";
    }
};
class B: public virtual A{
public:
};

class C:  virtual public A{
    public:
};

class D: public B, public C{
public:
};

int main(){
 
 D obj1;
 obj1.Hello();
 
 return 0;
}