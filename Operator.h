#pragma once

#include "Employee.h"

class Operator :
    public Employee
{
    char* phone, * language;

public:
    Operator();
    Operator(char*, char*, char*, char*);
    ~Operator();
    void description();
    Operator& set_phone(char*);
    Operator& set_language(char*);
    char* get_phone();
    char* get_language();
};