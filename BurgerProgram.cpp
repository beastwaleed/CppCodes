#include<iostream>
using namespace std;

int main(){
    
    int burgerPrice=300; //price of burger
    int friesDrink=200; //price of fries and Drink
    char choice,friesChoice;

    cout<<"Welcome to The Burger Shop"<<endl; 
    cout<<"Do You want a Burger:[Y/N] "<<endl;
    cin>>choice,friesChoice;

    if(choice=='Y' || choice=='y'){ //condition to start the Program
        cout<<"Burger Added"<<endl;
        cout<<"Do you want to add Fries and Drink? Just for 200 Rupees: [Y/N] "<<endl;
        cin>>friesChoice;

        if(friesChoice=='Y' || friesChoice=='y'){ //condition for Fries and Drinks
            cout<<"Thankyou\nTotal Bill is: "<<burgerPrice+friesDrink<<endl; //Total Bill including Burger , Fries and Drink
        }

        else{
            cout<<"Your choice! Thankyou\n Your Total Bill is: "<<burgerPrice<<endl;;
        }
    }

    else if(choice=='N' || choice=='n'){ //Exit Condition
        cout<<"No Problem. See you Next time\n";
    }

    else{
        cout<<"Invalid Input\n";
    }

    return 0;

}