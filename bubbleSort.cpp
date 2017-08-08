// Example program
#include <stdio.h>
#include <iostream>

using namespace std;

// bubble sort algorithm
void bubbleSort(int arr[], int n) {
int temp;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1-i; j++) {
    temp = arr[j+1];
    arr[j+1] = arr[j];
    arr[j] = temp;
    }
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
    bubbleSort(array, n);
    printArray(array, n);

    return 0;

}
