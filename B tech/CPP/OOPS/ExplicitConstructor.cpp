// explict constructor

#include <iostream>

class ExplicitConstructor {
    private:
        int x;
    public:
        explicit ExplicitConstructor(int x) {
            this->x = x;
        }
        void display() {
            std::cout << "x: " << x << std::endl;
        }
};

int main () {
    ExplicitConstructor e(10);
    e.display();
    return 0;
}