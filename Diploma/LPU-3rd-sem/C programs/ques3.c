#include <stdio.h>
int main(){

    char ch;
    printf("Enter a Alphabet to check it is vowel or not: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else
    {
        // constant
        printf("'%c' is Consonant.", ch);
    }

    return 0;
    
        
}