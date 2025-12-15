# include <iostream>
using namespace std;

 int main(){
     char op;
     double num1, num2, result;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            cout << result << '\n';
            break;

        case '-':
            result = num1 - num2;
            cout << result << '\n';
            break;

        case '/':
            result = num1 / num2;
            cout << result << '\n';
            break;

        case '*':
            result = num1 * num2;
            cout << result << '\n';
            break;
            return 0;
        }
    }