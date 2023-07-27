#include<stdio.h>
    
    struct student
    {
        char name[10];
        int rollno;
        float marks;
    };
    
int main(){
    struct student s,s1;
    {
        printf("Enter the Information of the student:\n");
        printf("Enter the name of the student: ");
        scanf("%s", &s.name);
        printf("Enter the roll of the student: ");
        scanf("%d", &s.rollno);
        printf("Enter the marks of the student: ");
        scanf("%f", &s.marks);

        s1=s; //Copying structure variable to another
    };
    
    return 0;
}