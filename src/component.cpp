#include <component.h>
#include <components>

Component* Component::create(component_type type, float minimum, float maximum, size_t gear_count)
{
    switch (type){
    case component_type::AERO:
        return new Aero(maximum, minimum);
    case component_type::ALIGNMENT:
        return new Alignment(maximum,minimum);
    case component_type::ANTI_ROLL_BARS:
        return new AntiRollBars(maximum, minimum);
    case component_type::BRAKE:
        return new Brake(maximum, minimum);
    case component_type::DIFFERENTIAL:
        return new Differential(maximum,minimum);
    case component_type::GEARING:
        return new Gearing(maximum, minimum, gear_count);
    case component_type::SPRINGS:
        return new Springs(maximum,minimum);
    case component_type::TIRES:
        return new Tires(maximum,minimum);
    default:
        return nullptr;
    }
}
