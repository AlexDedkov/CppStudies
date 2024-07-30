#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;


Triangle::Triangle(Dot x, Dot y, Dot z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

double Triangle::calcLength(Dot x, Dot y) {
	double x2 = x.distanceTo(y);
	return x2;
}

double Triangle::calcPerimeter() {
	double x1 = calcLength(x, y);
	double y1 = calcLength(y, z);
	double z1 = calcLength(z, x);
	return x1 + y1 + z1;
}
double Triangle::calcSquare() {
	double x1 = calcLength(x, y);
	double y1 = calcLength(y, z);
	double z1 = calcLength(z, x);
	double s = (x1 + y1 + z1) / 2; 
	return sqrt(s * (s - x1) * (s - y1) * (s - z1));
}