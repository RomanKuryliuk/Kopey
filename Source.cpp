#include <stdio.h>			//підключення всяких бібліотек
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>

#include "Driver.h"			//підключення двох реалізованих класів
#include "Employee.h"
#include "Operator.h"

using namespace std;		//для потокового вводу-виводу

int main() {
	
	char* temp1, * temp2, * temp3, * temp4;
	temp1 = new char[1];
	temp2 = new char[1];
	temp3 = new char[1];
	temp4 = new char[1];

	cout << "Enter first driver name, surname, car, place:" << endl;
	cin >> temp1 >> temp2 >> temp3 >> temp4;
	cout << endl;
	Driver d1(temp1, temp2, temp3, temp4);	
	d1.description();

	cout << "Enter second driver name, surname, car, place:" << endl;
	cin >> temp1 >> temp2 >> temp3 >> temp4;
	cout << endl;
	Driver d2(temp1, temp2, temp3, temp4);
	d2.description();

	cout << "Enter third driver name, surname, car, place:" << endl;
	cin >> temp1 >> temp2 >> temp3 >> temp4;
	cout << endl;
	Driver d3(temp1, temp2, temp3, temp4);
	d3.description();

	_getch();			//очікування натискання кнопки
}