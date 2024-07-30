
#include "Point.h"
#include <cmath>
using namespace std;

// Конструктор
Point::Point(double x, double y) : x(x), y(y) {}

// Метод для расчета расстояния до центра координат
double Point::distanceToOrigin() const {
    return std::sqrt(x * x + y * y);
}

// Перегрузка оператора <
bool Point::operator<(const Point& other) const {
    return this->distanceToOrigin() < other.distanceToOrigin();
}

// Перегрузка оператора <<
ostream& operator<<(std::ostream& os, const Point& point) {
    os << "Point(" << point.x << ", " << point.y << ")";
    return os;