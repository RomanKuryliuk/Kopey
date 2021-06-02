#include <stdio.h>			//підключення всяких бібліотек
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <conio.h>

#include "Driver.h"			//підключення двох реалізованих класів
#include "Trip.h"

using namespace std;		//для потокового вводу-виводу

int main() {
	cout << "Enter first trip from, to and cost:" << endl;
	char* temp1, * temp2, * temp3, * temp4;
	int temp;
	temp1 = new char[1];
	temp2 = new char[1];
	temp3 = new char[1];
	temp4 = new char[1];
	cin >> temp1 >> temp2 >> temp;
	cout << endl;

	cout << "Enter first driver name and surname:" << endl;
	cin >> temp3 >> temp4;
	cout << endl;

	Driver d1(temp3, temp4);
	Trip t1(temp1, temp2, d1, temp);

	cout << t1 << endl << endl;

	cout << "Enter second trip from, to and cost:" << endl;
	cin >> temp1 >> temp2 >> temp;
	cout << endl;

	cout << "Enter second driver name and surname:" << endl;
	cin >> temp3 >> temp4;
	cout << endl;

	Driver d2(temp3, temp4);
	Trip t2(temp1, temp2, d2, temp);

	cout << t2 << endl << endl;

	cout << "First trip >= second trip" << endl << (t1 >= t2);
	cout << endl << endl;

	cout << "First trip < second trip" << endl << (t1 < t2);
	cout << endl << endl;

	_getch();			//очікування натискання кнопки
}