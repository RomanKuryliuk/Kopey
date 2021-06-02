#pragma once

#include "Employee.h"

class Driver :
    public Employee
{
    char* car, * place;

public:
    Driver();
    Driver(char*, char*, char*, char*);
    ~Driver();
    void description();
    Driver& set_car(char*);
    Driver& set_place(char*);
    char* get_car();
    char* get_place();
};

