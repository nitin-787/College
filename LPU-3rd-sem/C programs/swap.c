#include <stdio.h>
int main(){

int a, b, temp;

    printf("Enter a first number: ");
    scanf("%d", &a);
    
    printf("Enter a second number: ");
    scanf("%d", &b);
    
    //Displaying values Before Swaping
      printf ("\nValues Before swapping:");
      printf ("\nNumber_one : %d", a);
      printf ("\nNumber_two : %d", b);
      
      temp=a;
      a=b;
      b=temp;
      
      printf ("\nValues after swapping:");
      printf ("\nNumber_one : %d", a);
      printf ("\nNumber_two : %d", b);
      

    return 0;
}