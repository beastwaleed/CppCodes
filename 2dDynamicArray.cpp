#include<iostream>
using namespace std;

int main(){

int *arr[2];
for(int i=0;i<2;i++){
    arr[i]=new int [3];
}

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        arr[i][j]=i+j;
    }
}

cout<<"Array Elements\n\n";
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for (int i=0;i<2;i++){
    delete[] arr[i];   
}

// delete[] arr;


cout<<"\nArray Elements After Deleting Dynamic 2D Array \n\n";
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

 return 0;
}