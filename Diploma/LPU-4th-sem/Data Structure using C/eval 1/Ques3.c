#include<stdio.h>

int main(){
    
    int n, pos, i;
    int arr[100];
    printf("Enter the size of the array (1 to 100) : ");
    scanf("%d", &n);

    // inserting the elements in the array
    for (i = 0; i < n; i++) {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nInsertion is completed\n");

    // deleting the element in the array
    printf("Enter the element number you want to delete: \n ");  
    scanf ("%d", &pos);  

    if (pos >= n + 1) {  
        printf ("\nDeletion is not possible in the array\n");  
    } else {  

    for (i = pos - 1; i < n -1; i++) {  
        arr[i] = arr[i+1];
    }  
        
    printf ("\nArray after deleting the element\n");  
        
        // Array after deleting the element  
        for (i = 0; i < n - 1; i++) {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    
    return 0;
}