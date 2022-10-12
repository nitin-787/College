#include <stdio.h>
int main(){

int a, b;

    printf("Enter a first number: ");
    scanf("%d", &a);
    
    printf("Enter a second number: ");
    scanf("%d", &b);
    
    //Displaying values Before Swaping
      printf ("\nValues Before swapping:");
      printf ("\nNumber_one : %d", a);
      printf ("\nNumber_two : %d", b);
      
      a=a+b;
      b=a-b;
      a=a+b;
      
      printf ("\nValues after swapping:");
      printf ("\nNumber_one : %d", a);
      printf ("\nNumber_two : %d", b);
      

    return 0;
}