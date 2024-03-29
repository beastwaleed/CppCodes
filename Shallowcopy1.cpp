#include<iostream>
using namespace std;
int main(){

    int *first;
    int *second;

    first = new int [10];
    for(int i=0;i<9;i++){
        first[i]=i*2;
    }

    cout<<"Displaying First\n";
    for(int i=0;i<9;i++){
        cout<<first[i]<<" ";
    }

    second=first;

     cout<<"\nDisplaying Second After Copying First\n";
    for(int i=0;i<9;i++){
        cout<<second[i]<<" ";
    }

    delete[] second;

    cout<<"\nDisplaying First After Deleting Second\n"; 
    /* Deleting Second will also delete the values of first
     pointer because these both share same adress */
    
    for(int i=0;i<9;i++){
        cout<<first[i]<<" ";
    }

 return 0;
} 