#include <iostream>
using namespace std;

// WAF = Write A Function
void swapMaxMin(int arr[], int size) {
    int maxIndex = 0, minIndex = 0;

    // Step 1: Find indexes of max and min elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    // Step 2: Swap them
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Step 3: Print the modified array
    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    swapMaxMin(arr, n);

    return 0;
}
