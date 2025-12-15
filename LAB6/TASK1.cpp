#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << ":" << endl;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}