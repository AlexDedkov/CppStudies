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

	// ��������������
	std::vector<int> scores;
	// ���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student* stud = new student("������", "����", "����������", scores);

	std::cout << stud->get_full_name() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������",
		teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "���������� �����: " << tch->get_work_time() <<
		std::endl;


	// ������� ������� ����������� �������
	human* h1 = new student("������", "����", "��������", { 5, 4, 3, 5 });
	human* h2 = new teacher("������", "����", "��������", 120);

	// ����������� ������
	std::cout << h1->get_info() << std::endl; // ����� ���������� � ��������
	std::cout << h2->get_info() << std::endl; // ����� ���������� � �������������

	// ����������� ������
	delete h1;
	delete h2;

	return 0;

}