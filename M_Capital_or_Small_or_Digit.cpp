#include <iostream>
using namespace std;

int main() {
    char X;
    // Input a single character
    cin >> X;

    // Check if the character is a digit
    if (X >= '0' && X <= '9') {
        cout << "IS DIGIT" << endl;
    } 
    // Check if the character is an alphabet
    else if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')) {
        cout << "ALPHA" << endl; // Alphabet case

        // Check if it is a capital letter
        if (X >= 'A' && X <= 'Z') {
            cout << "IS CAPITAL" << endl;
        } 
        // Check if it is a small letter
        else if (X >= 'a' && X <= 'z') {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
