#include<iostream>
using namespace std;

class A{
    public:
    int n;
    
    A(int set_n){
        n=set_n;
    }

    void display(){
        cout<<"N: "<<n<<endl;
    }
};

int main(){

    A a1(10);
    cout<<"Displaying A1\n";
    a1.display();
    A a2(a1);
    cout<<"Displaying A2\n";
    a2.display();
    A a3(20);
    cout<<"Displaying A3\n";
    a3.display(); 
    A a4(0);
    cout<<"Displaying A4\n";
    a4.display();

 return 0;

}