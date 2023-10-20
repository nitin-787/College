#include <iostream>

class Circle {
    private:
        const float pi = 3.14;
        const float r;
    public:
        Circle(float radius): r(radius) {}
        void area() {
            std::cout << "Area of circle is: " << pi*r*r << std::endl;
        }
};

int main () {
    Circle c(10);
    c.area();
    return 0;
}