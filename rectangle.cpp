#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void draw() {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    float length, breadth;

    void area() {
        cout << "Area of Rectangle: " << length * breadth << endl;
        // Formula: Area = length * breadth
    }
};

int main() {
    Rectangle rect;
    rect.length = 5.0;
    rect.breadth = 3.0;

    rect.draw(); // Inherited method from Shape class
    rect.area(); // Method from Rectangle class

    return 0;
}