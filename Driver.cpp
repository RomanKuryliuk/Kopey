#include <string>
#include <iostream>

#include "Driver.h"

#pragma warning(disable : 4996)

using namespace std;

Driver::Driver()
{
	
}

Driver::Driver(char*, char*)
{
}

Driver::Driver(Driver&)
{
}

Driver::~Driver()
{
}

char* Driver::description()			//��������� �����
{
	char* a;			//���������� ��������� �����
	a = new char[strlen(name) + strlen(surname) + 10];			//�� �����������
	strcpy_s(a, 9, "Driver ");			//���������� ����� �����
	strcat(a, name);
	strcat(a, " ");
	strcat(a, surname);
	return a;
}

Driver& Driver::set_name(char* title)			//��������� ���������
{
	name = new char[strlen(title) + 1];			//�������� ����� �� ���� ��'����
	strcpy_s(name, strlen(title) + 1, title);			//��������� ��������� �������� � ����
	return *this;
}

Driver& Driver::set_surname(char* title)			//���������
{
	surname = new char[strlen(title) + 1];
	strcpy_s(surname, strlen(title) + 1, title);
	return *this;
}

char* Driver::get_name()			//��������
{
	return name;
}

char* Driver::get_surname()			//��������
{
	return surname;
}
