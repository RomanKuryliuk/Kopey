#include "Count.h"

int Count::number = 0;			//задання початкового значення

void Count::add()
{
	number++;
}

int Count::get_number()
{
	return number;
}
