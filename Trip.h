#pragma once

#include "Driver.h"

class Trip
{
	char* from, * to;			//������ ���� �����, ��� ������� privat
	Driver dr;			//���������� ���� ����� ("����" � ����� "������")

public:
	Trip();			//����������� �� �������������
	Trip(char*, char*, Driver&);			//����������� � �����������
	~Trip();			//����������
	char* description();			//����
	Trip& set_from(char*);			//������������
	Trip& set_to(char*);
	Trip& set_dr(Driver&);
	char* get_from();			//���������
	char* get_to();
	Driver& get_dr();
};

