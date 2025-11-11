//Write a function to find the largest of three numbers.
#include <iostream>
using namespace std;

// Function to find the largest number
int largest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "The largest number is: " << largest(x, y, z) << endl;

    return 0;
}
