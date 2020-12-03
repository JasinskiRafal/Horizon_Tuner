#include <springs.h>


Springs::Springs(float new_maximum, float new_minimum):
    stiffness(new_minimum, new_maximum),
    ride_height(new_minimum, new_maximum)
{

}
