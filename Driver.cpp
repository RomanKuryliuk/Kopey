#include <string>
#include <iostream>
#include <conio.h>

#include "Driver.h"

#pragma warning(disable : 4996)

using namespace std;

Driver::Driver()
{
	cout << "Driver " << this << " default constructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	car = new char[6];			//виділення пам'яті
	strcpy_s(car, 6, "nocar");			//копіювання значення
	place = new char[8];			//виділення пам'яті
	strcpy_s(place, 8, "noplace");			//копіювання значення
}

Driver::Driver(char* title1, char* title2, char* title3, char* title4):
	Employee(title1, title2)
{
	cout << "Driver " << this << " constructor with parameters" << endl << endl;
	_getch();			//очікування натискання кнопки

	car = new char[strlen(title3) + 1];			//виділення пам'яті
	strcpy_s(car, strlen(title3) + 1, title3);			//копіювання значення
	place = new char[strlen(title4) + 1];			//виділення пам'яті
	strcpy_s(place, strlen(title4) + 1, title4);			//копіювання значення
}

Driver::~Driver()
{
	cout << "Driver " << this << " destructor" << endl << endl;
	_getch();			//очікування натискання кнопки

	delete[] car, place;			//очищення пам'яті
}

void Driver::description()
{
	cout << "Driver car:" << car << ", place:" << place << endl << endl;
}

Driver& Driver::set_car(char* title)
{
	delete[] car;			//очищення пам'яті
	car = new char[strlen(title) + 1];			//виділення памяті під поле об'єкта
	strcpy_s(car, strlen(title) + 1, title);			//копіювання введеного значення в поле
	return *this;
}

Driver& Driver::set_place(char* title)
{
	delete[] place;			//очищення пам'яті
	place = new char[strlen(title) + 1];
	strcpy_s(place, strlen(title) + 1, title);
	return *this;
}

char* Driver::get_car()
{
	return car;
}

char* Driver::get_place()
{
	return place;
}
