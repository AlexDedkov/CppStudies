#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;


Triangle::Triangle(double x1, double x2, double y1, double y2, double z1, double z2) {
	this->x = Dot(x1, x2);
	this->y = Dot(y1, y2);
	this->z = Dot(z1, z2);
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