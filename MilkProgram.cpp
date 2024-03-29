#include <iostream>
using namespace std;

int main()
{

    const float perCarton = 3.78;
    float profit = 0.27, productionCost = 0.38;
    float userLitres;
    float totalprofit, totalcost;
    float cartons, decimals;
    int newcarton;

    cout << "Enter the total amount of milk produced in the morning (in liters): ";
    cin >> userLitres;
    cartons = userLitres / 3.78;

    totalcost = userLitres * 0.38;
    totalprofit = userLitres * 0.27;

    newcarton = cartons;
    decimals = cartons - (int)cartons;

    if (decimals > 0.5)
    {
        ++newcarton;
    }

    else
    {
        newcarton;
    }

    cout << "The Cartons you need to store " << userLitres << " Liters Milk are: " << newcarton << endl;
    cout << "The Profit on " << userLitres << " Litres Milk is: $" << totalprofit << endl;
    cout << "The Production Cost on " << userLitres << " Litres Milk is: $" << totalcost << endl;
}