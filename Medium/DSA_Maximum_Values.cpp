
// 2. Find the Top 5 Maximum Values:

#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

-        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

void printTopScores(int arr[], int size, int topN) {
    cout << "Top " << topN << " Scores: ";
    for (int i = 0; i < topN && i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sample Input
    int scores[] = {65, 85, 90, 100, 70, 80};
    int size = sizeof(scores) / sizeof(scores[0]);
    int topN = 5;

    // Perform selection sort in descending order
    selectionSortDescending(scores, size);

    // Print the top 5 scores
    printTopScores(scores, size, topN);

    return 0;
}


// Sample Input: scores = [65, 85, 90, 100, 70, 80]
// Sample Output: Top 5 Scores: [100, 90, 85, 80, 70]