#pragma once

class Driver
{
	char* name, * surname;			//рядкові поля класу, тип доступу privat

public:
	Driver();			//конструктор за замовчуванням
	Driver(char*, char*);			//конструктор з параметрами
	Driver(Driver&);			//конструктор копіювання
	~Driver();			//деструктор
	char* description();			//опис
	Driver& set_name(char*);			//модифікатори
	Driver& set_surname(char*);
	char* get_name();			//селектори
	char* get_surname();
};

