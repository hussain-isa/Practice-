#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Positive number" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative number" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}