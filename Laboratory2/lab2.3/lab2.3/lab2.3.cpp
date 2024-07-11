// lab2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

void giveChange(int amount) {
    // �������� ����� � ��������� �������
    std::vector<int> coins = { 10, 5, 2, 1 };

    // ������ ��� �������� ���������� ����� ������� ��������
    std::vector<int> count(coins.size(), 0);

    // ���������� ��� ������, ������� � ����������
    for (size_t i = 0; i < coins.size(); ++i) {
        if (amount >= coins[i]) {
            count[i] = amount / coins[i]; // ������� ��� ����� ����� ������� ������
            amount = amount % coins[i];   // ���������� �����
        }
    }

    // ������� ���������
    for (size_t i = 0; i < coins.size(); ++i) {
        if (count[i] > 0) {
            std::cout << coins[i] << " ���: " << count[i] << " ��." << std::endl;
        }
    }
}

int main() {
    system("chcp 1251");
    int amount;
    std::cout << "������� �����: ";
    std::cin >> amount;

    giveChange(amount);

    return 0;
}
