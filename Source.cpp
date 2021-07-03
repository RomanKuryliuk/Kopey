#include <stdio.h>			//підключення всяких бібліотек
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>

#include "Trip.h"			//підключення двох реалізованих класів

using namespace std;		//для потокового вводу-виводу

template <typename Type> Type maksymum(Type it1, Type it2) {			//шаблонна функція пошуку максимального
																		//тип - якийсь ітератор
	Type max = it1;

	for (Type it3 = it1++; it3 != it2; it3++) {
		if (*it3 > *max) {
			*max = *it3;
		}
	}

	return max;
}

int main() {
	srand(time(0));

	vector<int> a1(10);												//створення цілочисельного вектора
	vector<int>::iterator it11 = a1.begin(), it12 = a1.end();

	for (vector<int>::iterator it13 = it11; it13 != it12; it13++) {
		*it13 = (rand() % 10);										//заповнення випадковими числами
		cout << *it13 << " ";
	}
	cout << endl;

	_getch();

	cout << "Max: " << *maksymum(it11, it12) << endl << endl;			//застосування шаблонної функції

	_getch();
	
	vector<double> a2(10);												//аналогічно для double
	vector<double>::iterator it21 = a2.begin(), it22 = a2.end();

	for (vector<double>::iterator it23 = it21; it23 != it22; it23++) {
		*it23 = (rand() % 100) / 10.;
		cout << *it23 << " ";
	}
	cout << endl;

	_getch();

	cout << "Max: " << *maksymum(it21, it22) << endl << endl;

	_getch();

	vector<int> a3(10);												//аналогічно
	vector<int>::iterator it31 = a3.begin(), it32 = a3.end();
	for (vector<int>::iterator it33 = it31; it33 != it32; it33++) {
		*it33 = (rand() % 10);
		cout << *it33 << " ";
	}
	cout << endl;

	_getch();

	cout << "Max: " << *max_element(it31, it32) << endl << endl;		//але тут застосовується алгоритм бібілотеки

	_getch();

	vector<Trip> a4(5);												//створення вектору поїздок
	vector<Trip>::iterator it41 = a4.begin(), it42 = a4.end();

	char* temp1, * temp2;
	temp1 = new char[1];
	temp2 = new char[1];
	int cost;

	for (vector<Trip>::iterator it43 = it41; it43 != it42; it43++) {
   		cout << "Enter trip from, to and cost:" << endl;
		cin >> temp1 >> temp2 >> cost;									//заповнення вручну
		cout << endl;
		*it43 = Trip(temp1, temp2, cost);
	}

	_getch();

	cout << "Max: " << *max_element(it41, it42) << endl << endl;	//застосування алгоритму бібілотеки

	_getch();			//очікування натискання кнопки
}