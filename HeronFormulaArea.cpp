#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float side1,side2,side3;
    float s,area;

    cout<<"Enter Side 1: ";
    cin>>side1;

    cout<<"Enter Side 2: ";
    cin>>side2;

    cout<<"Enter Side 3: ";
    cin>>side3;

    s=(side1+side2+side3)/2;

    float nosqrt;
    nosqrt=s*(s-side1)*(s-side2)*(s-side3);
    area=sqrt(nosqrt);
    cout<<endl;

  cout<<"The area of The Traingle Using Heron Formula is: "<<area<<endl;
   cout<<"github.com/@beastwaleed"<<endl;

    return 0;

}