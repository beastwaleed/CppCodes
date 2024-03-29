#include <iostream>
#include <string>
using namespace std;

int main()
{
    string correct_Username = "user123";
    string correct_Password = "Password786";

    string username, password;

    cout << "Enter the Username: ";
    cin >> username;

    cout << "Enter the Password: ";
    cin >> password;

    if (username == correct_Username && password == correct_Password)
    {
        cout << "Login Succesful! Welcome " << username << endl;
    }
    else
    {
        cout << "Incorrect Username or Password! Please Try Again." << endl;
    }

    return 0;
}