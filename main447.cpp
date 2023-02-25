#include <iostream>
using namespace std;

int findMinSumIndex(int arr[], int size, int index = 0) {
    if (index + 9 >= size) {
        return -1; 
    }
    else {
        int sum = 0;
        for (int i = index; i < index + 10; i++) {
            sum += arr[i];
        }
        int minSumIndex = findMinSumIndex(arr, size, index + 1); 
        if (minSumIndex == -1 || sum < minSumIndex) {
            return index; 
        }
        else {
            return minSumIndex;
    }
}

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100; 
    }
    int index = findMinSumIndex(arr, 100);
    if (index != -1) {
        cout << "The minimum sum of 10 numbers starts at index " << index << endl;
    }
    else {
        cout << "There are less than 10 numbers in the array" << endl;
    }
    return 0;
}