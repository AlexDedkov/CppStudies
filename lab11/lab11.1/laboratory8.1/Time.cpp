#include "Time.h"
#include <iostream>
#include <string>

using namespace std;

void Time::normalize() {
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }
    if (hours >= 24) {
        hours %= 24;
    }
}

// �����������
Time::Time(int timeSeconds, int timeMinutes, int timeHours) {
    setTime(timeSeconds, timeMinutes, timeHours);
    normalize();
}

// ����� setTime
void Time::setTime(int timeSeconds, int timeMinutes, int timeHours) {
    if (timeSeconds < 0 || timeMinutes < 0 || timeHours < 0) {
        throw TimeError();
    }
    seconds = timeSeconds;
    minutes = timeMinutes;
    hours = timeHours;
}

// ����� displayTime
void Time::displayTime() const {
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

// ����� addTime
Time Time::addTime(const Time& other) const {
    int totalSeconds = seconds + other.seconds;
    int totalMinutes = minutes + other.minutes;
    int totalHours = hours + other.hours;

    return Time(totalSeconds, totalMinutes, totalHours);
}

// ���������� ��������� +
Time Time::operator+(const Time& other) const {
    int totalSeconds = seconds + other.seconds;
    int totalMinutes = minutes + other.minutes;
    int totalHours = hours + other.hours;
    Time result(totalSeconds, totalMinutes, totalHours);
    result.normalize();
    return result;
}

// ���������� ��������� -
Time Time::operator-(const Time& other) const {
    int totalSeconds = seconds - other.seconds;
    int totalMinutes = minutes - other.minutes;
    int totalHours = hours - other.hours;

    // �������������� ������������� �������� � ���������� ���
    if (totalSeconds < 0) {
        totalSeconds += 60;
        totalMinutes--;
    }
    if (totalMinutes < 0) {
        totalMinutes += 60;
        totalHours--;
    }
    if (totalHours < 0) {
        totalHours += 24;
    }

    Time result(totalSeconds, totalMinutes, totalHours);
    result.normalize();
    return result;
}

// ���������� ��������� + ��� Time � double
Time Time::operator+(double extraSeconds) const {
    int totalSeconds = seconds + static_cast<int>(extraSeconds);
    int totalMinutes = minutes;
    int totalHours = hours;
    Time result(totalSeconds, totalMinutes, totalHours);
    result.normalize();
    return result;
}

// ���������� ��������� < ��� ���������
bool Time::operator<(const Time& other) const {
    if (hours < other.hours) return true;
    if (hours > other.hours) return false;
    if (minutes < other.minutes) return true;
    if (minutes > other.minutes) return false;
    return seconds < other.seconds;
}

// ���������� ��������� == ��� ���������
bool Time::operator==(const Time& other) const {
    return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
}

// ���������� ��������� + ��� double � Time
Time operator+(double extraSeconds, const Time& time) {
    return time + extraSeconds;
}

// ����������� TimeError
Time::TimeError::TimeError() : message("������������ ������ �������!") {}

// ����� printMessage ��� TimeError
void Time::TimeError::printMessage() const {
    cout << message << endl;
}
