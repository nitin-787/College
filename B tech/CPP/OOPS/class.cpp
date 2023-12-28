#include <iostream>
using namespace std;

class Human {
public:
    string name;
    int age;
    float height;

    bool Running(bool isRunning) {
        return isRunning;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << name << " is running: " << Running(false) << endl;
    }
};

int main() {
    Human human1;

    human1.name = "Nitin";
    human1.age = 21;
    human1.height = 5.9;
    
    human1.showData();

    return 0;
}
