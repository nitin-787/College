#include<stdio.h>

int main(){

    int arr[5] =  {24, 11, 7, 99, 56};
    // calculating the lengt of the array
    int length = sizeof(arr)/sizeof(arr[0]);

    // largest number in an array :
    for (int i = 0; i < length; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("Maximum element in the array is : %d", arr[0]);
    
    return 0;
}