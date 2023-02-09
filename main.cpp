#include <iostream>

using namespace std;

int main() {
    string username;
    string password = "1234";

    cout << "Username: " << flush;
    cin >> username; // Requesting username input

    // Checking if username is equal to Hyperion. If yes then ask for password. If no deny attempt
    if (username == "Hyperion")
    {
        cout << "Password: " << flush;
        cin >> password;
    } else {
        cout << "Username is Incorrect. Try Again" << endl;
    }

    if (password == "1234")
    {
        cout << "Welcome Hyperion!" << endl;
    } else {
        cout << "Wrong Password.";
    }

    return 0;
}
