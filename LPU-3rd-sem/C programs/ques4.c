#include <stdio.h>
int main(){

    int quant, dis, tax;
    float val, total_per_price, discount, final_amount, amount;

    printf("Enter quantity sold today: ");
    scanf("%d", &quant);
    printf("\nEnter total price: ");
    scanf("%f", &val);
    printf("\nEnter percentage discount: ");
    scanf("%d", &dis);
    printf("\nEnter tax percentage: ");
    scanf("%d", &tax);

    printf("\n***********Thanks for shopping! visit again***********");
    printf("\n\n***Computer generated bill***");
    printf("\n\nQuantity: %d", quant);

    total_per_price = (val/quant);
    printf("\nPrice per item: %f", total_per_price);
    
    discount = (val/dis);
    printf("\nTotal discount: - %f", discount);
    
    amount = (val-discount);
    printf("\nTotal amount: %f", amount);
    
    
    final_amount = (amount/tax);
    
    printf("\nTotal GST: + %f", final_amount);
    
    printf("\nTotal amount you to be paid: %f", final_amount + amount);
    
    return 0;

}