#include <iostream>
using namespace std;


float marks(float phy, float chem, float maths) {
    float marks = (phy + maths + chem) / 300 * 100;
    return marks;
}

int main () {
    float phy, chem, maths;
    cout << "Enter marks in Phy, chem and maths: ";
    cin >> phy;
    cin >> chem;
    cin >> maths;
    cout << marks(phy, chem, maths);
    return 0;
}