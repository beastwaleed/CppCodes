#include <iostream>
using namespace std;

class numbers
{
    int a, b, c;

public:
    numbers() // Default Constructor
    {
        a = 0, b = 0, c = 0;
    }

    numbers(int x, int y, int z) // Parametrized Constructor
    {
        a = x, b = y, c = z;
    }

    numbers(numbers &T) // Copy Constructor
    {
        a = T.a, b = T.b, c = T.c;
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
    numbers s(20, 40, 80);
    s.output();
    numbers t(s);
    t.output();

    return 0;
}