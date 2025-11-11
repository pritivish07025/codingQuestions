//Write a function to reverse a number.
#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;   // extract last digit
        rev = rev * 10 + digit; // add digit to reversed number
        n /= 10;              // remove last digit
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverseNumber(num) << endl;

    return 0;
}
