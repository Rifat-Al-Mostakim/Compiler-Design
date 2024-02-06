#include<bits/stdc++.h>
using namespace std;

int main() {
    string inputLine;


    cout << "Enter a line: ";
    getline(cin, inputLine);


    if (inputLine.substr(0, 2) == "//") {
        cout << "It is a single line comment." << endl;
    } else if (inputLine.substr(0, 2) == "/*") {
        cout << "It is the start of a multi-line comment." << endl;
    } else {
        cout << "It is not a comment line." << endl;
    }

    return 0;
}
