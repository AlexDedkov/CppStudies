#include <iostream>
#include <map>
#include <string>

// �������� ���������
int main() {
    system("chcp 1251");
    // ������� ��������� map ��� �������� ������ ���������
    std::map<std::string, char> studentGrades;

    // ������ ���������� ��������� � �� ������
    studentGrades["Alice"] = 'A';
    studentGrades["Bob"] = 'B';
    studentGrades["Charlie"] = 'C';

    // ����� ������ ���� ���������
    std::cout << "������ ��������� � �� ������:\n";
    for (const auto& pair : studentGrades) {
        std::cout << "�������: " << pair.first << ", ������: " << pair.second << '\n';
    }

    // ������ ���������� ������ ��������
    studentGrades["Alice"] = 'A+';

    // ����� ����������� ������ ���� ���������
    std::cout << "\n����������� ������ ��������� � �� ������:\n";
    for (const auto& pair : studentGrades) {
        std::cout << "�������: " << pair.first << ", ������: " << pair.second << '\n';
    }

    // ������ ������� ������ �������� �� �����
    std::string studentName;
    std::cout << "\n������� ��� ��������, ����� ������ ��� ������: ";
    std::cin >> studentName;

    // ����� � ����� ������ ��������
    auto it = studentGrades.find(studentName);
    if (it != studentGrades.end()) {
        std::cout << "������ �������� " << studentName << ": " << it->second << '\n';
    }
    else {
        std::cout << "������� � ������ " << studentName << " �� ������.\n";
    }

    return 0;
}
