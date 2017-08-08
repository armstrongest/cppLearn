// Example program
#include <stdio.h>
#include <iostream>

using namespace std;

// insertion sort algorithm
void insertionSort(int arr[], int n) {

    int i, j, key;

    for (i = 1; i < n; i++) {

        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

    }
}


// print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// generate random array
void generateArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

// test
int main() {

    int n = 10;
    int array[n];

    generateArray(array, n);
    printArray(array, n);
    insertionSort(array, n);
    printArray(array, n);

    return 0;

}
