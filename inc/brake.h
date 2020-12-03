#ifndef BRAKE_H
#define BRAKE_H

#include <component.h>
#include <field.h>

class Brake : public Component
{
public:
    Field<float> pressure;
    Field<percentage> balance;
    
public:
    Brake(float new_maximum, float new_minimum = 0);
};

#endif // BRAKE_H
