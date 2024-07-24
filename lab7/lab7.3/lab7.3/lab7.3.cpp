// lab7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

// Функция для решения квадратного уравнения
tuple<double, double, bool> solveQuadraticEquation(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            return make_tuple(0.0, 0.0, false);
        }
        else {
            double x = -c / b;
            return make_tuple(x, 0.0, true);
        }
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        return make_tuple(x1, x2, true);
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        return make_tuple(x, 0.0, true);
    }
    else {
        return make_tuple(0.0, 0.0, false);
    }
}

int main() {

    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Вызов функции и получение результатов

    tuple<double, double, bool> result = solveQuadraticEquation(a, b, c);
    double x1 = get<0>(result);
    double x2 = get<1>(result);
    bool hasRoots = get<2>(result);

    // Проверка наличия корней и вывод результатов
    if (hasRoots) {
        cout << "Roots found: ";
        cout << "x1 = " << x1 << " ";
        if (x2 != 0.0 || (a == 0 && b != 0)) // Проверка второго корня
            cout << "x2 = " << x2 << " ";
        cout << endl;
    }
    else {
        cout << "No real roots found." << endl;
    }

    return 0;
}
