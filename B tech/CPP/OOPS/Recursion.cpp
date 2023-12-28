#include <iostream>
using namespace std;

int fact(int n) {
    if (n > 1) {
        return n * fact(n-1);
    } else {
        return 1;
    }
}
int main () {
    int num = 4;
    cout << fact(num) << endl;
    return 0;
}