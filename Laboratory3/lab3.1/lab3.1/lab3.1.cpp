// lab3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidSNILS(const std::string& snils) {
    // ������ ��� �������� ������ ����
    std::string digitsOnly;
    for (char c : snils) {
        if (isdigit(c)) {
            digitsOnly += c;
        }
        else if (c != ' ' && c != '-') {
            // ���� �������� ����� ������ ������ ����� ������� � ������, ���������� false
            return false;
        }
    }

    // �������� �� ����� ������ � �������
    if (digitsOnly.length() != 11) {
        return false;
    }

    // ��������, ��� � �������� ����� ������ ��� ����� ���� ���������� ���� ������
    for (int i = 0; i < 8; ++i) {
        if (digitsOnly[i] == digitsOnly[i + 1] && digitsOnly[i] == digitsOnly[i + 2]) {
            return false;
        }
    }

    // ���������� ������������ �����
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (digitsOnly[i] - '0') * (9 - i);
    }

    int controlNumber = std::stoi(digitsOnly.substr(9, 2));
    int calculatedControlNumber = 0;

    if (sum < 100) {
        calculatedControlNumber = sum;
    }
    else if (sum > 101) {
        int remainder = sum % 101;
        if (remainder == 100 || remainder == 101) {
            calculatedControlNumber = 0;
        }
        else {
            calculatedControlNumber = remainder;
        }
    }
    else {
        calculatedControlNumber = 0;
    }

    return controlNumber == calculatedControlNumber;
}

int main() {
    system("chcp 1251");
    std::string snils;
    std::cout << "������� ����� �����: ";
    std::getline(std::cin, snils); // ���������� getline ��� ������ ������ � ��������� � ��������

    if (isValidSNILS(snils)) {
        std::cout << "����� ����� �������." << std::endl;
    }
    else {
        std::cout << "����� ����� ���������." << std::endl;
    }

    return 0;
}
