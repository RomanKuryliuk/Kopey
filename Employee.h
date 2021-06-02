#pragma once

class Employee
{
	char* name, * surname;			//рядкові поля класу, тип доступу privat

public:
	Employee();			//конструктор за замовчуванням
	Employee(char*, char*);			//конструктор з параметрами
	Employee(Employee&);			//конструктор копіювання
	~Employee();			//деструктор
	virtual void description();			//опис
	Employee& set_name(char*);			//модифікатори
	Employee& set_surname(char*);
	char* get_name();			//селектори
	char* get_surname();
};

