#ifndef ALIGNMENT_H
#define ALIGNMENT_H

#include <component.h>
#include <field.h>

class Alignment : public Component
{
public:
    Field<float> front_caster;
    AxleFields<float> camber;
    AxleFields<float> toe;

public:
    Alignment(float new_maximum, float new_minimum = 0);
};

#endif // ALIGNMENT_H
