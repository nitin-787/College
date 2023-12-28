#include <iostream>
using namespace std;

void name1(string name) {
    cout << name << endl;
}

void name1(string name, string surname) {
    cout << name << " " << surname << endl;
}

int main () {
    name1("nitin", "sharma");
    return 0;
}