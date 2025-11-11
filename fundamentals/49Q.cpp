//Write a function to check palindrome number.
#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

// Function to check if a number is palindrome
bool isPalindrome(int n) {
    int reversed = reverseNumber(n);
    return (n == reversed);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;

    return 0;
}
