// lab2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool isValidSNILS(const std::string& snils) {

    // Проверка на длину строки
    if (snils.length() != 11) {
        return false;
    }

    // Проверка, что все символы являются цифрами
    for (char c : snils) {
        if (!isdigit(c)) {
            return false;
        }
    }

    // Проверка, что в основной части номера нет более двух одинаковых цифр подряд
    for (int i = 0; i < 8; ++i) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
            return false;
        }
    }

    // Вычисление контрольного числа
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (snils[i] - '0') * (9 - i);
    }

    int controlNumber = std::stoi(snils.substr(9, 2));
    int calculatedControlNumber = 0;

    if (sum < 100) {
        calculatedControlNumber = sum;
    }
    else if (sum == 100 || sum == 101) {
        calculatedControlNumber = 0;
    }
    else {
        int remainder = sum % 101;
        if (remainder < 100) {
            calculatedControlNumber = remainder;
        }
        else {
            calculatedControlNumber = 0;
        }
    }

    return controlNumber == calculatedControlNumber;
}

int main() {
    system("chcp 1251");
    std::string snils;
    std::cout << "Введите номер СНИЛС: ";
    std::cin >> snils;

    if (isValidSNILS(snils)) {
        std::cout << "Номер СНИЛС валиден." << std::endl;
    }
    else {
        std::cout << "Номер СНИЛС невалиден." << std::endl;
    }

    return 0;
}