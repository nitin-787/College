#include <iostream>
using namespace std;

// Define a user-defined data type
class MyCustomType {
public:
    MyCustomType(int value) : data(value) {}
    
    int getData() {
        return data;
    }

private:
    int data;
};

int main() {
    // Convert an integer to MyCustomType
    int integer_value = 42;
    MyCustomType custom_object(integer_value);
    cout << "Converted integer: " << custom_object.getData() << endl;

    // Convert a string to MyCustomType
    string string_value = "Hello, World!";
    MyCustomType custom_string_object(string_value.length());
    cout << "Converted string length: " << custom_string_object.getData() << endl;

    return 0;
}
