// lab3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int TriangleSquare(int x, int y, int z) {

    double p = (x + y + z)/2;
    double S = sqrt(p * (p - x) * (p - y) * (p - z));
    cout << "Площадь треугольника равна: " << S << endl;
    return 0;
}

int TriangleSquare(int x) {

    double S = (x * x * sqrt(3)) / 4;
    cout << "Площадь треугольника равна: " << S << endl;
    return 0;
}

int main()
{
    system("chcp 1251");
    cout << "Выберите тип треугольника: " << endl << "Нажмите 1 для разностороннего" << endl << "Нажмите 2 для равностороннего" << endl;
    int x;
    cin >> x;
    if (x==1)
    {
        cout << "Введите стороны разностороннего треугольника: " << endl;
        int x = 0; int y = 0; int z = 0;
            cin >> x >> y >> z;
            TriangleSquare(x, y, z);
    }
    else
    {
        cout << "Введите сторону равностороннего треугольника: " << endl;
        int x = 0;
        cin >> x;
        TriangleSquare(x);
    }
}
