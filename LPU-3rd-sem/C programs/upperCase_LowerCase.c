#include <stdio.h>

int main()
{
    
    //Declearatinig Variable 
    char var;
    
    //Taking Input from User 
    printf("\n Enter any character : ");
    scanf("%c",&var);
    
    
    //Logic Part and Displaying result 
    
    if(var >= 65 && var <= 91)                       // If the Entered Character is in Uppercase 
       { 
           printf("\n %c is a Uppercase Charater ",var);
           var = var + 32;
           printf("\n Lowercase : %c   ",var);
       }
   else                                              //If character is in Lowercase
       { 
           printf("\n %c is a Lowercase Charater ",var);
           var = var - 32 ;
           printf("\n Uppercase : %c ",var);
       }
    
    
    
 return 0;   
}