#include<stdio.h>

int swap(int, int);
int swap(int n1, int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;

    printf("n1, %d, n2=%d", n1, n2);
}
int main(){
    
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);

    printf("Value before calling the swap function, a=%d, b=%d", a ,b);

    return 0;
}