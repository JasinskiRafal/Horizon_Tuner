#ifndef ANTI_ROLL_BARS_H
#define ANTI_ROLL_BARS_H

#include <component.h>
#include <field.h>

class AntiRollBars : public Component
{
public:
    AxleFields<float> stiffness;
    
public:
    AntiRollBars(float new_maximum, float new_minimum = 0);
};

#endif // ANTI_ROLL_BARS_H
