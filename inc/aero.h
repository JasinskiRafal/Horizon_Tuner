#ifndef AERO_H
#define AERO_H

#include <component.h>
#include <field.h>

class Aero : public Component
{
public:
    AxleFields<float> downforce;

public:
    Aero(float new_maximum, float new_minimum = 0);
};

#endif // AERO_H
