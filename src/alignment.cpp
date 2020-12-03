#include <alignment.h>

Alignment::Alignment(float new_maximum, float new_minimum) :
    front_caster(0,7),
    camber(new_minimum, new_maximum),
    toe(new_minimum, new_maximum)
{

}
