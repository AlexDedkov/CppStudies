#include "Time.h"
#include <iostream>

int main() {
    try {
        Time t1(120, 65, 25);
        Time t2(30, 20, 2);

        t1.displayTime();
        t2.displayTime();

        Time t3 = t1 + t2;
        t3.displayTime();

        Time t4 = t1 - t2;
        t4.displayTime();

        Time t5 = t1 + 75.0;
        t5.displayTime();

        Time t6 = 45.0 + t2;
        t6.displayTime();

        if (t1 < t2) {
            std::cout << "t1 is less than t2" << std::endl;
        }
        else {
            std::cout << "t1 is not less than t2" << std::endl;
        }

        if (t1 == t2) {
            std::cout << "t1 is equal to t2" << std::endl;
        }
        else {
            std::cout << "t1 is not equal to t2" << std::endl;
        }

    }
    catch (const Time::TimeError& e) {
        e.printMessage();
    }

    return 0;
}
