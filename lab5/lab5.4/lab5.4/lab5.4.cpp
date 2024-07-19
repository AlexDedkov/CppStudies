// lab5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>  
#include <cstdlib>  

void performOperation(const char* operation, int num1, int num2) {
    if (strncmp(operation, "-a", 2) == 0) {
        std::cout << "Результат сложения: " << (num1 + num2) << "\n";
    }
    else if (strncmp(operation, "-m", 2) == 0) {
        std::cout << "Результат умножения: " << (num1 * num2) << "\n";
    }
    else {
        std::cerr << "Ошибка: Неправильный флаг операции. Используйте -a для сложения или -m для умножения.\n";
    }
}

int main() {
    system("chcp 1251");
    // Ввод данных с консоли
    char operation[3];
    int num1, num2;

    std::cout << "Введите операцию (-a для сложения, -m для умножения): ";
    std::cin >> operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Проверка корректности флага операции
    if (strncmp(operation, "-a", 2) != 0 && strncmp(operation, "-m", 2) != 0) {
        std::cerr << "Ошибка: Неправильный флаг операции. Используйте -a для сложения или -m для умножения.\n";
        return 1;
    }

    // Выполнение операции
    performOperation(operation, num1, num2);

    return 0;
}