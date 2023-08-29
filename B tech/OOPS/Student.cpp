#include <iostream>
using namespace std;

class Students {
    static int z; 
    int age;
    string name;

    public:
        void get_data(string n, int a) {
            name = n;
            age = a;
            z++;
        }
        void put_data() {
            // printing the name and the age of the student and total number of students
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Total number of students: " << z << endl;
        }
};

int Students::z;

int main() {
    Students aa, bb;
    aa.get_data("nitin", 20);
    bb.get_data("zoro", 22);
    aa.put_data();
    bb.put_data();
    return 0;
}
