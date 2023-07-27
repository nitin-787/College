package com.nitin.lab3;

public class Main {
    public static void main(String[] args) {
        System.out.println(get(10,20));
        System.out.println(get(10,20, 30));
    }

    // method overloading
    public static int get(int a, int b) {
        return a + b;
    }

    public static int get(int a, int b, int c) {
        return a + b + c;
    }
}