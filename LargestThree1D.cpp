#include <iostream>
using namespace std;

int main()
{
    int max, secondMax, thirdMax;
    int n;
    cout << "Enter the size for storing the values in array: ";
    cin >> n;
    int array[n];
    cout << "Enter values for the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << " = ";
        cin >> array[i];
    }

    max = array[0];
    secondMax =0; // Initialize secondMax to the smallest possible integer
    thirdMax = 0; // Initialize thirdMax to the smallest possible integer

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            thirdMax = secondMax;
            secondMax = max;
            max = array[i];
        }
         if (array[i] > secondMax && array[i] < max)
        {
            secondMax = array[i];
        }
        if (array[i] > thirdMax && array[i] < secondMax)
        {
            thirdMax = array[i];
        }
    }

    cout << "Maximum: " << max << endl
         << "Second Max: " << secondMax << endl
         << "Third Max: " << thirdMax << endl;

    return 0;
}
