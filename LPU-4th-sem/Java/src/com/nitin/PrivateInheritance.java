package com.nitin;

public class PrivateInheritance {
    public static void main(String[] args) {
        Bird bird = new Bird();

        System.out.println("Name of the bird : " + bird.name);
        System.out.println("Number of legs: " + bird.getNumOfLegs());
    }

    public static class Animal {
        private int numOfLegs = 4;

        public int getNumOfLegs() {
            return numOfLegs;
        }
        public void setNumOfLegs(int newNumofLegs) {
            numOfLegs = newNumofLegs;
        }
    }

    public static class Bird extends Animal {
            String name = "New bird";
    }
}
