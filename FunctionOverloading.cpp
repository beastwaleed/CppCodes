#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Function Using 2 Arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Function Using 3 Arguments" << endl;
    return a + b + c;
}

float sum(double a, double b)
{
    cout << "Function Using 2 Float Arguments" << endl;
    return a + b;
}

int main()
{

    cout << "The Sum of 3 and 6 is: " << sum(3, 6) << endl;
    cout << "The Sum of 3,6 and 7 is: " << sum(3, 6, 7) << endl;
    cout << "The Sum of 5.5 and 1.5 is: " << sum(5.5, 1.5) << endl;

    return 0;
}