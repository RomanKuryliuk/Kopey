#pragma once

class Employee
{
	char* name, * surname;			

public:
	Employee();			
	Employee(char*, char*);			
	Employee(Employee&);			
	~Employee();			
	virtual void description();			//віртуальна функція виводу інформації
	Employee& set_name(char*);			
	Employee& set_surname(char*);
	char* get_name();			
	char* get_surname();
};

