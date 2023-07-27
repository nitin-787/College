#include <stdio.h>
struct student
{
    int course_credit;
    int course_id;
};
int main()
{
    int i;
    struct student st[5];
    printf("Enter 5 course information");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter course_credit:");
        scanf("%d", &st[i].course_credit);
        printf("\nEnter course_id:");
        scanf("%d", &st[i].course_id);
    }
    printf("\nStudent Information List:");
    for (i = 0; i < 5; i++)
    {
        printf("\ncourse_credit:%d, course_id:%d", st[i].course_credit, st[i].course_id);
    }
    return 0;
}