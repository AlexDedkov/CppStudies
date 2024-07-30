#include <string>
#include <sstream>
#pragma once /* Защита от двойного подключения заголовочного файла */
class human {
public:
	// Конструктор класса human
	human(std::string last_name, std::string name, std::string
		second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
	 std::string get_full_name() const
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	 // Виртуальная функция для получения информации
	 virtual std::string get_info() const {
		 return get_full_name();
	 }

	 // Виртуальный деструктор
	 virtual ~human() = default;

private:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};
