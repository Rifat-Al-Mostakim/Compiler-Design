#include<bits/stdc++.h>
using namespace std;

int main() {
  string userInput;


   cout << "Enter a string: ";
   getline(cin, userInput);


    cout << "Operators found: ";
    for (char ch : userInput) {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << ch << " ";
        }
    }

    cout <<endl;

    return 0;
}
