#include<stdio.h> 

// Ques - 2

int sum(int); 
int main() 
{ 
int n=50;
printf("Sum of first %d numbers is: %d",n,sum(n)); 
return 0; 
} 
int sum(int n) 
{ 
if (n!=1) 
return n+sum(n-1); 
else  
return 1; 
} 