#include<iostream>
using namespace std;

int main(){
    int rows;

    cout<<"Enter How Many Rows do you want to Print: ";
    cin>>rows;

    for(int i=1;i<=(rows+1)/2;i++) {
        for(int j=1;j<=i;j++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
     for(int i = (rows-1)/2; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout<<endl;
     }

     return 0;
     }
