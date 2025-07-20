// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1


#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (!isalpha(ch)) {
        cout << "Invalid input. Please enter an alphabet character." << endl;
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}

/*
output
Enter a character: g
g is a consonant.

h
Enter a character: h is a consonant.

Enter a character: e
e is a vowel.
*/
