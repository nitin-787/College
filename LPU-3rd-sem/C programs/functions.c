#include <stdio.h>

int main ()
{
//   int sum (int x, int y)
//   {
//     int c;
//     c = x + y;
//   }
//   printf ("%d", sum (10, 25));
//   return 0;


	int no,factorial;
 
  	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the num(%d) = %d\n",no,factorial);
    }

    int fact(int n)
    {
        int i,f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
}