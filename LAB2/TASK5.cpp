#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius, length, width, base, height;

    
    cout << "Enter radius of circle: ";
    cin >> radius;
    double circleArea = PI * radius * radius;
    cout << "Area of circle: " << circleArea << endl;

   
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    double rectangleArea = length * width;
    cout << "Area of rectangle: " << rectangleArea << endl;

    
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    double triangleArea = base * height * 0.5;
    cout << "Area of triangle: " << triangleArea << endl;

    return 0;
}