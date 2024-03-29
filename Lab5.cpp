#include <iostream>
using namespace std;

void show(int var)
{
    cout<< ++var << endl;
}

int main()
{
    int a = 0;
    cout << "before function Call: " << a << endl;
    show(a);
    cout << "After function Call: " << a << endl;

    return 0;
}