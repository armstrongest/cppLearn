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

// selection sort
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
