#include <iostream>
using namespace std;

int main()
{
    double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
    const double TAX_RATE = 0.06;

    cout << "--- RECEIPT ---" << endl;
    cout << "Item 1: N" << item1 << endl;
    cout << "Item 2: N" << item2 << endl;
    cout << "Item 3: N" << item3 << endl;
    cout << "Item 4: N" << item4 << endl;
    cout << "Item 5: N" << item5 << endl;

    double subtotal = item1 + item2 + item3 + item4 + item5;
    double salesTax = subtotal * TAX_RATE;
    double total = subtotal + salesTax;

    cout << "Subtotal: N" << subtotal << endl;
    cout << "Sales Tax (6%): N" << salesTax << endl;
    cout << "Total: N" << total << endl;

    return 0;
}