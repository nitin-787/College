#include <iostream>

using namespace std;

class Op {
    private:
        int value;

    public:
        Op(): value(7) {}

    void operator ++ () {
        value++;
    }

    void operator -- () {
        value--;
    }

    void display() {
        cout << value << endl;
    }
}; 

int main () {
    Op o;
    ++o;
    o.display();
    --o;
    o.display();
    return 0;
}