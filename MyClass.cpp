#include "MyClass.h"

MyClass::MyClass(int xValue, int yValue) : x(xValue), y(yValue) {}

std::string MyClass::toString() const {
    return "MyClass(x: " + std::to_string(x) + ", y: " + std::to_string(y) + ")";
}

int MyClass::divide() const {
    if (y == 0) {
        return -1;
    }
    return x / y;
}