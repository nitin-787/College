package com.nitin;

import java.util.Scanner;

public class Table {
    public static void main(String[] args) {
        System.out.print("Enter any digit: ");
        Scanner in = new Scanner(System.in);
            int n = in.nextInt();

        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " * " + i + " = " + n * i);
        }

        System.out.println(" ");

        // Reverse table
        for (int i = 10; i > 1; i--) {
            System.out.println(n + " * " + i + " = " + n * i);
        }
    }
}