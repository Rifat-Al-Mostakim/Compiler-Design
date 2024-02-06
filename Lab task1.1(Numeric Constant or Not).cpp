#include<bits/stdc++.h>
using namespace std;

int main() {
    string userI;


   cout << "Enter a value: ";
   cin >> userI;


    bool isNumeric = 1;
    for (char ch : userI) {
        if (isdigit(ch)) {
            isNumeric = 0;
        }
    }

    if (isNumeric) {
        cout << "Not numeric" << endl;
    } else {
        cout << "Numeric constant"<< endl;
    }

    return 0;
}
