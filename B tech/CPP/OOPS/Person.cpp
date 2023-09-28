#include <iostream>
#include <string>
using namespace std;
class person {
    public:
    string name;
    int age;
    float salary;

    // getting input from the user
    void get_data() {
        cout << "Enter the name of the person: ";
        cin >> name;
        cout << "Enter the age of Person: ";
        cin >> age;
        cout << "Enter the salary of Person: ";
        cin >> salary;
    };

    // printing the output
    void put_data() {
        cout << "Name of the person: " << name << "\n"; 
        cout << "Age of the person: " << age << "\n";
        cout << "Salary of the person: " << salary << "\n";
    }
};

int main () {
    person p1;
    p1.get_data();
    p1.put_data();
    return 0;
}