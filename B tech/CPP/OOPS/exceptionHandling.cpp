// exception handling

#include <iostream>
using namespace std;

int main () {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b != 0) {
            float c = a / b;
            cout << "Ans: " << c <<endl;
        } else {
            throw(b);
        }
    }
    catch (int e) {
        cout << "Divide by zero" << endl;
    }
    return 0;
}