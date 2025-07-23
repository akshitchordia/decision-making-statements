// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1


#include <iostream>
using namespace std;

int main() {
    char oper;
    float a, b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (oper) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << a << " / " << b << " = " << a / b;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}



/*
Enter an operator (+, -, *, /): *
Enter two numbers: 5948
4875
5948 * 4875 = 2.89965e+07

Enter an operator (+, -, *, /): +
Enter two numbers: 56
34
56 + 34 = 90
*/
