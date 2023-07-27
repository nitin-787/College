package com.nitin.lab2;

import java.util.Scanner;

class Employee {
    int id;
    String name;
    float salary;
    String city;

    public void insert() {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter the id: ");
        id = in.nextInt();

        System.out.println("Enter the name: ");
        name = in.next();

        System.out.println("Enter the salary: ");
        salary = in.nextFloat();

        System.out.println("Enter the city name: ");
        city = in.next();

    }
    void display(){
        System.out.println(id+ " " +name+ " " +salary+ " "+city);
    }
}

public class ques1 {
    public static void main(String[] args) {
       Employee e1 = new Employee();

       // inserting the data
        e1.insert();

        // calling the display method
        e1.display();
    }
}
