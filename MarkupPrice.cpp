#include<iostream>
using namespace std;

int main(){
    float costPrice,Markup,finalPrice,salesTax;
    
    cout<<"Enter the Cost Price of the Item: ";
    cin>>costPrice;

    cout<<"Enter the Markup (Percentage) you want to make in the Price: ";
    cin>>Markup;

    cout<<"Enter the Sales Tax (Percentage) on the Price: ";
    cin>>salesTax;

        finalPrice=costPrice+(costPrice*(Markup/100));
        finalPrice=finalPrice+(finalPrice*(salesTax/100));

        cout<<"The Total Price Customer will Pay is: "<<finalPrice<<endl;

    return 0;
}