#include <stdio.h>
int main(){
    int num1;

    printf("Enter you data: ");
    scanf("%d",&num1);

    if (num1 > 0)
    {
        printf("you entered a digit");  
    }
    if (num1 <= 0)
    {
        printf("you entered an alpha"); 
    }
    
}