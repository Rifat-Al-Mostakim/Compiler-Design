#include <iostream>
using namespace std;

int main()
{
    double k, m = 1;
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
       m *= i;
    }

    cout <<"Factorial of a given numbers:"<< m;
}
