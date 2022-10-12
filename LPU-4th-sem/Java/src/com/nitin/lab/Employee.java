package com.nitin.lab;

import java.util.Scanner;

public class Employee {

    String fname;
    String lname;
    String city;
    float salary;

    public void getInput() {

        Scanner in = new Scanner(System.in);
        System.out.print("Enter the first name: ");
        fname = in.next();

        System.out.print("Enter the last name: ");
        lname = in.next();

        System.out.print("Enter the city name: ");
        city = in.next();

        System.out.print("Enter the salary: ");
        salary = in.nextFloat();
    }

    public  void display() {

        System.out.println("Employee name = " + fname);
        System.out.println("Employee last name = " + lname);
        System.out.println("Employee city name = " + city);
        System.out.println("Employee salary = " + salary);
    }

    public static void main(String[] args) {

        Employee emp1 = new Employee();
        Employee emp3 = new Employee();
        Employee emp2 = new Employee();

            emp1 = new Employee();
            emp1.getInput();

            emp1.display();

    }
}