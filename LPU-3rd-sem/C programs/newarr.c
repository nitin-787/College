#include <stdio.h>

int main()
{  
    int price[5] = {50,60,70,90,100};
    printf("\n %d",price[0]);
    printf("\n %d",price[1]);
    printf("\n %d",price[2]);
    printf("\n %d",price[3]);
    printf("\n %d",price[4]);

    return 0;
}




#include <stdio.h>





int main()
{
    //Variable  Declaration and initialisation
   int sum;
   int marks[10] ;
   
    //Loop to Take input  from user
   
   for(int i = 0; i< 10 ;i++){
       printf("\nEnter Number %d: ", i+1 );
       scanf("%d",&marks[i]);
   }
   
   
   //Loop to Calculate Sum  of the array Elements
   
   for(int p = 0; p< 10 ;p++){
      sum = sum + marks[p];
   }
   
   
   printf("Sum of Enterted Numbers: %d",sum);
   

    return 0;
}


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  int i;
    int num[100],sum=0, n;
    
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter the elememt of the array");
    for(i=0;i<n;i++){
       
    scanf("%d\n",& num[i]);
    }
     printf("Elements of the array:");
    for(i=0;i<n;i++){
        
        printf("\n%d", num[i]);
    }
     for(i=0;i<n;i++){
     sum +=num[i];
     
       
    }
 printf("sum of the elements: %d",sum);
    return 0;
}



#include <stdio.h>





int
main ()
{

  int marks[5];

  //Loop to Take input  from user

  for (int i = 0; i < 5; i++)
    {
      printf ("\nEnter Number %d: ", i + 1);
      scanf ("%d", &marks[i]);
    }

//Loop to Show Enteted array Elements

  printf ("\nEntered Array\n");
  for (int p = 0; p < 5; p++)
    {
      printf ("%d, ", marks[p]);
    }


//Loop to show reverse order  of the array 

  printf ("\nReverse Array\n");
  for (int p = 4; p >= 0; p--)
    {
      printf ("%d, ", marks[p]);
    }





  return 0;
}




#include <stdio.h>

int main ()
{

  int arrayA[5], arrayB[5];

  //Loop to Take input  from user

  for (int i = 0; i < 5; i++)
    {
      printf ("\nEnter Array A[%d]: ", i);
      scanf ("%d", &arrayA[i]);
    }


//Loop to Print Array A

  printf ("\nArray A is \n");
  for (int p = 0; p < 5; p++)
    {
      printf ("%d, ", arrayA[p]);
    }


//Loop to copy Element 


  for (int p = 0; p < 5; p++)
    {
      arrayB[p] = arrayA[p];
    }



//Loop to Print Array B

  printf ("\nArray B\n");
  for (int p = 0; p < 5; p++)
    {
      printf ("%d, ", arrayB[p]);
    }





  return 0;
}


#include <stdio.h>
int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop, largest;

   largest = 0;
   
   for(loop = 0; loop < 10; loop++) {
      if( largest < array[loop] ) 
         largest = array[loop];
   }
   
   printf("Largest element of array is %d", largest);   
   
   return 0;}

