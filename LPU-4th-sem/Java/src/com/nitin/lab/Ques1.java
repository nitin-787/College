package com.nitin.lab;

import java.util.Scanner;

public class Ques1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int num = in.nextInt();
        if (num % 2 == 0 ){

            System.out.println("The Number is even and the table of " + num + " is: ");
            for (int i = 1; i <= 10; i++) {
                System.out.println(num + " * " + i + " = " + num * i);
            }

        } else {
            System.out.println("The number is odd" );
        }
    }
}
