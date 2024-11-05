#pragma once
#include "Shape.h"

// Circle class that represents a circle shape. Inherits from Shape.
class Circle : public Shape {
public:
    // Factory method to create a Circle instance. Takes radius as input.
    static Shape* create(int radius) {
        return new Circle(radius);
    }

    // Overrides draw method from Shape to print Circle drawing message.
    void draw() override {
        cout << "Drawing a Circle." << "\n";
    }

    // Calculates and returns the area of the circle.
    double area() override {
        return 3.14 * radius * radius;
    }

private:
    int radius; // Radius of the circle

    // Private constructor to enforce creation through the static create method.
    Circle(int radius) : radius(radius) {}
};
