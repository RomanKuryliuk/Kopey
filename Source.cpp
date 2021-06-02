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

	Driver driver1;			//���������� ��'���� �� �������������
	cout << "Description of default driver: " << endl << driver1.description() << endl << endl;		

	Trip trip1;			//���������� ��'���� �� �������������
	cout << "Description of default trip: " << endl << trip1.description() << endl << endl;

	cout << "Enter driver's name and surname" << endl;
	char* temp1, * temp2;			
	temp1 = new char[1];
	temp2 = new char[1];
	cin >> temp1 >> temp2;
	cout << endl;

	Driver driver2(temp1, temp2);			//���������� ��'���� � �����������
	cout << "Description of driver with parameters: " << endl << driver2.description() << endl << endl;

	cout << "Enter trip's from and to" << endl;
	cin >> temp1 >> temp2;	
	cout << endl;

	Trip trip2(temp1, temp2, driver2);			//���������� ��'���� � �����������
	cout << "Description of trip with parameters: " << endl << trip2.description() << endl << endl;

	Driver driver3(driver2);			//���������� ��'���� ����������
	cout << "Description of copy driver: " << endl << driver2.description() << endl << endl;

	_getch();			//���������� ���������� ������
}