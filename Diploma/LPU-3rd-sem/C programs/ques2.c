#include <stdio.h>
int main(){

    int num;

    char digit[4], a, b;
     printf("Enter a five digit number: ");
     scanf("%d", &num);

     sprintf(digit, "%d", num);

     a = digit[0];
     b = digit[4];

     printf("The first digit of the number is: %c", a);
     printf("\nThe last digit of the number is: %c", b);

     return 0;


}