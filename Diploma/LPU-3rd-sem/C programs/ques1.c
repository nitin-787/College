#include <stdio.h>
int main(){
    float celsius, fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ((1.8*celsius) + 32);
    printf ("\n Temperature in fahrenheit is: %f", fahrenheit);
  return 0;

}

// Enter temperature in celsius: 32

// Temperature in fahrenheit is: 89.599998