#include <iostream>
using namespace std;

class Polygon {
protected:
    int width;
    int height;

public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual double area() = 0;
};

class Rectangle : public Polygon {
public:
    double area() override { return (width * height); }
};

class Triangle : public Polygon {
public:
    double area() override { return (0.5 * width * height); }
};

int main() {
    Rectangle rect;
    Triangle tri;
    int width, height;
    cout << "Rectangle:" << endl;
    cout << "Enter the width = ";
    cin >> width;
    cout << "Enter the height = ";
    cin >> height;
    rect.set_values(width, height);
    cout << "Area of Rectangle = " << rect.area() << endl;
    cout << "\nTriangle:" << endl;
    cout << "Enter the width = ";
    cin >> width;
    cout << "Enter the height = ";
    cin >> height;
    tri.set_values(width, height);
    cout << "Area of Triangle = " << tri.area() << endl;

    return 0;
}