#include <string>
#include <iostream>
#include <conio.h>

#include "Employee.h"

#pragma warning(disable : 4996)

using namespace std;

Employee::Employee()
{
	cout << "Employee " << this << " default constructor" << endl << endl;
	_getch();			//���������� ���������� ������

	name = new char[8];			//�������� ���'��
	strcpy_s(name, 8, "noname");			//��������� ��������
	surname = new char[11];			//�������� ���'��
	strcpy_s(surname, 11, "surname");			//��������� ��������
}

Employee::Employee(char* title1, char* title2)
{
	cout << "Employee " << this << " constructor with parameters" << endl << endl;
	_getch();			//���������� ���������� ������

	name = new char[strlen(title1) + 1];			//�������� ���'��
	strcpy_s(name, strlen(title1) + 1, title1);			//��������� ��������
	surname = new char[strlen(title2) + 1];			//�������� ���'��
	strcpy_s(surname, strlen(title2) + 1, title2);			//��������� ��������
}

Employee::Employee(Employee& temp)
{
	cout << "Employee " << this << " copy constructor" << endl << endl;
	_getch();			//���������� ���������� ������

	name = new char[strlen(temp.get_name()) + 1];			//�������� ���'��
	strcpy_s(name, strlen(temp.get_name()) + 1, temp.get_name());			//��������� ��������
	surname = new char[strlen(temp.get_surname()) + 1];			//�������� ���'��
	strcpy_s(surname, strlen(temp.get_surname()) + 1, temp.get_surname());			//��������� ��������
}

Employee::~Employee()
{
	cout << "Employee " << this << " destructor" << endl << endl;
	_getch();			//���������� ���������� ������

	delete[] name, surname;			//�������� ���'��
}

void Employee::description()			//��������� �����
{
	cout << "Employee " << name << " " << "surname" << endl << endl;
}

Employee& Employee::set_name(char* title)			//��������� ���������
{
	delete[] name;			//�������� ���'��
	name = new char[strlen(title) + 1];			//�������� ����� �� ���� ��'����
	strcpy_s(name, strlen(title) + 1, title);			//��������� ��������� �������� � ����
	return *this;
}

Employee& Employee::set_surname(char* title)			//���������
{
	delete[] surname;			//�������� ���'��
	surname = new char[strlen(title) + 1];
	strcpy_s(surname, strlen(title) + 1, title);
	return *this;
}

char* Employee::get_name()			//��������
{
	return name;
}

char* Employee::get_surname()			//��������
{
	return surname;
}
