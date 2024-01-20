#include <iostream>

using namespace std;

// In C++, the virtual keyword is used to declare a function in a base class that can be overridden by a function with the same signature in a derived class. This enables polymorphism, allowing the program to determine at runtime which version of the function to call based on the actual type of the object.

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }

    virtual double calculateArea() const {
        cout << "Calculating Area of Shape" << endl;
        return 0.0;
    }
};

// Derived class overriding the draw function
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }

    double calculateArea() const override {
        cout << "Calculating Area of Circle" << endl;
        return 3.14 * radius * radius;
    }

private:
    double radius = 5.0;
};

// Another derived class overriding the calculateArea function
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }

    double calculateArea() const override {
        cout << "Calculating Area of Rectangle" << endl;
        return length * width;
    }

private:
    double length = 6.0;
    double width = 4.0;
};

int main() {
    // Circle circle;
    Rectangle rectangle;

    // Polymorphic behavior using pointers
    Shape* shape1 = new Circle();
    Shape* shape2 = &rectangle;

    // Calling overridden functions
    shape1->draw();
    cout << "Area: " << shape1->calculateArea() << endl;

    shape2->draw();
    cout << "Area: " << shape2->calculateArea() << endl;

    return 0;
}
