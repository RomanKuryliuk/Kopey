#include <string>

#include "Trip.h"

#pragma warning(disable : 4996)

char* Trip::description()												//Все аналогічно до класу "водій"
{
	char* a;
	a = new char[strlen(from) + strlen(to) + 17];
	strcpy_s(a, 12, "Trip from ");
	strcat(a, from);
	strcat(a, " to ");
	strcat(a, to);
	return a;
}

Trip& Trip::set_from(char* title)
{
	from = new char[strlen(title) + 1];
	strcpy_s(from, strlen(title) + 1, title);
	return *this;
}

Trip& Trip::set_to(char* title)
{
	to = new char[strlen(title) + 1];
	strcpy_s(to, strlen(title) + 1, title);
	return *this;
}

char* Trip::get_from()
{
	return from;
}

char* Trip::get_to()
{
	return to;
}
