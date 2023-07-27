#include <stdio.h>
  
struct Student {
    char* name;
    int roll_number;
    int section;
};

int main()
{
  
    struct Student student[5];
  
    student[0].roll_number = 1;
    student[0].name = "nitin";
    student[0].section = 12;
  
    student[1].roll_number = 5;
    student[1].name = "notnitin";
    student[1].section = 10;
  
    student[2].roll_number = 2;
    student[2].name = "isnitin";
    student[2].section = 11;
  
    student[3].roll_number = 4;
    student[3].name = "nitinnn";
    student[3].section = 12;
  
    student[4].roll_number = 3;
    student[4].name = "nitinn";
    student[4].section = 13;
  
    printf("Student Information:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("\tName = %s\n", student[i].name);
        printf("\tRoll Number = %d\n", student[i].roll_number);
        printf("\tsection = %d\n", student[i].section);
    }
  
    return 0;
}