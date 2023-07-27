#include <stdio.h>
int main()
{
    int num, i;
    int *ptr;
    ptr = &num;
    printf(" Enter the number for Print multiplication Table: ");
    scanf("%d ", &num);
    printf("Multiplicaiton Table of %d are :\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("\n %d ", (*ptr * i));
    }
    return (0);
}