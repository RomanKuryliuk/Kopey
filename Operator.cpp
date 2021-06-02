#include <string>
#include <iostream>
#include <conio.h>

#include "Operator.h"

#pragma warning(disable : 4996)

using namespace std;

Operator::Operator()
{
	cout << "Operator " << this << " default constructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	phone = new char[8];			//виділення пам'яті
	strcpy_s(phone, 8, "nophone");			//копіювання значення
	language = new char[11];			//виділення пам'яті
	strcpy_s(language, 11, "nolanguage");			//копіювання значення
}

Operator::Operator(char* title1, char* title2, char* title3, char* title4) :
	Employee(title1, title2)
{
	cout << "Operator " << this << " constructor with parameters" << endl << endl;
	_getch();			//очікування натискання кнопки

	phone = new char[strlen(title3) + 1];			//виділення пам'яті
	strcpy_s(phone, strlen(title3) + 1, title3);			//копіювання значення
	language = new char[strlen(title4) + 1];			//виділення пам'яті
	strcpy_s(language, strlen(title4) + 1, title4);			//копіювання значення
}

Operator::~Operator()
{
	cout << "Operator " << this << " destructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	delete[] phone, language;			//очищення пам'яті
}

void Operator::description()
{
	cout << "Operator phone:" << phone << ", language:" << language << endl << endl;
}

Operator& Operator::set_phone(char* title)
{
	delete[] phone;			//очищення пам'яті
	phone = new char[strlen(title) + 1];			//виділення памяті під поле об'єкта
	strcpy_s(phone, strlen(title) + 1, title);			//копіювання введеного значення в поле
	return *this;
}

Operator& Operator::set_language(char* title)
{
	delete[] language;			//очищення пам'яті
	language = new char[strlen(title) + 1];
	strcpy_s(language, strlen(title) + 1, title);
	return *this;
}

char* Operator::get_phone()
{
	return phone;
}

char* Operator::get_language()
{
	return language;
}
