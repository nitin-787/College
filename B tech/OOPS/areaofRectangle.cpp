// wap to find the area of rectangle using defalut constructor and parameterized constructor

#include <iostream>
using namespace std;

// with parameter 
class Rectangle1 {
    int l, w;
    public:
        Rectangle1(int length, int width) {
            l = length;
            w = width;
        }

        void show_data() {
            cout << "Area of rectangle is: " << l*w << endl;
        }
};

// without using parameter, default constructor
class Rectangle {
    int l, w;
    public:
        Rectangle() {
            // taking input from user
            cout << "Enter the value of length: ";
            cin >> l;
            cout << "Enter the value of width: ";
            cin >> w;
        }

        void show_data() {
            cout << "Area of rectangle is: " << l*w << endl;
        }
};

int main () {
    Rectangle r1;
    r1.show_data();

    // Rectangle1 r2(10, 20);
    // r2.show_data();
    return 0;
}