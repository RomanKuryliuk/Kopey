#include <string>
#include <iostream>

#include "Driver.h"

#pragma warning(disable : 4996)

using namespace std;

Driver::Driver()
{
	
}

Driver::Driver(char*, char*)
{
}

Driver::Driver(Driver&)
{
}

Driver::~Driver()
{
}

char* Driver::description()			//реалізація опису
{
	char* a;			//оголошення тимчасової змінної
	a = new char[strlen(name) + strlen(surname) + 10];			//її ініціалізація
	strcpy_s(a, 9, "Driver ");			//заповнення рядка опису
	strcat(a, name);
	strcat(a, " ");
	strcat(a, surname);
	return a;
}

Driver& Driver::set_name(char* title)			//реалізація селектора
{
	name = new char[strlen(title) + 1];			//виділення памяті під поле об'єкта
	strcpy_s(name, strlen(title) + 1, title);			//копіювання введеного значення в поле
	return *this;
}

Driver& Driver::set_surname(char* title)			//аналогічно
{
	surname = new char[strlen(title) + 1];
	strcpy_s(surname, strlen(title) + 1, title);
	return *this;
}

char* Driver::get_name()			//селектор
{
	return name;
}

char* Driver::get_surname()			//селектор
{
	return surname;
}
