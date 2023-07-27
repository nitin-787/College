#include <stdio.h>

int main()
{
    float principle, time, rate, SI;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;

    /* Print the resultant value of SI */
    printf("Interest Ammount = %f\n", SI);

    printf("Total Ammount to be paid = %f", SI+principle);


    return 0;
}