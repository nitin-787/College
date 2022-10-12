#include <stdio.h>
int main()
{
    int age;
    printf("Enter a your age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Yes you can vote");
    }
    else
    {
        printf("No you cannot vote");
    }
    return 0;
}