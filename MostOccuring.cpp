#include<iostream>
using namespace std;

int main(){

    int array[9]={2,3,4,2,6,4,1,2,1};    
    int maxCount=0,mostTimes=0;

    for(int i=0;i<9;i++){
        int count=0;
        for(int j=0;j<9;j++){
            if(array[j]==array[i]){
               count++;
            }
        }
        if(count>maxCount){
        maxCount=count;
        mostTimes=array[i];
   
    }
   
    }

    cout<<"Most Occured Number is: "<<mostTimes<<endl;

    return 0;
}