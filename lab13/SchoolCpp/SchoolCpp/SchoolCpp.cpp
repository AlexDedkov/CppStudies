// SchoolCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;



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

	cout << stud->get_full_name() << endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������",
		teacher_work_time);
	cout << tch->get_full_name() << endl;
	cout << "���������� �����: " << tch->get_work_time() <<endl;


	human* stud1 = new student("�������", "�������", "����������", scores);
	stud1->sayhello();

	stud1 = new teacher("���������", "���������", "�������������",
		teacher_work_time);

	stud1->sayhello();

	delete stud1;
	return 0;

}