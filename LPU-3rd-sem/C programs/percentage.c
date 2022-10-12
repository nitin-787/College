#include <stdio.h>

int main() {
   float percentage;
   int Math, CS, Viva, English, Javascript;
   int total_marks=500;
   int total;
   
   printf("Enter marks in Maths out 100: ");
   scanf("%d", &Math);
   
   
   
   printf("Enter marks in CS out 100: ");
   scanf("%d", &CS);
   
   
   
   printf("Enter marks in Viva out 100: ");
   scanf("%d", &Viva);
   
   
   
   printf("Enter marks in English out 100: ");
   scanf("%d", &English);
   
   
   
   printf("Enter marks in Javascript out 100: ");
   scanf("%d", &Javascript);
   
   total = Math + CS + Viva + English + Javascript;
   
  
   percentage = (total*100/total_marks);
   printf ("\tpercentage=%2f ", percentage);

   return 0;
}