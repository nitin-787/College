#include<iostream>
using namespace std;

class time {
    int hours, minutes;
public:
    time(int h, int m) {
        hours = h;
        minutes = m;
    }
    int getm() {
        int totalm = hours * 60 + minutes;
        return totalm;
    }
    void display() {
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
    }
};

class minutes {
    int min;
public:
    minutes() {
        min = 0;
    }
    void operator=(class time t) {
        min = t.getm();
    }
    void show() {
        cout << "Total Minutes: " << min << endl;
    }
};

int main() {
    time t1(2, 30);
    t1.display();
    minutes m1;
    m1 = t1;
    m1.show();
    return 0;
}