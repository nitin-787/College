#include <iostream>
using namespace std;

int main () {
    int arr[5];
    int* pointer;
    arr[0] = 2;

    // store the address 1 element in the array
    pointer = arr;

    cout << pointer << endl;
    cout << pointer + 1 << endl;
    cout << pointer + 2 << endl;
    cout << pointer + 3 << endl;
    cout << pointer + 4 << endl;
}