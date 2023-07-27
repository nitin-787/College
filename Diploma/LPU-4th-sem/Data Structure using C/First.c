#include<stdio.h>

int main(){
    
    int nums[5];


    // Taking the input using for loop
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number for index %d - ", i); 
        scanf("%d",&nums[i]);
    }

    // For extra space
    printf("\n");

    // Printing the number
    for (int i = 0; i < 5; i++)
    {
         printf("Index: %d is %d\n",i, nums[i]);
    }
    
    
    return 0;
}