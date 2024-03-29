#include<iostream>
using namespace std;

const int numRooms = 5;

// Function prototypes
void bookRoom(char arr[][numRooms]); // Function to book a room
void showRooms(char arr[][numRooms]); // Function to show available rooms


int main(){
    char hotel[4][5];
    int floor,room,choice;
    double bill,eliteBill=10000,economyBill=6000;


// Initialize hotel rooms
    for(int i=0;i<4;i++){ // Loop through floors
        for(int j=0;j<5;j++){ // Loop through rooms on each floor
           hotel[i][j] = '-' ; // Initialize room as available     
        }
    }
    
do{

    // Menu
    cout<<"\n\n~~Hotel Room Booking System~~"<<endl;
    cout<<"1. Book a Room"<<endl;
    cout<<"2. Show Available Rooms"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"\nEnter Your Choice: ";
    cin>>choice;

    // Menu options
    if(choice==1){
        bookRoom(hotel); // Call function to book a room
    }

    else if(choice==2){
        showRooms(hotel); // Call function to show available rooms
    }

    else if(choice==3){
        cout<<"Exiting the Program\n---------\n--------\nProgram Exited. Thankyou";
    }

    else{
        cout<<"Invalid Input\n"; // Display error message
    }

}

while(choice!=3); // Continue loop until user chooses to exit

}


// Function to book a room
void bookRoom(char arr[][numRooms]){
    int floorNum,roomNum,days;
    double totalBill=0,eliteBill=10000,economyBill=6000;

       // Input validation loop
    do{

        cout<<"Enter Floor Number (1-4): ";
        cin>>floorNum;

        cout<<"Enter Room Number on "<<floorNum<<" Floor (1-5): ";
        cin>>roomNum;

        cout<<"Enter the Days you want to stay: ";
        cin>>days;

        // Room booking
        if(floorNum<1 || floorNum>4){ // If floor number is invalid
            cout<<"Invalid Input for Floors\n"; // Display error message
        }
        else if(roomNum<1 || roomNum>5){ // If room number is invalid
            cout<<"Invalid Input for Rooms\n"; // Display error message
        }

        else if(days<1){ // If number of days is invalid
            cout<<"Invalid Input for Days\n"; // Display error message
        }
        }

   

    while(floorNum<1 || floorNum>4 || roomNum<1 || roomNum>5 || days<1);

            if(arr[floorNum-1][roomNum-1]=='*'){ // If the room is already booked
                cout<<"Sorry the Room is Already Booked\n"; // Display message indicating room is booked

            }
            
            else{ // If the room is available
                arr[floorNum-1][roomNum-1]='*'; // Mark the room as booked
                cout<<"Your Room has Been Booked\n Details: \t Floor: "<<floorNum<<"\tRoom: "<<roomNum<<endl;
        
                // Calculate total bill
                if(floorNum<2){ // If floor is elite
                    totalBill=eliteBill*days; // Calculate bill for elite floor
                }
                else{ // If floor is economy
                    totalBill=economyBill*days; // Calculate bill for economy floor
                }
            
                cout<<"Your Total Bill for " <<days<<" days is: "<<totalBill;

            }
}

// Function to show available rooms
void showRooms(char arr[][numRooms]){

    cout<<"Booked = (*)\t Available = (-)\n\n";

    // Display rooms
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}