// lab7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;

    void timeInSeconds() {
        int FullTime = (hours * 60 * 60) + (minutes * 60) + seconds;
        cout << "������ ����� � ��������: " << FullTime << " ������" << endl;
    }

    Time add(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + other.hours + result.minutes / 60;
        result.minutes %= 60;
        result.hours %= 24; // assuming we want to wrap around to 0 after 23 hours
        return result;
    }

    Time subtract(const Time& other) const {
        Time result;
        int total_seconds_1 = hours * 3600 + minutes * 60 + seconds;
        int total_seconds_2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
        int total_seconds_result = total_seconds_1 - total_seconds_2;

        if (total_seconds_result < 0) {
            total_seconds_result += 24 * 3600; // wrap around for negative time differences
        }

        result.hours = total_seconds_result / 3600;
        result.minutes = (total_seconds_result % 3600) / 60;
        result.seconds = total_seconds_result % 60;

        return result;
    }

};

int main()
{
    system("chcp 1251");

    Time time1, time2;

    cout << "������� ��������� ������ ���������: " << endl;
    bool validInput = false;

    // Input hours for time1
    while (!validInput) {
        cout << "����: ";
        cin >> time1.hours;
        if (cin.fail() || time1.hours < 0 || time1.hours > 23) {
            cout << "������������ ������! ����������, ������� ���� � ��������� �� 0 �� 23." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
        }
        else {
            validInput = true;
        }
    }

    validInput = false;
    // Input minutes for time1
    while (!validInput) {
        cout << "������: ";
        cin >> time1.minutes;
        if (cin.fail() || time1.minutes < 0 || time1.minutes > 59) {
            cout << "������������ ������! ����������, ������� ������ � ��������� �� 0 �� 59." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
        }
        else {
            validInput = true;
        }
    }

    validInput = false;
    // Input seconds for time1
    while (!validInput) {
        cout << "�������: ";
        cin >> time1.seconds;
        if (cin.fail() || time1.seconds < 0 || time1.seconds > 59) {
            cout << "������������ ������! ����������, ������� ������� � ��������� �� 0 �� 59." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
        }
        else {
            validInput = true;
        }
    }

    cout << "������� ��������� ������ ���������: " << endl;

    validInput = false;
    // Input hours for time2
    while (!validInput) {
        cout << "����: ";
        cin >> time2.hours;
        if (cin.fail() || time2.hours < 0 || time2.hours > 23) {
            cout << "������������ ������! ����������, ������� ���� � ��������� �� 0 �� 23." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
        }
        else {
            validInput = true;
        }
    }

    validInput = false;
    // Input minutes for time2
    while (!validInput) {
        cout << "������: ";
        cin >> time2.minutes;
        if (cin.fail() || time2.minutes < 0 || time2.minutes > 59) {
            cout << "������������ ������! ����������, ������� ������ � ��������� �� 0 �� 59." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
        }
        else {
            validInput = true;
        }
    }

    validInput = false;
    // Input seconds for time2
    while (!validInput) {
        cout << "�������: ";
        cin >> time2.seconds;
        if (cin.fail() || time2.seconds < 0 || time2.seconds > 59) {
            cout << "������������ ������! ����������, ������� ������� � ��������� �� 0 �� 59." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
        }
        else {
            validInput = true;
        }
    }

    Time sum = time1.add(time2);
    Time difference = time1.subtract(time2);

    // Display the entered time
    cout << "��������� ����� ��������� 1: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
    cout << "��������� ����� ��������� 2: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    time1.timeInSeconds();
    time2.timeInSeconds();

    cout << "����� �������: " << sum.hours << ":" << sum.minutes << ":" << sum.seconds << endl;
    cout << "������� �������: " << difference.hours << ":" << difference.minutes << ":" << difference.seconds << endl;


    return 0;
}