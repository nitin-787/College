#include<stdio.h>

int main(){

    int arr[] =  {24, 11, 7, 99, 56};
    // calculating the lengt of the array
    int length = sizeof(arr)/sizeof(arr[0]);

    // minimum number in an array :
    for (int i = 0; i < length; i++) {
        if (arr[i] < arr[0]) {
            arr[0] = arr[i];
        }
    }

    printf("minimum element in the array is : %d", arr[0]);
    
    return 0;
}