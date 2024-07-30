

#include <iostream>

class Point {
private:
    double x, y;

public:
    Point(double x, double y);

    double distanceToOrigin() const;

    bool operator<(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

