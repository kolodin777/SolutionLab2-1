#include <iostream>
#include "MyClass.h"

int main() {
    int x, y;
    std::cout << "Enter two numbers:";
    std::cin >> x >> y;
    MyClass myObject(x, y);
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
