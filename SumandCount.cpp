#include<iostream>
using namespace std;

int main(){
    int n1,n2,sum,count=0;

    cout<<"Enter Number for Addition and Couting Digits of Sum (Space for Second Num): ";
    cin>>n1>>n2;

    sum=n1+n2;
    cout<<"The Sum of Two Numbers is: "<<sum<<endl;


    while(sum!=0)
    {
        sum=sum/10;
        count++;
    }
    
    cout<<"Total Digits After Sum are: "<<count;

    return 0;
}