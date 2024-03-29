#include <iostream>
using namespace std;

void locationTarget(int arr[0],int size);

int main()
{
    const int size=5;
    int nums[5]={58,26,90,10,71};
    
    locationTarget(nums,size);
    
    
return 0;
}

void locationTarget(int arr[], int size){
    int max=arr[0];
    int maxIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }
    cout<<"Maximum Number is: "<< max << " on Index: "<< maxIndex<<endl;
}