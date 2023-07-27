#include <stdio.h>
 
int main()
{
    int base, exponent;
    float power = 1;
    int i;
 
    /* Take base and exponent as input*/
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;
    while (expo < 0)
    {
        {
            power = power/base;
            expo++;
        }
    }
 
    if(exponent >0)
    {
 
        /*Calculate power */
        for(i = 1; i <= exponent; i++)
        {
            power = power * base;
        }
    }
    printf("%d ^ %d = %f", base, exponent, power);
 
    return 0;

    /* We can also use <math.h> header file to find power becasue in c programming we don't have any exponantial ( ^ ) operator.
    1 Example - printf("%d" pow(3,5));
    2 Example - printf("%d" 3**5);
    */
}