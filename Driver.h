#pragma once

#include "Employee.h"
#include "Count.h"

class Driver :
    public Employee, public Count //наслідування від двох класів
{
    char* car, * place;

public:
    Driver();
    Driver(char*, char*, char*, char*);
    ~Driver();
    void description();         //віртуальна функція виводу інформації
    Driver& set_car(char*);
    Driver& set_place(char*);
    char* get_car();
    char* get_place();
};

