#include <iostream>

using namespace std;

class Wall {
private:
    int length;
    int width;

public:
    // Default constructor
    Wall() : length(5) {
        cout << "Length of the wall is: " << length << endl;
    }

    // Parameterized constructor
    Wall(int len, int wid) : length(len), width(wid) {}

    Wall(Wall &obj) {
        length = obj.length;
        width = obj.width;
    }

    int CalculateArea() {
        return length * width;
    }
};

int main() {
    Wall wall;
    Wall wall1(7, 9);
    Wall wall2 = wall;
    cout << "Area of wall: " << wall.CalculateArea() << endl;
    cout << "Area of wall: " << wall2.CalculateArea() << endl;


    return 0;
}
