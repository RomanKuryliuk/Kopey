#include <string>
#include <iostream>
#include <conio.h>

#include "Trip.h"

#pragma warning(disable : 4996)

using namespace std;

Trip::Trip()			//����������� �� ������������ "����" ����������� ���
{
	cout << "Trip " << this << " default constructor" << endl << endl;
	_getch();			//���������� ���������� ������

	from = new char[9];			//�������� ���'��
	strcpy_s(from, 9, "nowhere");			//��������� ��������
	to = new char[11];			//�������� ���'��
	strcpy_s(to, 9, "nowhere");			//��������� ��������			
}

Trip::Trip(char* title1, char* title2, Driver& temp)
{
	cout << "Trip " << this << " constructor with parameters" << endl << endl;
	_getch();			//���������� ���������� ������

	from = new char[strlen(title1) + 1];			//�������� ���'��
	strcpy_s(from, strlen(title1) + 1, title1);			//��������� ��������
	to = new char[strlen(title2) + 1];			//�������� ���'��
	strcpy_s(to, strlen(title2) + 1, title2);			//��������� ��������
	dr.set_name(temp.get_name());			//��������� ��������
	dr.set_surname(temp.get_surname());			//��������� ��������
}

Trip::~Trip()
{
	cout << "Trip " << this << " destructor" << endl << endl;
	_getch();			//���������� ���������� ������

	delete[] from, to;			//�������� ���'��
}

char* Trip::description()												//��� ��������� �� ����� "����"
{
	char* a;
	a = new char[strlen(from) + strlen(to) + 17];
	strcpy_s(a, 12, "Trip from ");
	strcat(a, from);
	strcat(a, " to ");
	strcat(a, to);
	strcat(a, " with ");
	strcat(a, dr.get_name());
	strcat(a, " ");
	strcat(a, dr.get_surname());
	return a;
}

Trip& Trip::set_from(char* title)
{
	delete[] from;			//�������� ���'��
	from = new char[strlen(title) + 1];
	strcpy_s(from, strlen(title) + 1, title);
	return *this;
}

Trip& Trip::set_to(char* title)
{
	delete[] to;			//�������� ���'��
	to = new char[strlen(title) + 1];
	strcpy_s(to, strlen(title) + 1, title);
	return *this;
}

Trip& Trip::set_dr(Driver&temp)
{
	dr.set_name(temp.get_name());
	dr.set_surname(temp.get_surname());
	return *this;
}

char* Trip::get_from()
{
	return from;
}

char* Trip::get_to()
{
	return to;
}

Driver& Trip::get_dr()
{
	return dr;
}
