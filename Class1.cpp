#include<iostream>
using namespace std;

class groceryStore{

    int ID;
    string name;
    double qty;

    public:
    groceryStore(){
    cout<<"Enter the Product ID: ";
    cin>>ID;

    cout<<"Enter the Product Name: ";
    cin>>name;

    cout<<"Enter the Quantity : ";
    cin>>qty;

    }

    void displayData(){
        cout<<"|ID\t|Name\t|Quantity|";
        cout<<ID<<"\t"<<name<<"\t"<<qty<<endl;
    }

};


int main(){
    int noItems;

    cout<<"Enter the Number of Items to Store: ";
    cin>>noItems;
    groceryStore items[noItems];
    int choice;
    char keepGoing;

    do{
        cout<<"~~Welcome to Grocery Store~~";
        cout<<"1). Display Items\n2). Update Item Details\n
        3).Search for Items by ID";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        if(choice==1){
            items->displayData();
            }
    
    }

    cout<<"Want to Continue or Exit[ Y/y for yes || N/n for No]: ";
    cin>>choice;
    while(choice=='Y' || choice =='y');


 return 0;


}