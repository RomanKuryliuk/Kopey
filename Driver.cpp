#include <string>
#include <iostream>
#include <conio.h>

#include "Driver.h"

#pragma warning(disable : 4996)

using namespace std;

Driver::Driver()
{
	//cout << "Driver " << this << " default constructor" << endl << endl;
	//_getch();			//���������� ���������� ������

	name = new char[8];			//�������� ���'��
	strcpy_s(name, 8, "noname");			//��������� ��������
	surname = new char[11];			//�������� ���'��
	strcpy_s(surname, 11, "surname");			//��������� ��������
}

Driver::Driver(char* title1, char* title2)
{
	//cout << "Driver " << this << " constructor with parameters" << endl << endl;
	//_getch();			//���������� ���������� ������

	name = new char[strlen(title1) + 1];			//�������� ���'��
	strcpy_s(name, strlen(title1) + 1, title1);			//��������� ��������
	surname = new char[strlen(title2) + 1];			//�������� ���'��
	strcpy_s(surname, strlen(title2) + 1, title2);			//��������� ��������
}

Driver::Driver(Driver& temp)
{
	//cout << "Driver " << this << " copy constructor" << endl << endl;
	//_getch();			//���������� ���������� ������

	name = new char[strlen(temp.get_name()) + 1];			//�������� ���'��
	strcpy_s(name, strlen(temp.get_name()) + 1, temp.get_name());			//��������� ��������
	surname = new char[strlen(temp.get_surname()) + 1];			//�������� ���'��
	strcpy_s(surname, strlen(temp.get_surname()) + 1, temp.get_surname());			//��������� ��������
}

Driver::~Driver()
{
	//cout << "Driver " << this << " destructor" << endl << endl;
	//_getch();			//���������� ���������� ������

	delete[] name, surname;			//�������� ���'��
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
	delete[] name;			//�������� ���'��
	name = new char[strlen(title) + 1];			//�������� ����� �� ���� ��'����
	strcpy_s(name, strlen(title) + 1, title);			//��������� ��������� �������� � ����
	return *this;
}

Driver& Driver::set_surname(char* title)			//���������
{
	delete[] surname;			//�������� ���'��
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
