package com.nitin.Interface;

import java.util.Scanner;

interface Professionaldetail {
    public void Prodetail();
}

interface Personaldetail {
    public void Perdetail();
}

interface ReverseTable {
    public void table();
}

public class multipleInheritance implements Personaldetail, Professionaldetail, ReverseTable{
    Scanner in = new Scanner(System.in);

    @Override
    public void Prodetail() {
        System.out.println("Enter your course");
        String course = in.next();
        System.out.println("Enter your college");
        String college = in.next();

        System.out.println("Course : " + course);
        System.out.println("College : " + college);
    }

    @Override
    public void Perdetail() {
        System.out.println("Enter your name");
        String name = in.next();
        System.out.println("Enter your age");
        int age = in.nextInt();

        System.out.println("Name :" + name);
        System.out.println("Age" + age);
    }

    public static void main(String[] args) {
        multipleInheritance main = new multipleInheritance();
        main.Perdetail();
        main.Prodetail();
        main.table();
    }

    @Override
    public void table() {
        System.out.println("Enter a number");
        int num = in.nextInt();
        System.out.println("Table of reverse number : ");
        for (int i = 10; i >= 1; i--) {
            System.out.println(num * i);
        }
    }
}
