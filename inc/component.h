#ifndef COMPONENT_H
#define COMPONENT_H

#include <map>
#include <string>
#include <memory>

typedef std::map<std::string, float> Stats;
typedef std::tuple<std::string, float> statistic_value;

enum class component_type{
    AERO,
    ALIGNMENT,
    ANTI_ROLL_BARS,
    BRAKE,
    DIFFERENTIAL,
    GEARING,
    SPRINGS,
    TIRES,
};

class Component{

public:
    static Component* create(component_type type, float minimum, float maximum, size_t gear_count = 6);
};

template<class C>
std::unique_ptr<C> get_component(component_type type, float minimum, float maximum, size_t gear_count = 6)
{
    return std::make_unique<C>(*static_cast<C*>(Component::create(type, minimum, maximum, gear_count)));
}

#endif // COMPONENT_H
