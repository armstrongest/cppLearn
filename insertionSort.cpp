int main() {
    
    int n = 50;
    int array[n];
    
    for(int i=0; i<n; i++){
    array[i] = rand() % 100;
    }
    
    for(int i=0; i<n; i++){
    cout << array[i] << " ";
    }
    
    cout << endl;
    
    for(int i=0; i<n; i++) {
       int j, temp;
       j = i;
       while(j >0 && array[j] < array[j-1]) {
           temp = array[j];
           array[j] = array[j-1];
           array[j-1] = temp;
           j--;
       }
    }
    
    for(int i=0; i<n; i++){
    cout << array[i] << " ";
    }
        
    return 0;
}
