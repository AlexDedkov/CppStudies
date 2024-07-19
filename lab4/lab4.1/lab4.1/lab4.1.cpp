// lab4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include <iostream>
#include <cmath>

int Myroot(double, double, double, double&, double&);



int main() {
    system("chcp 1251");
    double a, b, c;
    double x1, x2;

    // Ввод коэффициентов уравнения
    std::cout << "Введите коэффициенты a, b и c: ";
    std::cin >> a >> b >> c;

    int result = Myroot(a, b, c, x1, x2);

    if (result == 1) {
        std::cout << "Корни уравнения x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (result == 0) {
        std::cout << "Корень уравнения один x1 = x2 = " << x1 << std::endl;
    }
    else {
        std::cout << "Корней уравнения нет" << std::endl;
    }

    return 0;
}

// Функция для вычисления корней квадратного уравнения
int Myroot(double a, double b, double c, double& x1, double& x2) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        return 1;
    }
    else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);
        return 0;
    }
    else {
        return -1;
    }
}