#include <string>
#include <iostream>
#include <conio.h>

#include "Driver.h"

#pragma warning(disable : 4996)

using namespace std;

Driver::Driver()
{
	//cout << "Driver " << this << " default constructor" << endl << endl;
	//_getch();			//очікування натискання кнопки

	name = new char[8];			//виділення пам'яті
	strcpy_s(name, 8, "noname");			//копіювання значення
	surname = new char[11];			//виділення пам'яті
	strcpy_s(surname, 11, "surname");			//копіювання значення
}

Driver::Driver(char* title1, char* title2)
{
	//cout << "Driver " << this << " constructor with parameters" << endl << endl;
	//_getch();			//очікування натискання кнопки

	name = new char[strlen(title1) + 1];			//виділення пам'яті
	strcpy_s(name, strlen(title1) + 1, title1);			//копіювання значення
	surname = new char[strlen(title2) + 1];			//виділення пам'яті
	strcpy_s(surname, strlen(title2) + 1, title2);			//копіювання значення
}

Driver::Driver(Driver& temp)
{
	//cout << "Driver " << this << " copy constructor" << endl << endl;
	//_getch();			//очікування натискання кнопки

	name = new char[strlen(temp.get_name()) + 1];			//виділення пам'яті
	strcpy_s(name, strlen(temp.get_name()) + 1, temp.get_name());			//копіювання значення
	surname = new char[strlen(temp.get_surname()) + 1];			//виділення пам'яті
	strcpy_s(surname, strlen(temp.get_surname()) + 1, temp.get_surname());			//копіювання значення
}

Driver::~Driver()
{
	//cout << "Driver " << this << " destructor" << endl << endl;
	//_getch();			//очікування натискання кнопки

	delete[] name, surname;			//очищення пам'яті
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
	delete[] name;			//очищення пам'яті
	name = new char[strlen(title) + 1];			//виділення памяті під поле об'єкта
	strcpy_s(name, strlen(title) + 1, title);			//копіювання введеного значення в поле
	return *this;
}

Driver& Driver::set_surname(char* title)			//аналогічно
{
	delete[] surname;			//очищення пам'яті
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
