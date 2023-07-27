#include <stdio.h>
#include <string.h>

struct Books {

    char Name[100];
    int Price;


};


int main() {

    //Declaring variable
    int noOfBooks = 2;
    struct Books books[noOfBooks];
    int MaxPrice;
    char MaxBookName[100];







    for(int iterator = 0; iterator < noOfBooks; iterator++ ){
        fflush(stdin);
        printf("Enter Name of the Books:");
        gets(books[iterator].Name);
        fflush(stdin);
        printf("\nEnter the Book's Price:");
        scanf("%d", &books[iterator].Price);

    }

    MaxPrice = books[0].Price;
    strcpy(MaxBookName,books[0].Name);






        for (int iterator = 1; iterator < noOfBooks; iterator++) {

            if(books[iterator].Price > MaxPrice) {
                MaxPrice = books[iterator].Price;
                strcpy(MaxBookName,books[iterator].Name);

            }


        }


    printf("%s has Highest Price %d",MaxBookName,MaxPrice);

    return 0;
}

