package com.nitin;

import java.util.Scanner;

public class AreaOfRectangle {
    public static void main(String[] args) {
        int area, rectangle;
        System.out.println("Enter the area: ");
        Scanner in = new Scanner(System.in);
        rectangle = in.nextInt();
        area = rectangle * rectangle;
        System.out.println(area);
    }
}
