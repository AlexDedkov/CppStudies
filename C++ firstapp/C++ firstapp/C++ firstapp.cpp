// C++ firstapp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	cout.precision(3);
	system("chcp 1251");
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	double x3 = 0;
	double y3 = 0;
	double x4 = 0;
	double y4 = 0;
	double x5 = 0;
	double y5 = 0;

	cout << "¬ведите координаты п€тиугольника в формате x y:\n";

	cout << "¬ведите x1 y1: ";
	cin >> x1 >> y1;

	cout << "¬ведите x2 y2: ";
	cin >> x2 >> y2;

	cout << "¬ведите x3 y3: ";
	cin >> x3 >> y3;

	cout << "¬ведите x4 y4: ";
	cin >> x4 >> y4;

	cout << "¬ведите x5 y5: ";
	cin >> x5 >> y5;
	double square = 0.5 * abs((x1 * y2) + (x2 * y3) + (x3 * y4) + (x4 * y5) + (x5 * y1) - (x2 * y1) - (x3 * y2) - (x4 * y3) - (x5 * y4) - (x1 * y5));
	cout << "ѕлоащадь п€тиугольника равна: " << square << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
