package com.nitin;

public class Overrinding {
    public static void main(String[] args) {
        Bike obj = new Bike(); // creating object
        obj.run(); // calling methode
    }

    static class Vehical {
        // defining a method
        void run(){
            int a = 10, b = 20;
            System.out.println("Addition of a + b: " + (a+b));
        }
    }
    // creating a child class
    static class Bike extends Vehical {
        // defining the same methode as in the parent class
        void run(){
            int a = 10, b = 20;
            // using super keyword to access the base or parent class
            super.run();
            System.out.println("subrtaction of a - b: " +(a-b));
        }
    }
}
