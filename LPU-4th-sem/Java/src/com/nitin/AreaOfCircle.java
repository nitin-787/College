package com.nitin;

import java.util.Scanner;

public class AreaOfCircle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the radius: ");
        int radius = in.nextInt();
        double pi = 3.142, area;
        area = pi * radius * radius;
        System.out.println("Area of circle is :" + area);
    }
}
