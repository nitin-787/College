#include <iostream>
using namespace std;

void func(int &numRef) {
    numRef++;
    cout << numRef << endl;
}

int main() {
    int num = 5;
    func(num);
    return 0;
}