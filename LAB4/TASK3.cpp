#include <iostream>
using namespace std;

int main()
{
    int mark;
    char grade;

    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 75)
    {
        grade = 'A';
    }
    else if (mark >= 60)
    {
        grade = 'B';
    }
    else if (mark >= 45)
    {
        grade = 'C';
    }
    else if (mark >= 30)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Your grade is: " << grade << endl;

    return 0;
}