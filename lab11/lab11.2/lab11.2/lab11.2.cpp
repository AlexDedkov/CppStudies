// lab11.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include "Point.h"

int main()
{
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для класса Point

    for (const auto& point : v)
        std::cout << point << '\n'; // требуется перегрузка оператора << для класса Point

    return 0;
}

