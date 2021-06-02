#include <stdio.h>			//���������� ������ �������
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>

#include "Driver.h"			//���������� ���� ����������� �����
#include "Employee.h"
#include "Operator.h"

using namespace std;		//��� ���������� �����-������

int main() {
	
	vector<Employee*> taxi(3);			//��������� ������� �������� �� "�����������"
	
	char* temp1, * temp2, * temp3, * temp4;
	temp1 = new char[1];
	temp2 = new char[1];
	temp3 = new char[1];
	temp4 = new char[1];

	cout << "Enter employee name and surname:" << endl;
	cin >> temp1 >> temp2;
	cout << endl;
	taxi[0] = new Employee(temp1, temp2);			//���������� ������� �������� �������

	cout << "Enter driver name, surname, car, place:" << endl;
	cin >> temp1 >> temp2 >> temp3 >> temp4;
	cout << endl;
	taxi[1] = new Driver(temp1, temp2, temp3, temp4);			//���������� ������� �������� �������

	cout << "Enter operator name, surname, phone, language:" << endl;
	cin >> temp1 >> temp2 >> temp3 >> temp4;
	cout << endl;
	taxi[2] = new Operator(temp1, temp2, temp3, temp4);			//���������� �������� �������� �������

	for (Employee* item : taxi) {
		item->description();			//������ ������� ����� ��� �������� �������
	}

	_getch();			//���������� ���������� ������
}