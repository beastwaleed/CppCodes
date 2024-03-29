#include <iostream>
using namespace std;

class binary
{

private:
    string num;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a Binary Number" << endl;
    cin >> num;
}

void binary ::chk_bin(void)
{

    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' & num.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) == '1')
        {

            num.at(i) = '0';
        }
        else
        {
            num.at(i) = '1';
        }
    }
}

void binary ::display(void)
{
    cout << num << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout<<"Displaying Your Binary Number"<<endl;
    b.display();
    b.ones_compliment();
    cout<<"Displaying Your Binary Number After Ones Compliment"<<endl;
    b.display();

    return 0;
}