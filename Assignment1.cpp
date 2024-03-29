#include <iostream>
#include <string>

using namespace std;

const int MaxAccounts = 200; //setting Account Creation Limit to 200
int accountNum[MaxAccounts]; //Array for Account Numbers 
string accountName[MaxAccounts]; //Array for Account Name 
double accountBalance[MaxAccounts]; //Array for Account Balance 
string accountType[MaxAccounts]; //Array for Account Type [saving/current] 
int accountCount = 0; //Counter Variable for Accessing Accounts

void newAccount(int num, string name, double balance, string type) //Function for Creating New Account 
{
    cout << "Enter Account Number: "; 
    cin >> num;
    cout << "Enter Account Name: ";
    cin.ignore(); // to clear the newline character from the input buffer
    getline(cin, name); //read full name including spaces
    cout << "Enter Account Type [saving/current]: ";
    cin>>type;
    cout<< "Enter Account Balance: ";
    cin>> balance;

    accountNum[accountCount] = num; //Assigning Num to accountNum array
    accountName[accountCount] = name; //Assigning Name to accountName array
    accountBalance[accountCount] = balance; //Assigning Balance to accountBalance array
    accountType[accountCount] = type; //Assigning Type to accountType array
    accountCount++;
    
    cout<<"Account Created Succesfully!"<<endl;
}

void DepositFunds(int num, double balance){ //Function for Deposit
    
    cout<<"Enter Your Account Number: "; //getting account number
    cin>>num;
    
    cout<<"Enter the Amount You Want to Deposit: "; //getting account balance
    cin>>balance;
    
    for(int i=0;i<accountCount;i++){    //for loop to access the account number given by user
        if(accountNum[i]==num){         //if number entered by user is equal to the account number on index
            accountBalance[i]=accountBalance[i]+balance;    //modifing the balance 
            cout<<"Deposit Successful, New Balance is "<<accountBalance[i]<<endl;
        }
        else{
            cout<<"Sorry, Account Not Found\n";     //else statement if account not found
        }
    
    }
}

void Withdrawfunds(int num, double balance){    //Wittdhraw Amount Function

    cout<<"Enter the Account Number: ";         //getting account number
    cin>>num;

    cout<<"Enter the Ammount to Withdraw: ";    //getting account number
    cin>>balance;

    for(int i=0;i<accountCount;i++){        //for loop to access the account number given by user
        if(accountNum[i]==num){         //if number entered by user is equal to the account number on index
            accountBalance[i]=accountBalance[i]-balance; //subtracting the entered amount from the balance of the account
            if(accountBalance[i]>0){    //if accountbalance is greater than 0 than withdraw is successful
            cout<<"Withdraw Successfull. New Balance is: "<<accountBalance[i]<<endl<<endl;
            }
            else{       //otherwise balance will become the same as before
                accountBalance[i]=accountBalance[i]+balance;
               cout<<"Insufficient Funds in Your Account \n\n"<<endl; 

            }
        }
    }
}

void displayAccounts(){  //function for displaying account
    cout<<"Displaying All Accounts: \n"<<endl; 
    for(int i=0;i<accountCount;i++){
        cout<<"Account Number: "<<accountNum[i]<<endl;
        cout<<"Account Holder: "<<accountName[i]<<endl;
        cout<<"Account Balance: "<<accountBalance[i]<<endl;
        cout<<"Account Type: "<<accountType[i]<<endl<<endl;
        cout<<"~~~~~~~~~~~~~~\n";
    }
}

void viewBalance(int num){ //function for Displaying Balance 
    cout<<"Enter Account Number: "<<endl; 
    cin>>num;

    for(int i=0;i<accountCount;i++){     //for loop to access the account number given by user
        if(accountNum[i]=num){      //if number entered by user is equal to the account number on index
            cout<<"Account Balance of Account Number "<<accountNum[i]<<" is : "<<accountBalance[i]<<endl<<endl;
        }
    }
}

int main()
{

    int choice,num,balance; //variable for using in function parameters

    do{
    cout << "~~~~Welcome to Bank Account Management System~~~~\n";  //Menu for the Program
    cout << "\n1. Open Account";
    cout << "\n2. Deposit Funds";
    cout << "\n3. Withdraw Funds";
    cout << "\n4. Display All Accounts";
    cout << "\n5. View Account Balance";
    cout << "\n6. Exit\n";
    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch (choice)         //switch statement for functions
    {
    case 1:
        newAccount(accountNum[accountCount], accountName[accountCount], accountBalance[accountCount], accountType[accountCount]); //Creating Account Function
        
        cout<<endl;
        break;
        
    case 2:
    DepositFunds(num, balance);         //Deposit Funds Functions
    break;

    case 3:
    Withdrawfunds(num,balance);     //Withdraw Funds Functions
    break;

    case 4:
    displayAccounts();      // Displaying All Accounts Function
    break;
    
    case 5:
    viewBalance(num);       //Displaying Balance Only Functions
    }

    } // bracket of do loop
    while(choice!=6); //Statement for Exiting Do-while loop
    return 0;
}