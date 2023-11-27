#include <iostream>
using namespace std;

class A {
    int data1, data2;
    char* name;

public:
    A(int a, int b = 10, char* n = "Nitin") : data1(a), data2(b), name(n) {
        cout << "Constructor ....\n" << endl;
    }

    friend void display(A obj);
};

void display(A obj) {
    cout << "Value of Data1 in obj = " << obj.data1 << endl;
    cout << "Value of Data2 in obj = " << obj.data2 << endl;
    cout << "Value Name in obj = " << obj.name << endl;
}

int main() {
    display(100);
    return 0;
}


PS F:\College\B tech\CPP\OOPS> cd "f:\College\B tech\CPP\OOPS\" ; if ($?) { g++ explictConstructor.cpp -o explictConstructor } ; if ($?) { .\explictConstructor }     
Constructor ....

Value of Data1 in obj = 100
Value of Data2 in obj = 10 
Value Name in obj = Nitin 