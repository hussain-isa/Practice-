#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nResults:\n";
    cout << "Addition (a + b) = " << a + b << endl;
    cout << "Subtraction (a - b) = " << a - b << endl;
    cout << "Multiplication (a * b) = " << a * b << endl;

    if (b != 0)
    {
        cout << "Division (a / b) = " << a / b << endl;
    }
    else
    {
        cout << "Division (a / b) = Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}
