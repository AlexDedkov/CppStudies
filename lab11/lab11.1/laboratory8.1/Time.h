#pragma once
#include <iostream>
#include <string>

class Time {
private:
    int seconds{ 0 };
    int minutes{ 0 };
    int hours{ 0 };

    void normalize();

public:
    Time() = default;
    Time(int timeSeconds, int timeMinutes, int timeHours);

    void setTime(int timeSeconds, int timeMinutes, int timeHours);
    void displayTime() const;
    Time addTime(const Time& other) const;

    // Перегрузка операторов
    Time operator+(const Time& other) const;
    Time operator-(const Time& other) const;
    Time operator+(double extraSeconds) const;
    bool operator<(const Time& other) const;
    bool operator==(const Time& other) const;

    class TimeError {
    public:
        TimeError();
        void printMessage() const;
    private:
        std::string message;
    };
};

// Перегрузка оператора сложения для double + Time
Time operator+(double extraSeconds, const Time& time);
