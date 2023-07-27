#include <stdio.h>
  
struct books {
    char* book_name;
    char* author;
    int price;
};

int main()
{
  
    struct books books[5];
  
    books[0].price = 100;
    books[0].book_name = "The Subtle are of not giving f*ck";
    books[0].author = "mark";

  
    books[1].price = 100;
    books[1].book_name = "Atomic Habit";
    books[1].author = "james";

    books[2].price = 100;
    books[2].book_name = "Revolution 2020";
    books[2].author = "bhagat";

  
    books[3].price = 100;
    books[3].book_name = "A lie about life";
    books[3].author = "nitin";

    books[4].price = 100;
    books[4].book_name = "Death";
    books[4].author = "avni";
  
    printf("books:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("\tName = %s\n", books[i].book_name);
        printf("\tAuthor = %s\n", books[i].author);
        printf("\tPrice = %d\n", books[i].price);
    }
  
    return 0;
}