#pragma once
#include <iostream>
using namespace std;

// Shape is an abstract base class that defines the interface for different shapes.
// It includes two pure virtual methods: draw and area, to be implemented by derived classes.
class Shape {
public:
    virtual void draw() = 0; // Pure virtual method to draw the shape.
    virtual double area() = 0; // Pure virtual method to calculate the area of the shape.
    virtual ~Shape() = default; // Virtual destructor for proper cleanup of derived objects.
};
