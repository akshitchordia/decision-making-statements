// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1


#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter the value of a: ";
    cin >> a;
    
    cout << "Enter the value of b: ";
    cin >> b;
    
    cout << "Enter the value of c: ";
    cin >> c;

    // Find the largest number
    if (a > b && a > c) {
        cout << "a is the largest number." << endl;
    } else if (b > c && b > a) {
        cout << "b is the largest number." << endl;
    } else if (c > a && c > b) {
        cout << "c is the largest number." << endl;
    } else {
        cout << "Two or more numbers are equal and largest." << endl;
    }

    return 0;
}


/*
Enter the value of a: 78
Enter the value of b: 65
Enter the value of c: 89
c is the largest number.
*/
