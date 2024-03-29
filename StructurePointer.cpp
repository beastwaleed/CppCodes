#include<iostream>
using namespace std;

struct pointer{
    int a;
};

int main(){
    pointer *ptr;
    pointer str;
    ptr=&str;
    str.a=10;
    cout<<ptr->a<<endl;
    return 0;
}