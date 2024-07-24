// lab7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> // Include cmath for sqrt
using namespace std;

struct QuadraticEquation {
    double x1;
    double x2;

    void Sol(double a, double b, double c, double D) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
    }
};

QuadraticEquation Solution(double a, double b, double c);

int main() {
    system("chcp 1251");
    double a;
    double b;
    double c;

    cout << "Введите параметры уравнения :" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    QuadraticEquation result = Solution(a, b, c);

    cout << "Корни уравнения: x1 = " << result.x1 << ", x2 = " << result.x2 << endl;

    return 0;
}

QuadraticEquation Solution(double a, double b, double c) {

    QuadraticEquation equation;
    double D = (b * b) - (4 * a * c);

    if (D < 0) {
        cout << "Дискриминант меньше нуля. Уравнение не имеет вещественных корней." << endl;
        equation.x1 = equation.x2 = NAN; // Return NaN if roots are not real
    }
    else {
        equation.Sol(a, b, c, D);
    }

    return equation;
}

