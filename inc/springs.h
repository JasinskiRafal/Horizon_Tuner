#ifndef SPRINGS_H
#define SPRINGS_H

#include <component.h>
#include <field.h>

class Springs : public Component
{
public:
    AxleFields<float> stiffness;
    AxleFields<float> ride_height;
    
public:
    Springs(float new_maximum, float new_minimum = 0);
};

#endif // SPRINGS_H
