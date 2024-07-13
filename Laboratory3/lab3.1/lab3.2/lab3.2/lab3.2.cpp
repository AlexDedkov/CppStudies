// lab3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void cubicNormal(double a) {
	double b = pow(a, 1.0 / 3);
	cout << "Cubic root of a =" << b << endl;
}

void cubicIterat(double a) {

    double yi = a, // ��������� �������� y
        yi1 = 0; // �������� yi+1

    while (true)
    {
        yi1 = 0.5 * (yi + 3 * a / (2 * yi * yi + a / yi)); // ������������ ������� ���������� ����� �����������

        if (abs(yi1 - yi) < pow(10.0, -5.0)) // ������� ��������� ��������
            break; // ����� �� �����

        yi = yi1; // ��������� ������� �������� y
    }

    cout << "Cubic root of a =" << yi << endl;
}

int main()
{
	int x = 0;
	double a = 0;
	cout << "Enter a :";
	cin >> a;
	cubicNormal(a);
    cubicIterat(a);
}
