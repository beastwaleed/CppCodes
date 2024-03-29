#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int factor=0;
    for(int i=1;i<=n;i++){
     if(n%i==0){
          factor++;
       }
    }
    if(factor>2){
        cout<<"Composite"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }

        return 0;
}