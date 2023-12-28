#include <iostream>

using namespace std;

class MyClass {
    private:
        int privateData;
    
    public:
        MyClass(int data): privateData(data) {}

    friend showPrivateData(const MyClass &obj) {}

};

void showPrivateData(const MyClass &obj) {
    cout << "Print private data: " << obj.data << endl;
}

int main () {
    MyClass myObj(43);
    showPrivateData();
    
    return 0;
}