
// 1. Linear Search - Find the First Occurrence of a Value:


#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    // Sample Input 1
    int arr1[] = {22, 13, 45, 67, 13, 89, 76};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 13;

    // Perform linear search and print result
    int index1 = linearSearch(arr1, size1, target1);
    cout << "Index: " << index1 << endl;

    // Sample Input 2 (target not in array)
    int arr2[] = {5, 8, 12, 3, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 10;

    // Perform linear search and print result
    int index2 = linearSearch(arr2, size2, target2);
    cout << "Index: " << index2 << endl;

    return 0;
}


// Sample Output:
// Index: 1
// Sample Input (target not in array):
// arr = [5, 8, 12, 3, 7]
// target = 10
// Sample Output:
// -1