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


        printf("Enter the Information of the student:\n");
        printf("Enter the name of the student: ");
        scanf("%s", &s1.name);
        printf("Enter the roll of the student: ");
        scanf("%d", &s1.rollno);
        printf("Enter the marks of the student: ");
        scanf("%f", &s1.marks);

       
    };

    if (s.marks>s1.marks)
    {
        printf("Marks of the first student are more");
    }
    else{
        printf("Marks of the second student are more");
    };
    
    return 0;

}       