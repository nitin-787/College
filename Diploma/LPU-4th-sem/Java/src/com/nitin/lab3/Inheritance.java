package com.nitin.lab3;

import java.util.Scanner;

public class Inheritance {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Child child = new Child();

        System.out.println("Enter you details: ");
        child.id = in.nextInt();
        child.name = in.next();
        child.salary = in.nextFloat();
        child.city = in.next();

        System.out.println("Employee's id : " + child.id);
        System.out.println("Employee's name : " + child.name);
        System.out.println("Employee's salary : " + child.salary);
        System.out.println("Employee's city : " + child.city);
    }
    static class Parent {
        int id;
        String name;
    }

    static class Child extends Parent {
        float salary;
        String city;
    }
}