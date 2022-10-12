#include <stdio.h>

int main(){

    char alphabet;
    printf("Enter any alphabet: ");
    scanf("%c", &alphabet);
    
    printf("\nASCII Value of %c is : %d",alphabet,alphabet);
   
    return 0;
}