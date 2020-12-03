#include <differential.h>

Differential::Differential(unsigned int new_maximum, unsigned int new_minimum) :
    balance(new_minimum, new_maximum),
    front(new_minimum, new_maximum),
    rear(new_minimum, new_maximum)
{

}
