#ifndef GEARING_H
#define GEARING_H

#include <component.h>
#include <field.h>
#include <vector>

typedef std::vector<Field<float>> Gears_t;

class Gearing : public Component
{
public:
    Field<float> final_gear;
    Gears_t gears;

public:
    Gearing(float new_maximum, float new_minimum =0, size_type gear_count = 6);
};

#endif // GEARING_H
