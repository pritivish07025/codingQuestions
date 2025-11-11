//Write a function to swap two numbers using call by value.
#include <iostream>
using namespace std;

// Function to swap numbers using call by value
void swapNumbers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function (after swap): a = " << a << ", b = " << b << endl;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y); // call by value (copy of x and y is passed)
    cout << "After swap (in main): x = " << x << ", y = " << y << endl;

    return 0;
}
