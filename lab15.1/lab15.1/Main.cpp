#include <iostream>
#include <map>
#include <string>

// Основная программа
int main() {
    system("chcp 1251");
    // Создаем контейнер map для хранения оценок студентов
    std::map<std::string, char> studentGrades;

    // Пример добавления студентов и их оценок
    studentGrades["Alice"] = 'A';
    studentGrades["Bob"] = 'B';
    studentGrades["Charlie"] = 'C';

    // Вывод оценок всех студентов
    std::cout << "Список студентов и их оценки:\n";
    for (const auto& pair : studentGrades) {
        std::cout << "Студент: " << pair.first << ", Оценка: " << pair.second << '\n';
    }

    // Пример обновления оценки студента
    studentGrades["Alice"] = 'A+';

    // Вывод обновленных оценок всех студентов
    std::cout << "\nОбновленный список студентов и их оценки:\n";
    for (const auto& pair : studentGrades) {
        std::cout << "Студент: " << pair.first << ", Оценка: " << pair.second << '\n';
    }

    // Пример запроса оценки студента по имени
    std::string studentName;
    std::cout << "\nВведите имя студента, чтобы узнать его оценку: ";
    std::cin >> studentName;

    // Поиск и вывод оценки студента
    auto it = studentGrades.find(studentName);
    if (it != studentGrades.end()) {
        std::cout << "Оценка студента " << studentName << ": " << it->second << '\n';
    }
    else {
        std::cout << "Студент с именем " << studentName << " не найден.\n";
    }

    return 0;
}
