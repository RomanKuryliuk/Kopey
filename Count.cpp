#include "Count.h"

int Count::number = 0;			//������� ����������� ��������

void Count::add()
{
	number++;
}

int Count::get_number()
{
	return number;
}
