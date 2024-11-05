#pragma once
#include "Shape.h"

// Rectangle class that represents a rectangle shape. Inherits from Shape.
class Rectangle : public Shape {
public:
    // Factory method to create a Rectangle instance. Takes length and height as input.
    static Shape* create(int length, int height) {
        return new Rectangle(length, height);
    }

    // Overrides draw method from Shape to print Rectangle drawing message.
    void draw() override {
        cout << "Drawing a Rectangle." << "\n";
    }

    // Calculates and returns the area of the rectangle.
    double area() override {
        return length * height;
    }

private:
    int length; // Length of the rectangle
    int height; // Height of the rectangle

    // Private constructor to enforce creation through the static create method.
    Rectangle(int length, int height) : length(length), height(height) {}
};
