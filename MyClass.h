#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass {
private:
    int x;
    int y;

public:
    MyClass(int xValue, int yValue);
    std::string toString() const;
    int divide() const;
};

#endif // MYCLASS_H