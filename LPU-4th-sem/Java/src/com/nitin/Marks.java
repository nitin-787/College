package com.nitin;

import java.util.Scanner;

public class Marks {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        float maths, phy, chem, cs;
        int roll_no;
        String name;

        // student details
        System.out.print("Enter your name: ");
        name = in.nextLine();
        System.out.print("Enter your Roll no: ");
        roll_no = in.nextInt();

        // marks section
        System.out.print("Enter the marks in maths: ");
        maths = in.nextFloat();

        System.out.print("Enter the marks in physic: ");
        phy = in.nextFloat();

        System.out.print("Enter the marks in chemistry: ");
        chem = in.nextFloat();

        System.out.print("Enter the marks in computer science: ");
        cs = in.nextInt();

        float total = maths + phy + chem + cs;
        float percentage = (total/400) * 100;

        if(percentage >= 90){
            System.out.println("Excellent: Grade A");
        }else if(percentage < 90 && percentage >= 80){
            System.out.println("Very Good: Grade B");
        }else if(percentage < 80 && percentage >= 70) {
            System.out.println("Good: Grade C");
        }

        System.out.println("");
        System.out.println("Your is result is: ");
        System.out.println("Student's name is: " + name);
        System.out.println("Student's Roll no is: " + roll_no);
        System.out.println("Total marks: " + total);
        System.out.println("Percentage is: " + percentage);

    }
}
