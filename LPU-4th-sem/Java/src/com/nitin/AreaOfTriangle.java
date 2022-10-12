package com.nitin;

import java.util.Scanner;

public class AreaOfTriangle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the base: ");
        float b = in.nextInt();
        System.out.print("Enter the height: ");
        float h = in.nextInt();
        float area;

        area = ( b*h) / 2 ;
        System.out.println("Area of Triangle is: " +area);
    }
}
