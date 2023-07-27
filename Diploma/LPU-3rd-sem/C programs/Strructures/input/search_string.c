#include <stdio.h>
struct Bookinfo
{
    char bname[20];
    int id;
    float price;
};
int main()
{
    struct Bookinfo book[100];
    int i, n, name, loc = -1;
    printf("\nEnter number of records you want to enter: ");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the Name of Book : ");
        gets(book[i].bname);
        fflush(stdin); //It is used to clear the input buffer(stdin-Input taken from keyboard)
        printf("\nEnter book id : ");
        scanf("%d", &book[i].id);
        fflush(stdin);

        printf("\nEnter the Price of Book : ");
        scanf("%f", &book[i].price);
        fflush(stdin);
    }
    printf("\n Enter the name you want to search:");
    gets(name);
    for (i = 0; i < n; i++)
    {
        if (strcmp(book[i].bname, name) == 0)
        {
            loc = i;
            break;
        }
    }
    if (loc == -1)
    {
        printf("\n Entered name is not found!!!!");
    }
    else
    {
        printf("\n Name found in record no: %d", i + 1);
    }

    return 0;
}