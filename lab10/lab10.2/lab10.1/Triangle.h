#pragma once
#include "Dot.h"

class Triangle
{
private:
	double x1;
	double x2;
	double y1;
	double y2;
	double z1;
	double z2;
	Dot x;
	Dot y;
	Dot z;

public:
	Triangle(double x1,double x2,double y1,double y2, double z1,double z2);
	double calcLength(Dot x, Dot y);
	double calcPerimeter();
	double calcSquare();
};

