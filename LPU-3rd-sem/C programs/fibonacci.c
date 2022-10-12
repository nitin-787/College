#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of term in the series: ");
    scanf("%d", n);
    for (i = 0; i < n; i++)
    {
        printf("\nFibonacci(%d) = %d", i, Fibonacci(i));
    }
    
}
int Fibbonaci(int num){
    if(num <= 2)
    return 1;
    return(Fibbonaci (num-1) + Fibbonaci(num-2));
}