#pragma once

class Driver
{
	char* name, * surname;			//рядкові поля класу, тип доступу privat

public:
	char* description();			//опис
	Driver& set_name(char*);			//модифікатори
	Driver& set_surname(char*);
	char* get_name();			//селектори
	char* get_surname();
};

