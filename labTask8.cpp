#include<iostream>
#include<string>
using namespace std;

class bankAccount {
    protected:
    int accNumber;
    double balance;

    public:
    //default constructor
    bankAccount(){
        accNumber=0;
        balance=0.0;
    }

    //setter
    void setAcc(){
        cout<<"Enter Account Number: ";
        cin>>accNumber;
    }

    //getters
    int getAcc(){
        return accNumber;
    }

    double getBalance(){
        return balance;
    }
    

    void depositMoney(){
        double deposit;
        cout<<"Enter the Amount to Deposit: ";
        cin>>deposit;
        do{
        if(deposit<1){
            cout<<"\nInvalid Input\n";
        }
        else{
            cout<<"Amount Deposit Succesfully\n";
        }
        }
        while (deposit<0);
            balance+=deposit;
    }

    void withdrawMoney(){
        double withdraw;
        cout<<"Enter Amount to Withdraw: ";
        cin>>withdraw;
        do{
       if(withdraw>balance){
        cout<<"Insufficient Funds\n";
       }
        else {
        cout <<"\n-----Amount Withdrawn Successfully!-----\n";
            }
        }
        while(withdraw>0);
        balance-=withdraw;
    }

    void printInfo(){
        cout<<"\\n---Displaying Account Information---\n\n";
        cout << "\n-------------------------------\n";
        cout<<"--Account Type : Current"<<endl;
        cout << "\n-------------------------------\n";
        cout<<"--Account Number: "<<accNumber<<endl;
        cout << "\n-------------------------------\n";
        cout<<"--Account Balance: "<<balance<<endl;
        cout << "\n-------------------------------\n";

    }

};

class SavingAccounts: protected bankAccount{
    private:
    double interestRate;
    double interest;

    public:
    SavingAccounts(){
        interestRate=0.0;
        interest=0.0;
    }

    void setInterestRate(){
        double rate;
        interestRate=rate;
    }

    double getInterestRate(){
        return interestRate;
    }

    // void setInterest(double inter){
    //     interest=inter;
    // }

    void postInterest() {
        interest = (interestRate/100) * balance;
        balance += interest;
    }

    void withdraw(){
        double savingWithdraw;
        cout<<"Enter Amount to Withdraw from Your Saving Account: ";
        cin>>savingWithdraw;
        do{
        if(savingWithdraw>balance){
            cout<<"Insufficient Funds\n";
        }

        else{
            cout<<"Amount Withdrawn Succesfully\n";
        }

        }

        while(savingWithdraw>balance);
        balance-=savingWithdraw;
    
    }

    void printInfo(){

        cout<<"\\n---Displaying Account Information---\n\n";
        cout << "\n-------------------------------\n";
        cout<<"--Account Type : Saving"<<endl;
        cout << "\n-------------------------------\n";
        cout<<"--Account Number: "<<accNumber<<endl;
        cout << "\n-------------------------------\n";
        cout<<"--Account Balance: "<<balance<<endl;
        cout << "\n-------------------------------\n";
        cout<<"--Interest Rate: "<<interestRate<<endl;
        cout << "\n-------------------------------\n";

    }

};


int main(){

    char menu_choice, options_choice;
    double amount;
    long account_number;
    bankAccount current;
    SavingAccounts savings;

    cout <<"\n\t-----Banking Application-----\n";

    do {
        cout << "\n-----Menu-----";
        cout << "\n1. Create Account";
        cout << "\n2. Display Account";
        cout << "\n3. Deposit";
        cout << "\n4. Withraw";
        cout << "\n5. Exit";
        cout << "\n--Enter choice : ";
        cin >> menu_choice;
        
        switch (menu_choice) {
            case '1':
                cout << "\n\t*****Create Account*****\n";
                cout << "\n-----Options-----";
                cout << "\n1. Current Account";
                cout << "\n2. Savings Account";
                cout << "\n--Enter Choice : ";
                cin >> options_choice;
                switch (options_choice){
                    case '1':
                        cout << "\n\t*****Current Account*****\n";
                        current.setAcc();
                        current.depositMoney();    
                    break;

                    case '2':
                        cout << "\n\t*****Saving Account*****\n";
                        savings.setAcc();
                        savings.setInterestRate();
                        savings.depositMoneys();

                    default:
                      cout << "\n-----Invalid Input!-----\n";
                    break;
                }

                 case '2':
                cout << "\n\t*****Display Account*****\n";

                cout << "\n-----Options-----";
                cout << "\n1. Current Account";
                cout << "\n2. Savings Account";
                cout << "\n--Enter Choice : ";
                cin >> options_choice;

                switch (options_choice) {
                    case '1':
                        current.printInfo();
                    break;
                    
                    case '2':
                        savings.printInfo();
                    break;

                    default:
                        cout << "\n-----Invalid Input!-----\n";
                    break;
                }

            break;

            case '3':
                cout << "\n\t*****Deposit Amount*****\n";
                cout << "\n-----Options-----";
                cout << "\n1. Current Account";
                cout << "\n2. Savings Account";
                cout << "\n--Enter Choice : ";
                cin >> options_choice;

                switch (options_choice) {
                    case '1':
                        current.depositMoney();
                    break;
                    
                    case '2':
                        savings.depositMoney();
                    break;

                    default:
                        cout << "\n-----Invalid Input!-----\n";
                    break;
                }
            break;

            case '4':
            cout << "\n\t*****Withdraw Amount*****\n";

                cout << "\n-----Options-----";
                cout << "\n1. Current Account";
                cout << "\n2. Savings Account";
                cout << "\n--Enter Choice : ";
                cin >> options_choice;

                switch (options_choice) {
                    case '1':
                        current.withdrawMoney();
                    break;
                    
                    case '2':
                        savings.withdrawMoney();
                    break;

                    default:
                        cout << "\n-----Invalid Input!-----\n";
                    break;
                }
            break;

            case '5':
            cout << "\n-----Thank You For Choosing Us-----" << endl;
            break;
            
            default:
                cout << "\n-----Invalid Input!-----\n";
            break;
        }
        
    }

    while (menu_choice != '5');

    return 0;
}
