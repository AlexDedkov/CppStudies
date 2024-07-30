// Композиция
#include <iostream>
#include "Dot.h"
#include "Triangle.h"
using namespace std;

int main()
{

    Triangle triangle(0,0,1,0,0,1);

    cout << "Perimeter of the triangle: " << triangle.calcPerimeter() << endl;
    cout << "Area of the triangle: " << triangle.calcSquare() << endl;

    return 0;
}

