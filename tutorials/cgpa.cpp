#include <iostream>
using namespace std;

int main()
{
    int numSubjects;
    int credits;
    float gradePoint;
    float totalPoints = 0;
    int totalCredits = 0;
    string grade, subject;

    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    for (int i = 1; i <= numSubjects; i++)
    {
        cout << "\nEnter subject name: ";
        cin >> subject;

        cout << "Enter credits (1-4): ";
        cin >> credits;

        if (credits <= 0 || credits > 4)
        {
            cout << "Invalid credit value!" << endl;
            return 0;
        }

        cout << "Enter grade (A-F): ";
        cin >> grade;

        if (grade == "A" || grade == "a")
            gradePoint = 4.0;
        else if (grade == "B" || grade == "b")
            gradePoint = 3.0;
        else if (grade == "C" || grade == "c")
            gradePoint = 2.0;
        else if (grade == "D" || grade == "d")
            gradePoint = 1.0;
        else if (grade == "F" || grade == "f")
            gradePoint = 0.0;
        else
        {
            cout << "Invalid grade!" << endl;
            return 0;
        }

        totalPoints += gradePoint * credits;
        totalCredits += credits;
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nYour CGPA is: " << cgpa << endl;

    return 0;
}
