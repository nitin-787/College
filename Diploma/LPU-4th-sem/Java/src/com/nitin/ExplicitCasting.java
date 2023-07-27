package com.nitin;

import java.util.Scanner;

public class ExplicitCasting {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double i = in.nextDouble();

        System.out.println("Byte value "  + (byte) i);
        System.out.println("Int value "  + (int) i);
        System.out.println("float value "  + (float) i);
        System.out.println("long value "  +  (long) i);
        System.out.println("Short value "  + (short ) i);
    }
}
