//Find the power of a number using loop.
#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long power = 1;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++) {
        power *= base; // multiply base exponent times
    }

    cout << base << "^" << exponent << " = " << power << endl;

    return 0;
}
