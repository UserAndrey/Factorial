#include <iostream>
using namespace std;

void factor(int n)
{
    int k;
    cout << "Input n = ";
    cin >> n;
    for (n = 1; n; n++)
    {
        (n-1)*n;
    }
    return factor();
}
    