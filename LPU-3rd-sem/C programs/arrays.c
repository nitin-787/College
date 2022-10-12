#include<stdio.h>
int main(){
    // int price[] = {54, 53, 77, 98,72};

    // // printf("%d\n", price[0]);
    // // printf("%d\n", price[1]);
    // // printf("%d\n", price[2]);
    // // printf("%d\n", price[3]);
    // // printf("%d\n", price[4]);

    // for(int i=0;i<4;i++){      
    // printf("%d \n",price[i]);    

    int marks[5];
    int i;
    printf("Enter the marks: ");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&marks[i]);
    }
    printf("%d",marks[i]);

    return 0;
}
