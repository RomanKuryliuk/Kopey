#pragma once

class Driver
{
	char* name, * surname;			//������ ���� �����, ��� ������� privat

public:
	Driver();
	Driver(char*, char*);
	Driver(Driver&);
	~Driver();
	char* description();			//����
	Driver& set_name(char*);			//������������
	Driver& set_surname(char*);
	char* get_name();			//���������
	char* get_surname();
};

