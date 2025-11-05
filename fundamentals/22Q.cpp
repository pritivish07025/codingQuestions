// WAF to calculate sum & product of all numbers in an array
#include <iostream>
using namespace std;

int main() {
    int sz;
    cout << "Enter the size of array: ";
    cin >> sz;

    int arr[100]; // fixed-size array (you can assume max size 100)

    cout << "Enter " << sz << " elements: ";
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }

    int sum = 0, prod = 1;

    for (int i = 0; i < sz; i++) {
        sum += arr[i];
        prod *= arr[i];
    }

    cout << "Sum of all elements = " << sum << endl;
    cout << "Product of all elements = " << prod << endl;

    return 0;
}
