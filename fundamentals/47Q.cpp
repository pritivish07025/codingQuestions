//Write a function to swap two numbers using call by reference.
#include <iostream>
using namespace std;

// Function to swap numbers using call by reference
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapNumbers(x, y); // call by reference (actual variables are passed)

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
