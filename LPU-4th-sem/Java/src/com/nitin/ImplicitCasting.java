package com.nitin;

import java.util.Scanner;

public class ImplicitCasting {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        byte i = in.nextByte();
        short s = i;
        int a = i;
        long l = i;
        float f = i;
        double d = i;

        System.out.println("Byte value "  + i);
        System.out.println("Byte value "  + s);
        System.out.println("Byte value "  + a);
        System.out.println("Byte value "  + l);
        System.out.println("Byte value "  + f);
        System.out.println("Byte value "  + d);
    }
}
