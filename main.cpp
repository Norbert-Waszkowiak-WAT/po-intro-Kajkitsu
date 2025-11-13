#include <iostream>
using namespace std;

class Point {
public:
    int x;
    int y;
    
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p2;
    p2.x = 5;
    p2.y = 15;
    p2.print();  // (5, 15)
    
    return 0;
}