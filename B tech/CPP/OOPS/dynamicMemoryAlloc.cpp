#include <iostream>

class dynconst {
    int size;
    int *arr;

    public:
    dynconst(int s) {
        size = s;
        arr = new int[size];
    }

    void input() {
        for(int i = 0; i < size; i++) {
            std::cout << "Enter element " << i << ": ";
            std::cin >> arr[i];
        }
    }

    void output() {
        for(int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    ~dynconst() {
        delete [] arr;
    }
};

int main () {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    dynconst d(size);
    d.input();
    d.output();
    return 0;
}