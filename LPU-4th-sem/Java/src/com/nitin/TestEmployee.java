package com.nitin;

import java.util.Scanner;

final class Employee {

    public Employee(String name, int id, float salary, String city) {
        System.out.println("Employee detail: ");
        System.out.println("Name: "+ name);
        System.out.println("Id: "+ id);
        System.out.println("Salary: "+ salary);
        System.out.println("Address: "+ city);
    }
}



public class TestEmployee {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Employee e1 = new Employee(in.next(), in.nextInt(), in.nextFloat(), in.next());

    }
}
