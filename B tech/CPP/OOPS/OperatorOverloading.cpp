#include <iostream>

// operator overloading, increament / decrement operator

class OperatorOverloading {
    private:
        int x;
    public:
        OperatorOverloading(int x) {
            this->x = x;
        }
        void operator ++ () {
            ++x;
        }
        void operator -- () {
            --x;
        }
        void display() {
            std::cout << "x: " << x << std::endl;
        }
};

int main () {
    OperatorOverloading o(10);
    // ++o;
    // o.display();
    --o;
    o.display();
    return 0;
}