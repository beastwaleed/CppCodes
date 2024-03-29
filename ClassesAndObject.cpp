#include<iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;

    public:
    int d,e;
    void SetData(int a1, int b1, int c1);
    void getData(){
        cout<<"The Value of a is "<<a<<endl;
        cout<<"The Value of b is "<<b<<endl;
        cout<<"The Value of c is "<<c<<endl;
        cout<<"The Value of d is "<<d<<endl;
        cout<<"The Value of e is "<<e<<endl;
    }
};
    void Employee::SetData(int a1, int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
    }
  
int main(){
    Employee waleed;
    waleed.d=100;
    waleed.e=76;
    waleed.SetData(1,2,4);
    waleed.getData();
    return 0; 
}
