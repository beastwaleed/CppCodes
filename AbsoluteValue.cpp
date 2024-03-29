#include<iostream>
using namespace std;

int main(){

    float num;
    cout<< "Enter a Number to Make Absolute: ";
    cin>>num;

    if(num>=0){
        cout<<num;
    }
    else{
        num=(-1)*num;
        cout<<num;
    }

    return 0;
}