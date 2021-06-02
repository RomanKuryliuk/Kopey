#pragma once

#include "Driver.h"

class Trip
{
	char* from, * to;			//рядкові поля класу, тип доступу privat
	Driver dr;			//композиція двох класів ("водій" є полем "поїздки")

public:
	Trip();			//конструктор за замовчуванням
	Trip(char*, char*, Driver&);			//конструктор з параметрами
	~Trip();			//деструктор
	char* description();			//опис
	Trip& set_from(char*);			//модифікатори
	Trip& set_to(char*);
	Trip& set_dr(Driver&);
	char* get_from();			//селектори
	char* get_to();
	Driver& get_dr();
};

