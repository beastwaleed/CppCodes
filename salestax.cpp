#include<iostream>
using namespace std;

int main(){ 
string name;
float salesTax,cityTax,stateTax,amountDue,salePrice, luxuryTax;
int luxury=0;

cout<<"Enter the Name of your Product: "; 
cin>>name;

cout<<"Enter the Price of Your Product: "; 
cin>>salePrice;

if(salePrice>50000){
    luxury=1;
}
else {
    luxury=0;
}

if(luxury==1){

    cityTax=salePrice*0.15;
    stateTax=salePrice*0.04;
    luxuryTax=salePrice*0.1;

    amountDue=cityTax+stateTax+luxuryTax+salePrice;
    cout<<"The Total Amount You have to Pay is "<<amountDue<<endl;

}

else{
    cityTax=salePrice*0.15;
    stateTax=salePrice*0.04;
    amountDue=cityTax+stateTax+salePrice;
    cout<<"The Total Amount You have to Pay is "<<amountDue<<endl; 

}
return 0; 

}