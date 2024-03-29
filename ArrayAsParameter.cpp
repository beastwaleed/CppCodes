#include <iostream>
using namespace std;

void printArray(int array[],int arraySize);
    
int main() {
 
int arrayOne[3]={5,10,15};
int arrayTwo[4]={1,4,5,7};

printArray(arrayOne, 3);
cout<<endl;
printArray(arrayTwo, 4);

return 0;

}

void printArray(int array[],int arraySize){
    for(int i=0;i<arraySize;i++){
        cout<<array[i]<<" ";
    }
}