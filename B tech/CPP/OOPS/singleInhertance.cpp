#include <iostream>
using namespace std;

class Animal {
   protected:
        string type;

   public:
        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl;
        }
};

class Dog : public Animal {
   public:
        void setType(string tp) {
            type = tp;
        }

        void displayInfo(string c) {
            cout << "I am a " << type << endl;
        }

        void bark() {
            cout << "I can bark! Woof woof!!" << endl;
        }
};

int main() {
    Dog dog1;
    dog1.eat();
    dog1.sleep();

    dog1.bark();
    dog1.setType("mammal");

    return 0;
}