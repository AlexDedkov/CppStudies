#include "human.h"
#include <string>
#pragma once /* Защита от двойного подключения заголовочного файла */
class teacher : public human {
	// Конструктор класса teacher
public:
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// Получение количества учебных часов
	unsigned int get_work_time() const
	{
		return this->work_time;
	}

	// Переопределение виртуальной функции для получения информации
	std::string get_info() const override {
		std::ostringstream info;
		info << get_full_name() << ", Work Time: " << get_work_time();
		return info.str();
	}

private:
	// Учебные часы
	unsigned int work_time;
};