#include <iostream>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    double distance;

    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    cout << "The distance squared between (" << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") is: " << distance << endl;

    return 0;
}