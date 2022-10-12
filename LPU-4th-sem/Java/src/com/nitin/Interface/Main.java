package com.nitin.Interface;

interface Human {
    public void nitin();
}

interface Animal {
    public void goat();
    public void sheep();

}

interface fish {
    public void fish();
}

public class Main implements Animal, Human, fish{

    @Override
    public void goat() {
        System.out.println("Hey this goat");
    }

    @Override
    public void sheep() {
        System.out.println("Hey this is sheep");
    }

    public static void main(String[] args) {
        Main main = new Main();
        main.goat();
        main.sheep();
        main.nitin();
}

    @Override
    public void nitin() {
        System.out.println("Hey this is nitin");
    }

    @Override
    public void fish() {
        System.out.println("Hey this is fish");
    }
}
