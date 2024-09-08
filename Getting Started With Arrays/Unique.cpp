#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int result = 0;

    // XOR all elements in the array
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4}; // Example array, 2 is the unique element
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = findUnique(arr, size);

    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}
