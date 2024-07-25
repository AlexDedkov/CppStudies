// lab9.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
    system("chcp 1251");

    double x = 3;
    double y = 4;
    double z = 5;
    double b = 12;

    try
    {
        Triangle t1(x, y, z);
        t1.triangleSquare();

        Triangle t2(x, y, b);
        t2.triangleSquare();
    }
    catch (IncorrectTriangleError& error)
    {
        cout << "Žøèáêà!" << endl;
        error.printMessage();
        return 1;
    }
    return 0;
}


