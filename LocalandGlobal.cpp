#include <iostream>
using namespace std;

int a = 10;
int main()
{

    int a = 5;

    cout << "Local Variable: " << a << endl;
    cout << "Global Variable: " << ::a << endl; // Use Scope Resolution operator for Accessing Global Variable

    return 0;
}