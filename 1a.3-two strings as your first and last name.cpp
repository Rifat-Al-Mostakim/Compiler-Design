#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter you first name - ";
    getline(cin, firstName);

    cout << "Enter your last name - ";
    getline(cin, lastName);

    string fullName = firstName + " " + lastName;

    cout << "Fullname - " << fullName;

    return 0;
}
