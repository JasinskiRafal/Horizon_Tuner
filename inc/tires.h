#ifndef TIRES_H
#define TIRES_H

#include <component.h>
#include <field.h>

class Tires : public Component
{
public:
    AxleFields<float> pressure;
    
public:
    Tires(float new_maximum, float new_minimum = 0);
};

#endif // TIRES_H
