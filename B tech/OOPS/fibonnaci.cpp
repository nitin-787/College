#include <iostream>

using namespace std;

class Fibo {
    public: 
    void fibo(int n) {
        int a = 0, b = 1;
        int ans = 0;

        while (n > 0) {
            ans = a + b;
            a = b;
            b = ans;
            cout << ans << " ";
            n--;
        }
    }
};

int main() {
    int n;
    Fibo f;
    f.fibo(10);

    return 0;
}