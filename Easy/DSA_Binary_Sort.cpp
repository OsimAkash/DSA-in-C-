// 2. Binary Search - Find a Value in a Sorted Array:

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    // Sample Input 1
    int arr1[] = {3, 6, 9, 12, 15, 18};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 12;

    // Perform binary search and print result
    int index1 = binarySearch(arr1, size1, target1);
    cout << "Index of " << target1 << " is: " << index1 << endl;

    // Sample Input 2
    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 25;

    // Perform binary search and print result
    int index2 = binarySearch(arr2, size2, target2);
    cout << "Index of " << target2 << " is: " << index2 << endl;

    return 0;
}



// Sample Input (target not in array):
// arr = [10, 20, 30, 40, 50]
// target = 25
// Sample Output:
// -1