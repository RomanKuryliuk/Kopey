#pragma once

#include <iostream>

#include "Driver.h"

using namespace std;

class Trip
{
	char* from, * to;			//рядкові поля класу, тип доступу privat
	Driver dr;			//композиція двох класів ("водій" є полем "поїздки")
	int cost;

public:
	Trip();			//конструктор за замовчуванням
	Trip(char*, char*, Driver&, int);			//конструктор з параметрами
	Trip(char*, char*, int);			//конструктор з параметрами
	~Trip();			//деструктор
	char* description();			//опис
	Trip& set_from(char*);			//модифікатори
	Trip& set_to(char*);
	Trip& set_dr(Driver&);
	Trip& set_cost(int);
	char* get_from();			//селектори
	char* get_to();
	Driver& get_dr();
	int get_cost();
	friend bool operator>=(Trip&, Trip&);			//оголошення дружніх функцій операторів
	friend bool operator<(Trip&, Trip&);
	friend ostream& operator<<(ostream&, Trip&);
};

