#include<stdio.h>

    struct car{
        char *name;
        int seats;
        float price;

    };
int main(){
    
    struct car myCar;
    myCar.name = "newcar";
    myCar.price = 90000;
    myCar.seats = 4;
    printf("%s %f %d\n", myCar.name, myCar.price, myCar.seats);

    
    return 0;
}