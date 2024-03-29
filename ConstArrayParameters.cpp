#include <iostream>
using namespace std;

void func(int a)
{
    a = a + 1;
    cout << "x Inside the Function: " << a << endl;
}

void do_work(const int arr[])
{ // Constant Arrays as Formal Parameter
    cout << "\nArray[2] = " << arr[2] << endl;
}

int main()
{

    int x = 10;
    func(x);
    cout << "x Outside the Function: " << x << endl;

    int data[] = {1, 2, 3, 4, 5};
    do_work(data);

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "data[" << i << "] : " << data[i] << endl;
    }

    return 0;
}