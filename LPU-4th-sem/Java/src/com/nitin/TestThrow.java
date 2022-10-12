package com.nitin;

public class TestThrow {
    public static void validate(int age) {
        if (age < 18) {
            throw new ArithmeticException("Person is not eligible to vote");
        } else {
            System.out.println("Person is eligible to vote");
        }
    }
    public static void main(String[] args) {
        validate(13);
        System.out.println("End");
    }
}
