#include <iostream>

class A {
    public:
        void display() {
            std::cout << "Hello this is nitin" << std::endl;
        }
};

class B {
    public:
        void display() {
            std::cout << "Yes it's me" << std::endl;
        }
};

int main () {
    A obj1;
    B obj2;
    obj1.display();
    obj2.display();
    return 0;
}