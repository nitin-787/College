#include <iostream>

using namespace std;

int main () {
    int* pointer;
    int value = 5;

    pointer = &value;

    cout << "The address of value is: " << pointer << endl;
    cout << "The value store at this address is: " << *pointer <<endl;

    // changing the data using the pointer
    *pointer = 7;
    cout << "The new value store at this address is: " << *pointer << endl;
    cout << "The new value store at this address is: " << value << endl;
    return 0;
}