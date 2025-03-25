#include <iostream>
#include "MyClass.h"

int main() {
    MyClass myObject(10, 2);
    std::cout << myObject.toString() << std::endl;

    int result = myObject.divide();
    if (result == -1) {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }
    else {
        std::cout << "Integer division x/y = " << result << std::endl;
    }

    return 0;
}