#include <brake.h>

Brake::Brake(float new_maximum, float new_minimum) :
    pressure(new_minimum, new_maximum),
    balance(new_minimum, new_maximum)
{

}
