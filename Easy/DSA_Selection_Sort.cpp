// 4. Selection Sort - Sort an Array of Integers:

#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform selection sort
    selectionSort(arr, size);

    // Print the sorted array
    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}


// Sample Input:
// arr = [64, 25, 12, 22, 11]
// Sample Output:
// Sorted Array: [11, 12, 22, 25, 64]