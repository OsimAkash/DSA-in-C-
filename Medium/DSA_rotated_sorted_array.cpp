// 1. Search in a Rotated Sorted Array:

#include <iostream>
using namespace std;

int searchInRotatedArray(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[low] <= arr[mid]) {
            if (target >= arr[low] && target < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (target > arr[mid] && target <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}



int main() {
    // Sample Input 1
    int arr1[] = {15, 18, 2, 3, 6, 12};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 3;

    // Perform search and print result
    int index1 = searchInRotatedArray(arr1, size1, target1);
    cout << "Index: " << index1 << endl;

    // Sample Input 2
    int arr2[] = {7, 8, 9, 1, 2, 3, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;

    // Perform search and print result
    int index2 = searchInRotatedArray(arr2, size2, target2);
    cout << "Index: " << index2 << endl;

    return 0;
}

// Sample Output: Index: 3
// Sample Input (target not in array): arr = [7, 8, 9, 1, 2, 3, 4] target = 5