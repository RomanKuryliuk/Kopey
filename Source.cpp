#include <stdio.h>			//���������� ������ �������
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <conio.h>

#include "Driver.h"			//���������� ���� ����������� �����
#include "Trip.h"

using namespace std;		//��� ���������� �����-������

int main() {

	Driver driver1;			//���������� ��'���� ����� "����"

	cout << "Enter driver's name and surname" << endl;

	char* temp1, * temp2;			//����������, ����������� � ���������� ���������� �����
	temp1 = new char[1];
	temp2 = new char[1];
	cin >> temp1 >> temp2;

	driver1.set_name(temp1);			//���������� ���� ����� ��������� ����������
	driver1.set_surname(temp2);

	cout << endl;

	Trip trip1;			//���������� ��'���� ����� "������"

	cout << "Enter trip's from and to" << endl;

	cin >> temp1 >> temp2;			//���������� ���������� �����

	trip1.set_from(temp1);		//���������� ���� ����� ��������� ����������
	trip1.set_to(temp2);

	cout << endl;

	cout << "Description of driver:" << endl << driver1.description() << endl;			//���� ����� �'���� �����
	cout << endl;
	cout << "Description of trip:" << endl << trip1.description() << endl;			//���� ����� �'���� �����
	cout << endl;

	cout << "Implementation of driver selectors:" << endl << driver1.get_name() << " " << driver1.get_surname() << endl;
	cout << endl;																								//����� ������ ���������
	cout << "Implementation of trip selectors:" << endl << trip1.get_from() << " " <<trip1.get_to() << endl;			
	cout << endl;																					//����� ������ ���������
}