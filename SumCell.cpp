#include<iostream>
using namespace std;

void subtotal(float arr[]); //Function Prototype

int main(){

    float numbers[5]={5.8,2.6,9.1,3.4,7.0};  //Test Array
 
    subtotal(numbers); //Calling the Function

    for(int i=0;i<5;i++){ //loop for Printing the Numbers
        cout<<" | "<<numbers[i]<<" | ";     // 5.8 | 8.4 | 17.5 | 20.9 | 27.9
    }

    return 0;
}

void subtotal(float arr[]){ //functions to add and replace all elements
    for(int i=0;i<5;i++){
        if(i>0){
        arr[i]=arr[i]+arr[i-1];
        }
    }
}
