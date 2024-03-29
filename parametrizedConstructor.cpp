#include <iostream>
using namespace std;

class numbers
{
    int a, b, c;

public:
    numbers()  // Default Constructor
    {
        a = 0, b = 0, c = 0;
    }

    numbers(int x, int y, int z) //Parametrized Constructor
    {
        a = x, b = y, c = z;
    }

    void output()
    {
        cout << "\n"
             << a << ' ' << b << ' ' << c << endl;
    }
};

int main()
{

    numbers p;
    p.output();
    numbers s(10,20,40);
    s.output();

    return 0;
}