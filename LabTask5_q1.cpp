#include<iostream>
using namespace std;

class GroceryStore{
    private:

    long ItemID;
    string name;
    double price;
    int stock;

    public:
     GroceryStore() {  // Default Constructor

        ItemID = 0;
        name = "Default Name";
        price = 0.0;
        stock = 0;

    }
        //getters
    long getId() const {
        return ItemID;
    }

    string getName() const {
        return name; 
    }

    double getPrice() const {
        return price;
    }

    int getQty() const {
        return stock;
    }

    //setters

    void setID(long Id){
        ItemID=Id;
    }

    void setName(string itemName){
        name=itemName;
    }

    void setPrice(double itemPrice){
        price=itemPrice;
    }

    void setqty(int itemQty){
        stock=itemQty;
    }

};

void displayItems(GroceryStore items[], int noItems){
    cout<<"----Displaying All Items from Inventory----\n\n";

    for(int i=0;i<noItems;i++){
        cout<<"\n--Item No: "<<i+1<<endl;
        cout<<"\n--Item Name: "<<items[i].getName();
        cout<<"\n--Item ID: "<<items[i].getId();
        cout<<"\n--Item Price: "<<items[i].getPrice();
        cout<<"\n--Item Stock: "<<items[i].getQty();
        cout<<endl;
    }
}


void updateItems(GroceryStore items[], int noItems){
    int updateChoice;
    string updateName;
    long updateId;
    double updatePrice;
    int updateStock;

    int index=-1; //-1 to indicate Item not Found

    do{
        cout<<"~~~~OPTIONS~~~~\n\n";
        cout<<"1. Update Price:\n";
        cout<<"2. Update Quantity:\n";
        cout<<"3. Back to Main Menu:\n";
        cout<<"--Select :";
        cin>>updateChoice;

        if(updateChoice==1 || updateChoice==2){
            cout<<"Enter Item ID: ";
            cin>>updateId;

            for(int i=0;i<noItems;i++){
                if(items[i].getId()==updateId){
                    index =i;
                }
            }

            if(index==-1){
                cout<<"--Error! No Item Found--\n";
            }

        }

        if(updateChoice==1 || updateChoice ==2 || updateChoice==3 ){
            switch (updateChoice){
            case 1:
            if(index!=-1){
                cout<<"\n--Current Price: $"<<items[index].getPrice();
                cout<<"\n--Enter New Price: ";
                cin>>updatePrice;

                items[index].setPrice(updatePrice);

                cout<<"\n---Item Price Succesfully Updated!---\n";
                   }

                break;
           
            case 2:
            if(index!=-1){
                cout<<"\n--Current Quantity: "<<items[index].getQty();
                cout<<"\n--Enter New Quantity: ";
                cin>>updateStock;
                items[index].setqty(updateStock);

                cout<<"\n---Item Quantity Updated Successfully---\n";
            }
            break;

            case 3:
            break;
            
            
            }


        }
        else{

            cout<<"\n--Invalid Input!--\n";
        }


    }

 while (updateChoice != 3);
}

void searchItems(GroceryStore items[], int noItems){
    int itemId;
    cout<<"Enter Item Id to Search: ";
    cin>>itemId;

    int itemIndex=0;

    for(int i=0;i<noItems;i++){
        if(items[i].getId()==itemId){
            cout<<"\n--Item No: "<<i+1;
            cout<<"\n--Item ID: "<<items[i].getId();
            cout<<"\n--Item Name: "<<items[i].getName();
            cout<<"\n--Item Price: $"<<items[i].getPrice();
            cout<<"\n--Item Quantity: "<<items[i].getQty();
            itemIndex++;
        }
    }
        if(itemIndex==0){
            cout<<"\n--Error! No Item Found--\n";
       
        }

}


int main(){

    int noItems,choice;
    long Id;
    string itemName;
    int itemQty;
    double itemPrice;

     cout<<"~~~WELCOME TO GROCERY INVENTORY MANAGEMENT~~~\n\n";
     cout<<"Enter Number of Items to Add: ";
     cin>>noItems;

    GroceryStore items[noItems];


do{

    cout <<"\n----MENU----";
    cout <<"\n1. Add Items";
    cout <<"\n2. Display All Items";
    cout <<"\n3. Update Item Details";
    cout <<"\n4. Search For Items By ID";
    cout <<"\n5. Exit";
    cout <<"\n--Select : ";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Add Items in Your Inventory\n";
        for(int i=0;i<noItems;i++){
            cout<<"--Enter Id of Item: ";
            cin>>Id;
            items[i].setID(Id);

            cout<<"--Enter Name of Item: ";
            cin>>itemName;
            items[i].setName(itemName);

            cout<<"--Enter Price of Item: ";
            cin>>itemPrice;
            items[i].setPrice(itemPrice);

            cout<<"--Enter Stock of Item: ";
            cin>>itemQty;
            items[i].setqty(itemQty);
            cout<<endl;

        }
         
        break;

        case 2:
        displayItems(items, noItems);
        break;

        case 3:
        updateItems(items, noItems);
        break;
       
        case 4:
        searchItems(items, noItems);
        break; 

        case 5:
        cout<<"---Thankyou For Using Our Inventory Management Software---";
        break;

        default:
        cout<<"---Invalid Input!---";

    }

    }

while(choice!=5);

 return 0;
}