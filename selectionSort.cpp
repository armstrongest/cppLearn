// Example program
#include <stdio.h>
#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++ ) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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
        arr[i] = rand() % 1000;
    }
}

// test
int main() {

    int n = 100;
    int array[n];

    generateArray(array, n);
    printArray(array, n);
    selectionSort(array, n);
    printArray(array, n);

    return 0;

}
