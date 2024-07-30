#pragma once
#include "Dot.h"

class Triangle
{
private: 
	Dot x;
	Dot y;
	Dot z;
public:
	Triangle(Dot x, Dot y, Dot z);
	double calcLength(Dot x, Dot y);
	double calcPerimeter();
	double calcSquare();
};

