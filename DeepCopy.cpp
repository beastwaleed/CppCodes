#include<iostream>
using namespace std;
int main(){

    int *first;
    int *second;

    first = new int [10];
    for(int i=0;i<9;i++){
        first[i]=i*2;
    }

    second = new int[10];
    for (int i=0;i<10;i++){
        second[i]=first[i];
    }

    cout<<"\nDisplaying First Array\n";
    for(int i=0;i<10;i++){
        cout<<first[i]<<" ";
    }
    cout<<"\nDisplaying Second Array";
    cout<<endl;
    for(int j=0;j<10;j++){
        cout<<second[j]<<" ";
    } 
    cout<<endl;

    cout<<"\nAfter Deleting Second Array\n";
    delete second;

    cout<<"\nDisplaying First Array\n";
    for(int i=0;i<10;i++){
        cout<<first[i]<<" ";
    }
    cout<<"\nDisplaying Second Array";
    cout<<endl;
    for(int j=0;j<10;j++){
        cout<<second[j]<<" ";
    } 
    cout<<endl;

    return 0;
}