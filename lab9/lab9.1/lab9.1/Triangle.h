#pragma once
#include <cmath>
#include "IncorrectTriangle.h"
using namespace std;

class Triangle
{
 private:
	 double a{ 0 };
	 double b{ 0 };
	 double c{ 0 };

 public:
	 Triangle() = default;

	 Triangle (double x, double y, double z) {

		 if ( z > x + y || y > x + z || x > y + z)
		 {
			 throw IncorrectTriangleError();
		 }

		 a = x;
		 b = y;
		 c = z;
	 }

	 Triangle (double x) {
		 a = b = c = x;
	 }

	 void triangleSquare() {

		 double p = 0.5 * (a + b + c);

		 double S = sqrt(p * (p - a) * (p - b) * (p - c));

		 cout << "Площадь треугольника равна: " << S << endl;
	 }
};

