// exception handling

#include <iostream>
using namespace std;

int main() {
    int a, b;
    float c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b != 0) {
            c = a / b;
            cout << "Division = " << c << endl;
        } else {
            throw(b);
        }
    }
    catch (int e) {
        cout << "Division by zero" << endl;
    }
    return 0;
}