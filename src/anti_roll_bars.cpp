#include <anti_roll_bars.h>

AntiRollBars::AntiRollBars(float new_maximum, float new_minimum) :
    stiffness(new_minimum, new_maximum)
{

}
