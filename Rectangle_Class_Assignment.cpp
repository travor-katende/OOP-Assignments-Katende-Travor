#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Set width and length
    void setWidth(double w) { width = w; }
    void setLength(double l) { length = l; }

    // Get width and length
    double getWidth() { return width; }
    double getLength() { return length; }

    // Area = width * length
    double area() { return width * length; }

    // Perimeter = 2 * (width + length)
    double perimeter() { return 2 * (width + length); }
};

int main() {
    // Create the first rectangle and set its size
    Rectangle r1;
    r1.setWidth(5);
    r1.setLength(3);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    // Create a second rectangle and set its size
    Rectangle r2;
    r2.setWidth(10.5);
    r2.setLength(4);

    cout << endl << "Rectangle 2" << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Length: " << r2.getLength() << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    // Change the size of the first rectangle and show the new values
    r1.setWidth(8);
    r1.setLength(6);

    cout << endl << "Rectangle 1 after resizing" << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;
}
