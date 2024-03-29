#include<iostream>
using namespace std;

void eliminate_duplicates(int arr[]);


int main(){

    // Initialize the array with 11 elements
    int arr[11]={58,26,91,26,70,70,66,58,58,66};

    eliminate_duplicates(arr);

    // Print the modified array
        for(int i=0;i<11;i++){
            cout<<arr[i]<<" ";
        }

}

void eliminate_duplicates(int arr[]){

    // Loop through the array
    for(int i=0;i<11;i++){
        // Nested loop to compare each element with all subsequent elements
        for(int j=1;j<11;j++){
           // Check if the current element is equal to any previous element
            if(arr[j]==arr[i]){
            
                // If a duplicate is found, set the duplicate element to 0
                arr[j] = 0; 

                // Shift the elements to the left to fill the gap
                arr[j] = arr[j+1];         

                // Set the next element to 
                arr[j+1] = 0;     
            
            }

        }

    }

//     int count=0;
//     cout<<"The Number of Unique Elements are: ";
//     for(int i=0;i<11;i++){
//         if(arr[i]!=0){
//             count++;
//         }
// }

//     cout<<count<<endl;

}