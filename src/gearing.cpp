#include <gearing.h>


Gearing::Gearing(float new_maximum, float new_minimum, unsigned int gear_count) :
    final_gear(new_minimum, new_maximum)
{
    for (size_t i; i < gear_count; ++i){
        gears.push_back(Field<float>(new_minimum ,new_maximum));
    }
}
