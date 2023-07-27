#include <stdio.h>
int
main ()
{

//   char G;

//   printf ("Enter your grade: ");
//   scanf ("%c", &G);

//   switch (G)
//     {
//     case 'A':
//       printf ("Outstanding");
//       break;
//     case 'B':
//       printf ("Exellent");
//       break;
//     case 'C':
//       printf ("Well done");
//       break;
//     case 'D':
//       printf ("Good");
//       break;
//     case 'E':
//       printf ("You Passed");
//       break;
//     case 'F':
//       printf ("Better luck next time");
//       break;
//     default:
//       printf ("Invalid value");

     
     char vowel;

  printf ("Enter any Character: ");
  scanf ("%c", &vowel);

  switch (vowel)
    {
    case 'A':
    case 'a':
      printf ("This is vowel");
      break;


    case 'E':
    case 'e':
      printf ("This is vowel");
      break;


    case 'I':
    case 'i':
      printf ("This is vowel");
      break;

    case 'O':
    case 'o':
      printf ("This is vowel");
      break;

    case 'U':
    case 'u':
      printf ("This is vowel");
      break;

    default:
      printf ("Invalid value");
    }
  return 0;

} 
