package com.nitin;
public class ExceptionHandling {
    public static void main(String[] args) {
        try {
            System.out.println("Inside the block\n");
            int data = 25/0;
            System.out.println(data);

        } catch (ArithmeticException e) {
            System.out.println(e);
        }
        finally {
            System.out.println("This will always execute");
        }
        System.out.println("End of try catch block");
    }
}
