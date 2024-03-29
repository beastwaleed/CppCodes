/*Write a program that prompts the user to input a decimal number and
outputs the number rounded to the nearest integer*/

#include <iostream>
using namespace std;

int main()
{
    float num;
    int newnum;
    float decimals;

    cout << "Enter the Number to Make it's Round Off: ";
    cin >> num; //carton
    newnum = num;
    decimals = num - newnum;

    if (decimals >= 0.5)
    {
        newnum++;
    }

    else
    {
        newnum;
    }

    cout << "The Number After Round Off is: " << newnum << endl;

    return 0;
}
