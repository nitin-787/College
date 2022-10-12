package com.nitin.Interface;

import java.util.Scanner;

interface Table {
    public void table();
}

public class Interfaces implements Table{

    @Override
    public void table() {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println("Table of entered number is : ");
        for (int i = 1; i <= 10; i++) {
            System.out.println(n * i);
        }
    }

    public static void main(String[] args) {
        Interfaces main = new Interfaces();
        main.table();
    }
}

