#pragma once
class Trip
{
	char* from, * to;			//������ ���� �����, ��� ������� privat

public:
	char* description();			//����
	Trip& set_from(char*);			//������������
	Trip& set_to(char*);
	char* get_from();			//���������
	char* get_to();
};

