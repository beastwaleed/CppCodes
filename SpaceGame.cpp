#include <iostream>
using namespace std;

int main()
{

    char start, playAgain;
    string name;
    int planet;

    do
    {
        cout << "Welcome to Space Adventure Game\n" << endl;
        cout << "Press Y/y to Start Game" << endl;
        cin >> start;

        if (start != 'Y' && start != 'y')
        {
            cout << "Invalid input. Please press Y/y to start the game." << endl;
            continue;
        }

        cout << "Enter Your Nickname: ";
        cin >> name;
        cout << "Hi " << name << ", You wake up in your spaceship...\n" << endl;

        do
        {
            cout << "Right now, we are traveling in deep space, looking for a habitable planet. Here is the list of some Planets I have found by far :" << endl;
            cout << "Choose the Planet You want to Go on: " << endl;

            cout << "Press 1 for Gliese 581C - The planet is classed as a Super Earth, exoplanets which have up to 10 times the mass of our own planet." << endl;
            cout << "Press 2 for Kepler - It receives only 32 percent of the amount of light that Earth receives from the Sun" << endl;
            cout << "Press 3 for Mulchatna - Arid, rocky landscapes with massive underground caverns." << endl;
            cout << "Press 4 for Proxima Centauri - A red dwarf star with a mass about 12.5% of the Sun's mass" << endl;
            cout << "Press 5 for Exit" << endl;
            cin >> planet;

            switch (planet)
            {
            case 1:
                cout << "It's scorching hot here, but rich in minerals. This planet could be suitable for mining, although it's not habitable.\n";
                break;

            case 2:
                cout << "\n\n--It's incredibly lush here with abundant fruits and vegetables. The air is clean, and there's enough oxygen to breathe. I believe you've found your new home planet, Calibris IX. Congratulations!\n";
                break;

            case 3:
                cout << "\n\n--It's very unstable here. Looks like the rain here has continued for over a 100 years, that has caused the planet to become unhabitable.\n";
                break;

            case 4:
                cout << "\n\n--This planet is a mystery. Too many underground caves, looks like someone used to live here once.\nYou have found a hidden treasure, congrats! This will definitely come in handy.\n";
                break;

            case 5:
                cout << "Thank you " << name << " for Playing the Game\n";
                break;

            default:
                cout << "Invalid Input\n";
                break;
            }

            if (planet == 5)
                break;

            cout << "Do you want to play again? (Y/y to continue, any other key to exit): ";
            cin >> playAgain;

        } while (playAgain == 'Y' || playAgain == 'y');

    } while (start == 'Y' || start == 'y');

    return 0;
}
