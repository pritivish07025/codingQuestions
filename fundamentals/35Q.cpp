//Break the number into digits
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) n = -n; 

    int temp = n;
    int digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    for (int i = digits - 1; i >= 0; i--) {
        int divisor = pow(10, i);
        int digit = n / divisor;    
        cout << digit << " ";
        n = n % divisor;            
    }

    cout << endl;
    return 0;
}
