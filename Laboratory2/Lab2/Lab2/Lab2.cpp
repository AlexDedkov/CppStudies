// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    //2.1
    int p;
    cout << "Введите число: ";
    cin >> p;

    if (p <= 1) {
        cout << p << " не является простым числом." << endl;
        return 0;
    }

    for (int d = 2; d <= p / 2; ++d) {
        if (p % d == 0) {
            cout << p << " не является простым числом." << endl;
            return 0;
        }
    }

    cout << p << " является простым числом." << endl;
    return 0;


}
