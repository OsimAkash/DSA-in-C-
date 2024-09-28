// 5. Insertion Sort - Sort a Partially Sorted Array:

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sample Input
    int arr[] = {3, 8, 12, 15, 6, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform insertion sort
    insertionSort(arr, size);

    // Print the sorted array
    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}

// Sample Input:
// arr = [3, 8, 12, 15, 6, 20]
// Sample Output:
// Sorted Array: [3, 6, 8, 12, 15, 20]