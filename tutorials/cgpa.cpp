#include <iostream>
using namespace std;

int main()
{
    float cgpa;
    string grade;
    string subject;
    int numSubjects, credits;


    cout << "Enter the subject: ";
    cin >> subject;

    cout << "Enter the Number of subjects: ";
    cin >> numSubjects;

    cout << "Enter the number of credits (1-4): ";
    cin >> credits;

    if (credits <= 0 || credits > 4)
    {
        cout << "Invalid number of credits" << endl;
        return 0;
    }
    

    cout << "Enter the Grade: ";
    cin >> grade;
    if (grade == "A" || grade == "a")
        cgpa = 4.0;
    else if (grade == "B" || grade == "b")
        cgpa = 3.0;
    else if (grade == "C" || grade == "c")
        cgpa = 2.0;
    else if (grade == "D" || grade == "d")
        cgpa = 1.0;
    else if (grade == "F" || grade == "f")
        cgpa = 0.0;
    else
    {
        cout << "Invalid Grade Input" << endl;
        return 0;
    }
    cout << "Your CGPA: " << cgpa * credits / credits << endl;
    return 0;
}