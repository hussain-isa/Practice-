#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0)
    {
        cout << "Number entered is positive" << endl;
    }
    else
    {
        cout << "Number entered is negative" << endl;
    }

    return 0;
}