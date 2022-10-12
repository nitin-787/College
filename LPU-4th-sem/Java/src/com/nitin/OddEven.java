package com.nitin;

import java.util.Scanner;

public class OddEven {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

//        int num = in.nextInt();
//        System.out.println(num % 2 == 0 ? "Number is even" : "Number is odd");

        int num=100;
        System.out.print("Odd numbers between 1 to 100: ");
        int i = 1;
        while (i<=num) {
            if (i % 2 != 0) {
                System.out.print(i + " ");
            }
            i++;
        }
    }
}
