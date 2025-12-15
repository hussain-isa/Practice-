#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Natural numbers from " << n << " to 1:" << endl;
    while (n >= 1)
    {
        cout << n << " ";
        n--;
    }

    return 0;
}