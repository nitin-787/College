#include <iostream>
using namespace std;

class Circle {
    float r;
    public:
        Circle(float radius) {
            r = radius;
        }
        friend void show_data(Circle);
};

void show_data(Circle c) {
    const float pi = 3.14;
    cout << "Area of circle is: " << pi*c.r*c.r << endl;
}

int main() {
    Circle c1(10);
    show_data(c1);
    return 0;
}