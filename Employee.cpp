#include <string>
#include <iostream>
#include <conio.h>

#include "Employee.h"

#pragma warning(disable : 4996)

using namespace std;

Employee::Employee()
{
	cout << "Employee " << this << " default constructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	name = new char[8];			//виділення пам'яті
	strcpy_s(name, 8, "noname");			//копіювання значення
	surname = new char[11];			//виділення пам'яті
	strcpy_s(surname, 11, "surname");			//копіювання значення
}

Employee::Employee(char* title1, char* title2)
{
	cout << "Employee " << this << " constructor with parameters" << endl << endl;
	_getch();			//очікування натискання кнопки

	name = new char[strlen(title1) + 1];			//виділення пам'яті
	strcpy_s(name, strlen(title1) + 1, title1);			//копіювання значення
	surname = new char[strlen(title2) + 1];			//виділення пам'яті
	strcpy_s(surname, strlen(title2) + 1, title2);			//копіювання значення
}

Employee::Employee(Employee& temp)
{
	cout << "Employee " << this << " copy constructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	name = new char[strlen(temp.get_name()) + 1];			//виділення пам'яті
	strcpy_s(name, strlen(temp.get_name()) + 1, temp.get_name());			//копіювання значення
	surname = new char[strlen(temp.get_surname()) + 1];			//виділення пам'яті
	strcpy_s(surname, strlen(temp.get_surname()) + 1, temp.get_surname());			//копіювання значення
}

Employee::~Employee()
{
	cout << "Employee " << this << " destructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	delete[] name, surname;			//очищення пам'яті
}

void Employee::description()			//реалізація опису
{
	cout << "Employee " << name << " " << "surname" << endl << endl;
}

Employee& Employee::set_name(char* title)			//реалізація селектора
{
	delete[] name;			//очищення пам'яті
	name = new char[strlen(title) + 1];			//виділення памяті під поле об'єкта
	strcpy_s(name, strlen(title) + 1, title);			//копіювання введеного значення в поле
	return *this;
}

Employee& Employee::set_surname(char* title)			//аналогічно
{
	delete[] surname;			//очищення пам'яті
	surname = new char[strlen(title) + 1];
	strcpy_s(surname, strlen(title) + 1, title);
	return *this;
}

char* Employee::get_name()			//селектор
{
	return name;
}

char* Employee::get_surname()			//селектор
{
	return surname;
}
