// wap for multiple inheritance


#include<iostream>
using namespace std;
 
class A {
    public:
        void display() {
            cout << "Hello this is nitin" << endl;
        }
};

class B {
    public:
        void display() {
            cout << "Yes it's me" << endl;
        }
};

class C: public A, public B {
    public:
        void display() {
            cout << "heheheh" << endl;
        }
};



 int main () {
        C obj;
        obj.A::display();
        obj.B::display();
        obj.display();
    return 0;
 }