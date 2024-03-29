#include <iostream>
using namespace std;

int main()
{

    char start, playAgain,roomTwo;
    string name;
    int rooms;

    do
    {
        cout << "Welcome to Haunted Mansion Game\n" << endl;
        cout << "Press Y/y to Start Game" << endl;
        cin >> start;

        if (start != 'Y' && start != 'y') //Condition for Starting the Game
        {
            cout << "Invalid input. Please press Y/y to start the game." << endl;
            continue;
        }

        cout << "Enter Your Nickname: ";
        cin >> name;
        cout << "Hi " << name << ", You wake up and you found Yourself in a Haunted Mansion\n" << endl;

        do //do-while loop
        {
            cout << "And Now, You have to Find a Escape from This Haunted Mansion and try to Collect Some Helpful Items for Your Journey"<<endl; 
            cout << "\nPress 1 for Room No 001 - This Room have Treasure and Pain Both" << endl;
            cout << "\nPress 2 for Room No 003 - The Entrance of Room No 002 is Blocked but if you want to go to Room 002 then you have to go through Room 003" << endl;
            cout << "\nPress 3 for Room No 007 - Its all Red in this Room, Go and Check it!" << endl;
            cout << "\nPress 4 for Backyard - I can't tell anything about it, Because I didn't go theres" << endl;
            cout << "\nPress Y to Exit the Game" << endl;
            cin >> rooms;

            switch (rooms) //switch operator for Iterating Rooms
            {
            case 1:
                cout << "You choose Death For Yourself, Look at those Snakes[Cobras and Phytons]\nBut the Good thing is that You got Metal Suit!!\nRun from Here\n";
                break;

            case 2:
                cout << "\nWhat are You Doing But this isn't the Exit Room\nSsssh!!, These Zombies can't see but they can Hear You, Walk Slowly\nOne Zombie is Coming to you\nNow Do You want to go to Room 002 or leave the Room 003\n";
             
                cout<<"Press [Y for Yes / N for No]";
                cin>>roomTwo;
             
                if(roomTwo=='Y' || roomTwo=='y'){
                    cout<<"\nGood Choice! You Got a Gun and Some Bandages along with Some Food\nBut this isn't the Exit Room\n";
                }
                break;

            case 3:
                cout << "\nI already told you that it's all red in this Room, but you still decided to enter this Room\nNow you Stepped into the Lava Room\nBut this isn't the Exit Room\n";
                break;

            case 4:
                cout << "\nWohoo! You Reached the Exit Safely\nNow Can You see the Door in front of you Labeled Emegency Exit, Go and Exit from There\n";
                break;

            case 5:
                cout << "Thank you " << name << " for Playing the Game\n";
                break;

            default:
                cout << "Invalid Input\n";
                break;
            }
            cout << "Do you want to play again? (Y/y to continue, any other key to exit): ";
            cin >> playAgain;

        }   
        while (playAgain == 'Y' || playAgain == 'y');

    } 
    while (start == 'Y' || start == 'y');
        
    return 0;
        
        }