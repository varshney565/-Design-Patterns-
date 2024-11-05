#include "Circle.h"
#include "Rectangle.h"
#include "ShapeFactory.h"

int main() {
    // Register Circle with key 0
    ShapeFactory<Shape, int, int>::registerType(0, &Circle::create);
    // Register Rectangle with key 1
    ShapeFactory<Shape, int, int, int>::registerType(1, &Rectangle::create);

    // Create Circle with radius 10 and display its details
    std::unique_ptr<Shape> obj0 = ShapeFactory<Shape, int, int>::create(0, 10);
    if (obj0) {
        obj0->draw();
        cout << "Area: " << obj0->area() << "\n";
    }

    // Create Rectangle with length 3 and height 4 and display its details
    std::unique_ptr<Shape> obj1 = ShapeFactory<Shape, int, int, int>::create(1, 3, 4);
    if (obj1) {
        obj1->draw();
        cout << "Area: " << obj1->area() << "\n";
    }

    return 0;
}
