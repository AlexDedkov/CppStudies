// lab2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

void giveChange(int amount) {
    // Номиналы монет в убывающем порядке
    std::vector<int> coins = { 10, 5, 2, 1 };

    // Массив для хранения количества монет каждого номинала
    std::vector<int> count(coins.size(), 0);

    // Перебираем все монеты, начиная с наибольшей
    for (size_t i = 0; i < coins.size(); ++i) {
        if (amount >= coins[i]) {
            count[i] = amount / coins[i]; // Сколько раз можно взять текущую монету
            amount = amount % coins[i];   // Оставшаяся сумма
        }
    }

    // Выводим результат
    for (size_t i = 0; i < coins.size(); ++i) {
        if (count[i] > 0) {
            std::cout << coins[i] << " руб: " << count[i] << " шт." << std::endl;
        }
    }
}

int main() {
    system("chcp 1251");
    int amount;
    std::cout << "Введите сумму: ";
    std::cin >> amount;

    giveChange(amount);

    return 0;
}
