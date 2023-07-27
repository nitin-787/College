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
    int i, n, id_to_search, loc = -1;
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
    printf("\n Enter the id you want to search:");
    scanf("%d", &id_to_search);
    for (i = 0; i < n; i++)
    {
        if (book[i].id == id_to_search)
        {
            loc = i;
            break;
        }
    }
    if (loc == -1)
    {
        printf("\n Entered id is not found!!!!");
    }
    else
    {
        printf("\n Id found in record no:%d", loc + 1);
        printf("\n Name of the book for the entered id is: %s", book[loc].bname);
    }

    return 0;
}