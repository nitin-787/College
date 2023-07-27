#include<stdio.h>

// function for searching the element
int search(int arr[], int length, int target) {
        for (int i = 0; i < length; i++)
            if (arr[i] == target) 
                return i;
            return -1;
    }

int main(){
    int arr[] = {32, 11, 67, 98, 56};
    int target = 98;

    // calculating the lengt of the array
    int length = sizeof(arr)/sizeof(arr[0]);

    int position = search(arr, length, target);
    if (position == -1) {
        printf("Element not found");
    }
    else {
        printf("Element found at index : %d", position);
    }
    
    return 0;
}