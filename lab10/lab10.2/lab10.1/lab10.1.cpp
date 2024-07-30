// Композиция
#include <iostream>
#include "Dot.h"
#include "Triangle.h"
using namespace std;

int main()
{

    Triangle triangle(Dot(0,0),Dot(1,0),Dot(0,1));

    cout << "Perimeter of the triangle: " << triangle.calcPerimeter() << endl;
    cout << "Area of the triangle: " << triangle.calcSquare() << endl;

    return 0;
}

