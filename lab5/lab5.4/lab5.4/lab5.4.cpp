// lab5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>  
#include <cstdlib>  

void performOperation(const char* operation, int num1, int num2) {
    if (strncmp(operation, "-a", 2) == 0) {
        std::cout << "��������� ��������: " << (num1 + num2) << "\n";
    }
    else if (strncmp(operation, "-m", 2) == 0) {
        std::cout << "��������� ���������: " << (num1 * num2) << "\n";
    }
    else {
        std::cerr << "������: ������������ ���� ��������. ����������� -a ��� �������� ��� -m ��� ���������.\n";
    }
}

int main() {
    system("chcp 1251");
    // ���� ������ � �������
    char operation[3];
    int num1, num2;

    std::cout << "������� �������� (-a ��� ��������, -m ��� ���������): ";
    std::cin >> operation;

    std::cout << "������� ������ �����: ";
    std::cin >> num1;

    std::cout << "������� ������ �����: ";
    std::cin >> num2;

    // �������� ������������ ����� ��������
    if (strncmp(operation, "-a", 2) != 0 && strncmp(operation, "-m", 2) != 0) {
        std::cerr << "������: ������������ ���� ��������. ����������� -a ��� �������� ��� -m ��� ���������.\n";
        return 1;
    }

    // ���������� ��������
    performOperation(operation, num1, num2);

    return 0;
}