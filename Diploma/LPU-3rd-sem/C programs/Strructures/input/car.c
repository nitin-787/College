#include <stdio.h>



//Defining the Structure "car"
struct Car {

    char nameOfCar[100];
    int priceOfCar;
    int  numberOfSeats;
};


int main() {

    //Declaring variable of "car" type
       struct Car car1;

    //Initialising the car1 variable

    printf("\nEnter the Name of the Car:");
    gets(car1.nameOfCar);
    printf("\nEnter the Price:");
    scanf("%d",&car1.priceOfCar);
    printf("\nEnter the Number of Seats:");
    scanf("%d",&car1.numberOfSeats);




    //Accessing the variable car1

    printf( "\nName : %s", car1.nameOfCar);
    printf( "\nPrice : %d", car1.priceOfCar);
    printf( "\nNo. of Seats : %d", car1.numberOfSeats);

    return 0;
}


