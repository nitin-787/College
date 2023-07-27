package com.nitin;

import java.util.*;

public class Override {
    public static void main(String[] args) {



        Sbi s = new Sbi();
        ICIC i = new ICIC();
        Axis a = new Axis();



        System.out.println("Sbi intrest rate: " + s.intrest());
        System.out.println("ICIC intrest rate: " + i.intrest());
        System.out.println("Axis intrest rate: " + a.intrest());
    }

//    static void getdata() {
//        Scanner in = new Scanner(System.in);
//        String name;
//        float salary;
//        String city;
//
//        System.out.println("Enter you name: ");
//        name = in.next();
//        System.out.println("Enter you salary: " );
//        salary = in.nextFloat();
//        System.out.println("Enter you City: " );
//        city = in.next();
//
//    }

    static class Bank {

        static void getdata() {
            Scanner in = new Scanner(System.in);
            String name;
            float salary;
            String city;

            System.out.println("Enter you name: ");
            name = in.next();
            System.out.println("Enter you salary: " );
            salary = in.nextFloat();
            System.out.println("Enter you City: " );
            city = in.next();

        }

        int intrest(){
            getdata();
            return 0;
        }
    }

   static class Sbi extends Bank {
         int intrest() {
            return 8;
        }
    }

    static class Axis extends Bank {
        int intrest() {
            return 9;
        }
    }

    static class ICIC extends Bank {
        int intrest() {
            return 7;
        }
    }
}
