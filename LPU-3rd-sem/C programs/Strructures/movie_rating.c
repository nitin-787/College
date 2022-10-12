#include <stdio.h>
  
struct movie {
    char* name;
    int rating;
};

int main()
{
  
    struct movie movie[3];
  
    movie[0].rating = 7;
    movie[0].name = "new_movie";
  
    movie[1].rating = 9;
    movie[1].name = "old_movie";
  
    printf("movie Information:\n\n");
    for (int i = 0; i < 2; i++) {
        printf("\tName = %s\n", movie[i].name);
        printf("\tRating = %d\n", movie[i].rating);
    }
  
    return 0;
}