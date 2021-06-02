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

	Driver driver1;			//оголошення об'єкту класу "водій"

	cout << "Enter driver's name and surname" << endl;

	char* temp1, * temp2;			//оголошення, ініціалізація і заповнення тимчасових файлів
	temp1 = new char[1];
	temp2 = new char[1];
	cin >> temp1 >> temp2;

	driver1.set_name(temp1);			//заповнення полів класу введеними значеннями
	driver1.set_surname(temp2);

	cout << endl;

	Trip trip1;			//оголошення об'єкту класу "поїздка"

	cout << "Enter trip's from and to" << endl;

	cin >> temp1 >> temp2;			//заповнення тимчасових файлів

	trip1.set_from(temp1);		//заповнення полів класу введеними значеннями
	trip1.set_to(temp2);

	cout << endl;

	cout << "Description of driver:" << endl << driver1.description() << endl;			//вивід опису о'єкту класу
	cout << endl;
	cout << "Description of trip:" << endl << trip1.description() << endl;			//вивід опису о'єкту класу
	cout << endl;

	cout << "Implementation of driver selectors:" << endl << driver1.get_name() << " " << driver1.get_surname() << endl;
	cout << endl;																								//показ роботи селекторів
	cout << "Implementation of trip selectors:" << endl << trip1.get_from() << " " <<trip1.get_to() << endl;			
	cout << endl;																					//показ роботи селекторів
}