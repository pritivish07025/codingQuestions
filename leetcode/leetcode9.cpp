#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};

int main() {
    Solution sol;   // Create an object of Solution class
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPalindrome(num))
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;

    return 0;
}
