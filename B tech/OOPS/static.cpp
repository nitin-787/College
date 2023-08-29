#include <iostream>
using namespace std;

class demo {
    int x, y;
    static int z;
    public:
        void get_data(int a, int b) {
            x = a,
            y = b;
            z = z+1;
        }
        void put_data() {
            // printing the data
            cout << "x = " <<x<<" y = " <<y<< " z = " <<z<<endl;
        }
        
};

int demo::z;

int main() {
    demo aa, bb;
    // calling the get data fuction from the demo class
    aa.get_data(5,10);
    bb.get_data(20,30);
    // calling the put data fuction from the demo class
    aa.put_data();
    bb.put_data();
    return 0;
}