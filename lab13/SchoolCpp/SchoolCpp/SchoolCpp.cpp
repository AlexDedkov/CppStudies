// SchoolCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
	system("chcp 1251");

	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student* stud = new student("Петров", "Иван", "Алексеевич", scores);

	std::cout << stud->get_full_name() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич",
		teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Количество часов: " << tch->get_work_time() <<
		std::endl;


	// Создаем объекты производных классов
	human* h1 = new student("Иванов", "Иван", "Иванович", { 5, 4, 3, 5 });
	human* h2 = new teacher("Петров", "Петр", "Петрович", 120);

	// Полиморфные вызовы
	std::cout << h1->get_info() << std::endl; // Вывод информации о студенте
	std::cout << h2->get_info() << std::endl; // Вывод информации о преподавателе

	// Освобождаем память
	delete h1;
	delete h2;

	return 0;

}