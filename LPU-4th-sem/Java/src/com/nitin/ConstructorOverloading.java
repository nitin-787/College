package com.nitin;
import java.util.Scanner;

public class ConstructorOverloading {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter you Roll number and name");
        Student s1 = new Student(in.nextInt(), in.next());
        System.out.println("Enter you Roll number and name and marks also");
        Student s2 = new Student(in.nextInt(), in.next(), in.nextFloat());
        s1.display();
        s2.display();


    }

    static class Student {
        int rno;
        String name;
        float marks;

        Student(int rno, String name) {
            this.rno = rno;
            this.name = name;
        }
        Student(int rno, String name, float marks) {
            this.rno = rno;
            this.name = name;
            this.marks = marks;
        }

        void display(){
            System.out.println(rno + " " + name + " " + marks);
        }
    }
}
