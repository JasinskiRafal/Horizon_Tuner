#ifndef DIFFERENTIAL_H
#define DIFFERENTIAL_H

#include <component.h>
#include <field.h>

class Differential : public Component
{
public:
    Field<percentage> balance;
    DiffFields<percentage> front;
    DiffFields<percentage> rear;

public:
    Differential(percentage new_maximum, percentage new_minimum);
};

#endif // DIFFERENTIAL_H
