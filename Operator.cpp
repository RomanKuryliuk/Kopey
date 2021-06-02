#include <string>
#include <iostream>
#include <conio.h>

#include "Operator.h"

#pragma warning(disable : 4996)

using namespace std;

Operator::Operator()
{
	cout << "Operator " << this << " default constructor" << endl << endl;
	_getch();			//���������� ���������� ������

	phone = new char[8];			//�������� ���'��
	strcpy_s(phone, 8, "nophone");			//��������� ��������
	language = new char[11];			//�������� ���'��
	strcpy_s(language, 11, "nolanguage");			//��������� ��������
}

Operator::Operator(char* title1, char* title2, char* title3, char* title4) :
	Employee(title1, title2)
{
	cout << "Operator " << this << " constructor with parameters" << endl << endl;
	_getch();			//���������� ���������� ������

	phone = new char[strlen(title3) + 1];			//�������� ���'��
	strcpy_s(phone, strlen(title3) + 1, title3);			//��������� ��������
	language = new char[strlen(title4) + 1];			//�������� ���'��
	strcpy_s(language, strlen(title4) + 1, title4);			//��������� ��������
}

Operator::~Operator()
{
	cout << "Operator " << this << " destructor" << endl << endl;
	_getch();			//���������� ���������� ������

	delete[] phone, language;			//�������� ���'��
}

void Operator::description()
{
	cout << "Operator phone:" << phone << ", language:" << language << endl << endl;
}

Operator& Operator::set_phone(char* title)
{
	delete[] phone;			//�������� ���'��
	phone = new char[strlen(title) + 1];			//�������� ����� �� ���� ��'����
	strcpy_s(phone, strlen(title) + 1, title);			//��������� ��������� �������� � ����
	return *this;
}

Operator& Operator::set_language(char* title)
{
	delete[] language;			//�������� ���'��
	language = new char[strlen(title) + 1];
	strcpy_s(language, strlen(title) + 1, title);
	return *this;
}

char* Operator::get_phone()
{
	return phone;
}

char* Operator::get_language()
{
	return language;
}
