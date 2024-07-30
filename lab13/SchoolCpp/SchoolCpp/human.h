#include <string>
#include <sstream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
class human {
public:
	// ����������� ������ human
	human(std::string last_name, std::string name, std::string
		second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	 std::string get_full_name() const
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	 // ����������� ������� ��� ��������� ����������
	 virtual std::string get_info() const {
		 return get_full_name();
	 }

	 // ����������� ����������
	 virtual ~human() = default;

private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};
