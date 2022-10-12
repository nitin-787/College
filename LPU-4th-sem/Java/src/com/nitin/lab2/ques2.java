package com.nitin.lab2;

class Fruit {
    static void apple(){
        System.out.println("I'm apple");
    }
}

class Vegetable extends Fruit {
    static void cabbage(){
        System.out.println("Hi! I'm cabbage from class vegetable");
    }
}

public class ques2 {
    public static void main(String[] args) {
        Vegetable display = new Vegetable();
        display.cabbage();
        display.apple();
    }
}
