#include <iostream>
using namespace std;

class Swapping {
public:
    void swap(int &a, int &b) {
        int c = a;
        a = b;
        b = c;
        cout << a << " " << b;
    }
};

int main() {
    int a, b;
    cin >> a >> b;
    Swapping s;
    s.swap(a, b); 
    return 0;
}
