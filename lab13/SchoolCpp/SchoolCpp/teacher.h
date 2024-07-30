#include "human.h"
#include <string>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
class teacher : public human {
	// ����������� ������ teacher
public:
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// ��������� ���������� ������� �����
	unsigned int get_work_time() const
	{
		return this->work_time;
	}

	// ��������������� ����������� ������� ��� ��������� ����������
	std::string get_info() const override {
		std::ostringstream info;
		info << get_full_name() << ", Work Time: " << get_work_time();
		return info.str();
	}

private:
	// ������� ����
	unsigned int work_time;
};