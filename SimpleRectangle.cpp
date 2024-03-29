#include <iostream>
using namespace std;

int main()
{

    for (int rows = 0; rows < 5; rows++) //loop for rows
    {
        for (int col = 0; col < 5; col++) //loop for coloumns
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}