#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int largest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;


    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            largest = num1;
        }
        else
        {
            largest = num3;
        }
    }
    else
    {
        if (num2 >= num3)
        {
            largest = num2;
        }
        else
        {
            largest = num3;
        }
    }

    cout << "Largest number is: " << largest << endl;

    
    if (largest > 0)
    {
        int temp = largest;
        int digitCount = 0;

        while (temp != 0)
        {
            digitCount++;
            temp /= 10;
        }

        cout << "Number of digits: " << digitCount << endl;
    }
    else
    {
        cout << "The largest number is not positive" << endl;
    }

    return 0;
}