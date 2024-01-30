#include <iostream>
using namespace std;

int main()
{
    int size, arry[20], sum = 0;
    cout << "Enter the array :";
    cin >> size;

    for (int i = 0; i < size; i++)
    {

        cin >> arry[i];
        sum += arry[i];
    }

    float average;

    average = sum * 1.0 / size;

    cout << average << "";
}
