#include<iostream>
#include <string>
using namespace std;

class Base1{
    protected:
        int base1Var;
    public:
        void setData(int x){
            base1Var=x;
        }
};


class Base2{
    protected:
        int base2Var;
    public:
        void setData2(int x){
            base2Var=x;
        }
};

class Derived: public Base1, public Base2{
    public:
        void show(){
            cout<<"The Value of Base 1: "<<base1Var<<endl;
            cout<<"The Value of Base 2: "<<base2Var<<endl;
            cout<<"The Sum of Base 1 and Base 2 is : "<<base1Var+base2Var<<endl;

        }

};

int main(){

 Derived obj1;
 obj1.setData(20);
 obj1.setData2(5);
 obj1.show();

 return 0;

}