#pragma once
#include <iostream>
using namespace std;

class Time
{
private:

    int seconds{ 0 };
    int minutes{ 0 };
    int hours{ 0 };

public:

    Time() = default;

    Time(int timeSeconds, int timeMinutes, int timeHours) {
        // Normalize the seconds
        while (timeSeconds >= 60) {
            timeMinutes++;
            timeSeconds -= 60;
        }

        // Normalize the minutes
        while (timeMinutes >= 60) {
            timeHours++;
            timeMinutes -= 60;
        }

        // Normalize the hours
        if (timeHours >= 24) {
            timeHours %= 24;
        }

        setTime(timeSeconds, timeMinutes, timeHours);
    }

    void setTime(int timeSeconds, int timeMinutes, int timeHours) {

        if (timeSeconds || timeMinutes || timeHours < 0)
        {
            throw TimeError();
        }
        seconds = timeSeconds;
        minutes = timeMinutes;
        hours = timeHours;
    }


    void displayTime() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time addTime(const Time& other) const {
        int totalSeconds = seconds + other.seconds;
        int totalMinutes = minutes + other.minutes;
        int totalHours = hours + other.hours;

        return Time(totalSeconds, totalMinutes, totalHours);
    }
    class TimeError {
      public:
          TimeError():message ("Неправильынй формат времени!") {}
          void printMessage() const { cout << message << endl; }
      private:
        string message;
    };
};