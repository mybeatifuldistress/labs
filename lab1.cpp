//Задание 5
#include <iostream>
#include <ctime>
#include <string>
#include <locale>

struct Student {
	std::string famil;
	std::string name;
	std::string facult;
	int Nomzach;
};

void findStudent(Student* students, int count, const std::string& famil, const std::string& name, const std::string& Nomzach) {
	bool found = false;

	for (int i = 0; i < count; ++i) {
		if (students[i].famil == famil || students[i].name == name || Nomzach = nomzach) {
			std::cout << "Студент найден:" << std::endl;
			std::cout << "Фамилия: " << students[i].famil << std::endl;
			std::cout << "Имя: " << students[i].name << std::endl;
			std::cout << "Факультет: " << students[i].facult << std::endl;
			std::cout << "Номер зачётной книжки: " << students[i].Nomzach << std::endl;
			found = true;
		}
	}

	if (!found) {
		std::cout << "Студент с указанными параметрами не найден." << std::endl;
	}
}

int main() {

	setlocale(LC_ALL, "RUS");

	int numStudents = 0;
	std::cout << "Введите нужное количество студентов: " << std::endl;
	std::cin >> numStudents;

	Student* students = new Student[numStudents];

	for (int i = 0; i < numStudents; ++i) {
		std::cout << "Введите данные для студента " << (i + 1) << ":" << std::endl;
		std::cout << "Фамилия: ";
		std::cin >> students[i].famil;
		std::cout << "Имя: ";
		std::cin >> students[i].name;
		std::cout << "Факультет: ";
		std::cin >> students[i].facult;
		std::cout << "Номер зачётной книжки: ";
		std::cin >> students[i].Nomzach;
		std::cout << std::endl;
	}

	std::string searchFamil, searchName, searchNomzach;

	std::cout << "-----Поиск студентов-----" << std::endl;

	std::cout << "Введите фамилию для поиска: ";
	std::cin >> searchFamil;

	std::cout << "Введите имя для поиска: ";
	std::cin >> searchName;

	std::cout << "Введите номер зачеткой книжки студента: ";
	std::cin >> searchNomzach;

	findStudent(students, numStudents, searchFamil, searchName, searchNomzach);
	return 0;

}


