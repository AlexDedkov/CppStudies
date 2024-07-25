// laboratory8.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h" // Correct inclusion of the Time header file

using namespace std;

int main()
{
    system("chcp 1251");
    cout << "Введите время: " << endl;
    int seconds;
    int minutes;
    int hours;
    cout << "Секунды: ";
    cin >> seconds;
    cout << "Минуты: ";
    cin >> minutes;
    cout << "Часы: ";
    cin >> hours;

    try
    {
        Time t1(seconds, minutes, hours);
        t1.displayTime();

        Time t2(65, 65, 1);
        t2.displayTime();

        Time t3 = t1.addTime(t2);
        t3.displayTime();

        Time t4;
        t4.displayTime();
    }
    catch (const Time::TimeError& e)
    {
        e.printMessage();
        return 1;
    }


    return 0;
}