#include <iostream> 
using namespace std;
class AreaofRectangle {
    private:
        const int length;
        const int breadth;
    public:
        AreaofRectangle(int l, int b): length(l), breadth(b) {}
        void area() {
            int ans = length * breadth;
            cout << ans << endl; 
        }
        void perimeter() {
            int ans = 2 * (length + breadth);
            std::cout << ans;
        }
};

int main () {
    AreaofRectangle r(10,5);
    r.area();
    r.perimeter();
    return 0;
}