#include <stdio.h>
int main ()
{
//   int A, B, C;

//   printf ("Enter three numbers: ");
//   scanf ("%d %d %d", &A, &B, &C);

//   if (A >= B && A >= C)
//     printf ("%d is the largest number.", A);

//   else if (B >= A && B >= C)
//     printf ("%d is the largest number.", B);

//   else
//     printf ("%d is the largest number.", C);

//   return 0;

  int M;

  printf("Enter your percentage: ");
  scanf("%d", &M);

  if(M>=90){
      printf("A Grade");
  }

  else if(M>=80){
      printf("B Grade");
  }

  else if(M>=70){
      printf("C Grade");
  }

  else{
      printf("D Grade");
  }
  return 0;
}