#include <iostream>
using namespace std;

void deletion(int arr[], int n, int item) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == item) {
            break;
        }
    }

    if (i < n) {
        n = n - 1;
        for (int j = i; j < n; j++) {
            arr[j] = arr[j + 1];
        }
    }
}

void insertion(int arr[], int n, int item, int pos) {
    n = n + 1;
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = item;
}

int main () {
    int arr[] = { 12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 5;

    // performing deletion
    cout << "Before deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    deletion(arr, n, item);

    cout << "\nAfter deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // performing insertion operation

    item = 7;
    int pos = 3;
    insertion(arr, n, item, pos);

    cout << "\nAfter insertion: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}