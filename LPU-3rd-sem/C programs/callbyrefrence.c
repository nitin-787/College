#include<stdio.h>

    // function defination to swap value
void swap(int *x, int* y){

int temp;
temp = *x; //Save the value at address x
*x = *y;   // put y into x
*y = temp; // put temp into y
return;
}

int main(){
    int a = 10, b = 25;
    printf("%d and %d\n", a,b);
    swap(&a, &b);
    printf("%d and %d\n", a,b);
    return 0;
}