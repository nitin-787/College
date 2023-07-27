#include <stdio.h>
int main(){

int num, new_num;

/* Taking input from user */

printf("Enter your number: ");
scanf("%d", &num);

if (num % 5 == 0) // output in divisible by 5
{
    new_num = (100+num);
    printf ("\nOutput: %d", new_num);
}
else{                              // output in not divisible by 5  
    new_num = (50+num);
    printf ("\nOutput: %d", new_num);
}
    return 0;
}

