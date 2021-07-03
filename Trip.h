#pragma once

#include <iostream>

#include "Driver.h"

using namespace std;

class Trip
{
	char* from, * to;			//������ ���� �����, ��� ������� privat
	Driver dr;			//���������� ���� ����� ("����" � ����� "������")
	int cost;

public:
	Trip();			//����������� �� �������������
	Trip(char*, char*, Driver&, int);			//����������� � �����������
	Trip(char*, char*, int);			//����������� � �����������
	~Trip();			//����������
	char* description();			//����
	Trip& set_from(char*);			//������������
	Trip& set_to(char*);
	Trip& set_dr(Driver&);
	Trip& set_cost(int);
	char* get_from();			//���������
	char* get_to();
	Driver& get_dr();
	int get_cost();
	friend bool operator>=(Trip&, Trip&);			//���������� ������ ������� ���������
	friend bool operator<(Trip&, Trip&);
	friend ostream& operator<<(ostream&, Trip&);
};

