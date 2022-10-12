package com.nitin;

public class MultipleCatch {

    public static void main(String[] args) {

        try{
            int[] a = new int[5];
            a[6] = 30 / 2;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Arithmetic Exception");
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("ArrayIndexOutOfBounds Exception");
        }
    }
}