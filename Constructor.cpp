#include<iostream>
using namespace std;

class constructor{

    private:
    int a,b,c;

    public:
    constructor(){
        a=0,b=0,c=0;
    }

void input(){
    cout<<"\nEnter Three Number"<<endl;
    cin>>a>>b>>c;
}

void output(){

    cout<<"\nA: "<<a;
    cout<<"\nB: "<<b;
    cout<<"\nC: "<<c;
}

};



int main(){

constructor c;
c.input();
c.output();

return 0;


}