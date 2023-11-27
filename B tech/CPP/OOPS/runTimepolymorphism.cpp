// run time polymorphism 

#include<iostream>
using namespace std;

class Base {
    public:
        virtual void display() {
            cout << "Base function" << endl;
        }
};

class Derived : public Base {
    public:
        void display() {
            cout << "Derived function" << endl;
        }
};

int main() {
    Derived d;
    Base *bptr;
    bptr = &d;
    bptr->display();
    return 0;
}