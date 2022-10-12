package com.nitin;

class Main {
    int Roll_no;
    int Reg_no;
    String university;
    int marks;
    String name;

    // constructor
    Main() {
        System.out.println("Student's information");
        name = "Nitin";
        Roll_no = 77;
        Reg_no = 12006550;
        marks = 47;
        university = "LPU";

    }

    public static void main(String[] args) {

        // constructor is invoked while
        // creating an object of the Main class
        Main obj = new Main();
        System.out.println(obj.name);
        System.out.println(obj.Roll_no);
        System.out.println(obj.Reg_no);
        System.out.println(obj.university);
        System.out.println(obj.marks);
    }
}