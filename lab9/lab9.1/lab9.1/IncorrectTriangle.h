#pragma once
#include <iostream>
#include <string>
using namespace std;
class IncorrectTriangleError
{
 public:
	 IncorrectTriangleError ():message ("Неправильный треугольник!") {}
	 void printMessage () const { cout << message << endl; }
private:
	string message;
};

