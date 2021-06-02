#pragma once
class Trip
{
	char* from, * to;			//рядкові поля класу, тип доступу privat

public:
	char* description();			//опис
	Trip& set_from(char*);			//модифікатори
	Trip& set_to(char*);
	char* get_from();			//селектори
	char* get_to();
};

