#include<iostream>
using namespace std;
int main(){
  int arr1[10]={1,2,3,4,5,6,7,8,9,10};
  int arr2[10]={20,30,40,50,60,70,80,90,100,110};
    int temp[10]={0,0,0,0,0,0,0,0,0,0};


    cout<<"Array 1 Before Swapping: \n";
    for(int i=0;i<10;i++){
        cout<<arr1[i]<<" ";
    }

        cout<<endl;


    cout<<"Array 2 Before Swapping: \n";
     for(int i=0;i<10;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<10;i++){
        temp[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp[i];
    }

    cout<<"Array 1 After Swapping: \n";
    for(int i=0;i<10;i++){
        cout<<arr1[i]<<" ";
    }
    
    cout<<endl;


    cout<<"Array 2 After Swapping: \n";
     for(int i=0;i<10;i++){
        cout<<arr2[i]<<" ";
    }
        cout<<endl;


  return 0;
}