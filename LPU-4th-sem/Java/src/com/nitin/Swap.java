package com.nitin;

import java.util.Scanner;

public class Swap {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        System.out.println("Before swapping");
        System.out.println(a);
        System.out.println(b);

        System.out.println(" ");

        // swap numbers
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After swapping");
        System.out.println(a);
        System.out.println(b);
    }
}
