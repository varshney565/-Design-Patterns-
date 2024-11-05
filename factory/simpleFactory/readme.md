# Simple Factory

## Project Structure

- **Shape.h**: Defines the base abstract class `Shape`, which includes virtual methods `draw` and `area`.
- **Circle.h**: Implements a `Circle` class derived from `Shape`, representing a circle with a specific radius.
- **Rectangle.h**: Implements a `Rectangle` class derived from `Shape`, representing a rectangle with a length and height.
- **ShapeFactory.h**: Defines a template-based factory for registering and creating shape objects based on a unique key.
- **Application.cpp**: Example application that demonstrates the use of `ShapeFactory` to create and manipulate shape objects.

## Code Overview

### Shape.h

Defines an abstract base class, `Shape`, that serves as the interface for different shapes. This class includes two pure virtual methods:

- `draw`: Outputs the shape’s drawing.
- `area`: Calculates and returns the shape’s area.

### Circle.h

The `Circle` class implements the `Shape` interface and includes:

- A static factory method, `create`, to instantiate a `Circle` with a specified radius.
- Overrides of `draw` and `area` methods.

### Rectangle.h

The `Rectangle` class implements the `Shape` interface and includes:

- A static factory method, `create`, to instantiate a `Rectangle` with specified length and height.
- Overrides of `draw` and `area` methods.

### ShapeFactory.h

A template-based factory class, `ShapeFactory`, manages registration and creation of shape instances based on a unique key. The template parameters include:

- `Base`: The base type (e.g., `Shape`).
- `Key`: The type used to uniquely identify shape types.
- `Args...`: Variadic template for constructor arguments.

### Application.cpp

The `Application` file demonstrates how to use the `ShapeFactory`:

1. Registers `Circle` and `Rectangle` types with specific keys.
2. Uses the factory to create instances of each shape based on the keys, outputs their drawings, and calculates areas.

## Usage

### Compilation

To compile the project:

```bash
g++ Application.cpp -o shape_factory
```

After compiling, run the program with
```bash
./shape_factory
```

### Sample Output

```
Drawing a Circle.
Area: 314
Drawing a Rectangle.
Area: 12
```
