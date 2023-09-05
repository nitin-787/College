#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    bool swapped;
    for (int i = 0; i < size; i++) {
        swapped = false;
        for (int j = 1; j < size - i; j++) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {10, -2, 0, -4, -7, 77, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, size);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
