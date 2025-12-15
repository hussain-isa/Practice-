#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter starting number (i): ";
    cin >> i;
    cout << "Enter ending number (n): ";
    cin >> n;

    cout << "Even numbers between " << i << " and " << n << ":" << endl;

   
    if (i % 2 != 0)
    {
        i++;
    }

    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }

    return 0;
}