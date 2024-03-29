#include <iostream>
using namespace std;

int main()
{

    float pennies, nickels, dimes, quarters, dollar;
    const float ONE_DOLLAR = 1.00, PENNIES = 0.01, NICKELS = 0.05, DIMES = 0.1, QUARTERS = 0.25;

    cout << "~~~~~CHANGE FOR A DOLLAR GAME~~~~~~" << endl;
    cout << endl;

    cout << "Enter the Pennies: ";
    cin >> pennies;

    cout << "Enter the Nickels: ";
    cin >> nickels;

    cout << "Enter the Dimes: ";
    cin >> dimes;

    cout << "Enter the Quarters: ";
    cin >> quarters;

    dollar = (pennies * PENNIES) + (NICKELS * nickels) + (dimes * DIMES) + (QUARTERS * quarters);

    if (dollar == ONE_DOLLAR)
    {
        cout << "Congratulate! Your Total Coins = $" << dollar << " Made a Dollar" << endl;
    }
    else if (dollar < ONE_DOLLAR)
    {
        cout << "$" << dollar << " is less than $1 Dollar " << endl;
    }

    else if (dollar > ONE_DOLLAR)
    {
        cout << "$" << dollar << " is greater than $1 Dollar " << endl;
    }

    return 0;
}