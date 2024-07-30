// Аггрегация

#include <iostream>
#include "Dot.h"
#include "Triangle.h"
using namespace std;

int main()
{
    Dot a(0, 0);
    Dot b(1, 0);
    Dot c(0, 1);

    Triangle triangle(a, b, c);

    cout << "Perimeter of the triangle: " << triangle.calcPerimeter() << endl;
    cout << "Area of the triangle: " << triangle.calcSquare() << endl;

    return 0;
}

