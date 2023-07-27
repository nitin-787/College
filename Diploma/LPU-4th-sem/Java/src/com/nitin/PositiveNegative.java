package com.nitin;

import java.util.Scanner;

public class PositiveNegative {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            int num = in.nextInt();

            if (num < 0) {
                System.out.println(num + " is a negative number.");
            }
            else if ( num > 0)
                System.out.println(num + " is a positive number.");
            else {
                System.out.println(num + " is 0");
            }
        }
    }
