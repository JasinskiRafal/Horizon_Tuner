#ifndef TUNING_H
#define TUNING_H

#include <map>
#include <component.h>

typedef std::map<std::string, Component> Components;

/*
 *  Tune is a class that holds all information regarding a single car's tune
 *  It contains all the tabs the same way they are present in FH4 Tuning tab.
 */

class Tune
{
    Components components;

public:
    Tune();
    ~Tune();
};

#endif // TUNING_H
