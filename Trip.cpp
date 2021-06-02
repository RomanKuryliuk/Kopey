#include <string>
#include <iostream>
#include <conio.h>

#include "Trip.h"

#pragma warning(disable : 4996)

using namespace std;

Trip::Trip()			//����������� �� ������������ "����" ����������� ���
{
	//cout << "Trip " << this << " default constructor" << endl << endl;
	//_getch();			//���������� ���������� ������

	from = new char[9];			//�������� ���'��
	strcpy_s(from, 9, "nowhere");			//��������� ��������
	to = new char[11];			//�������� ���'��
	strcpy_s(to, 9, "nowhere");			//��������� ��������	
	cost = 0;
}

Trip::Trip(char* title1, char* title2, Driver& temp, int n)
{
	//cout << "Trip " << this << " constructor with parameters" << endl << endl;
	//_getch();			//���������� ���������� ������

	from = new char[strlen(title1) + 1];			//�������� ���'��
	strcpy_s(from, strlen(title1) + 1, title1);			//��������� ��������
	to = new char[strlen(title2) + 1];			//�������� ���'��
	strcpy_s(to, strlen(title2) + 1, title2);			//��������� ��������
	dr.set_name(temp.get_name());			//��������� ��������
	dr.set_surname(temp.get_surname());			//��������� ��������
	cost = n;
}

Trip::~Trip()
{
	//cout << "Trip " << this << " destructor" << endl << endl;
	//_getch();			//���������� ���������� ������

	delete[] from, to;			//�������� ���'��
	cost = 0;
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
	strcat(a, " for ");
	char* temp;
	temp = new char[sizeof cost];
	sprintf(temp, "%d", cost);
	strcat(a, temp);
	strcat(a, "UAH");
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

Trip& Trip::set_dr(Driver& temp)
{
	dr.set_name(temp.get_name());
	dr.set_surname(temp.get_surname());
	return *this;
}

Trip& Trip::set_cost(int temp)
{
	cost = temp;
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

int Trip::get_cost()
{
	return cost;
}

bool operator>=(Trip& temp1, Trip& temp2)
{
	return temp1.get_cost() >= temp2.get_cost();			//���������� ���������� ��������� ���� ���� ������
}

bool operator<(Trip& temp1, Trip& temp2)
{
	return temp1.get_cost() < temp2.get_cost();			//���������� ���������� ��������� ���� ���� ������
}

ostream& operator<<(ostream& out, Trip& temp)
{
	out << "Trip from " << temp.get_from() << " to " << temp.get_to() << " with " << temp.get_dr().get_name() << " "
		<< temp.get_dr().get_surname() << " for " << temp.get_cost() << "UAH";			//��������� ���� � ����
	return out;
}
