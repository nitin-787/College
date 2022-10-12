package com.nitin.Interface;

import java.util.Scanner;

interface AnimalEating {
    public void eating();
}

interface AnimalTravel {
    public void travel();
}

class AnimalSleep {
    public void sleep() {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter how may times animal is sleep: ");
        int sleep = in.nextInt();
        System.out.println("Number of times animal is sleep: " + sleep);
    }
}

class Animall extends AnimalSleep implements AnimalEating, AnimalTravel {
        Scanner in = new Scanner(System.in);

    @Override
    public void eating() {
        System.out.println("Enter the time of eating: ");
        float time = in.nextFloat();
        System.out.println("Enter how many time animal is eating: ");
        int howMany= in.nextInt();

        System.out.println("Animal is eating");
        System.out.println("Time of eating is: " + time);
        System.out.println("Number of time it is eating: " + howMany);
    }

    @Override
    public void travel() {
        System.out.println("Enter where it is going: ");
        String where = in.next();
        System.out.println("Animal is traveling");
        System.out.println("Where it is traveling: " + where);
    }
}

public class MuiltipleInheritance2 {
    public static void main(String[] args) {
        Animall a = new Animall();
        a.eating();
        a.travel();
        a.sleep();
    }
}
