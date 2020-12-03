#ifndef FIELD_H
#define FIELD_H

typedef unsigned int size_type;
typedef unsigned int percentage;

struct StatValue{
};

template<typename T>
class Field
{
    T minimum;
    T maximum;
    T current;

public:

    Field(T new_minimum, T new_maximum) :
        minimum(new_minimum),
        maximum(new_maximum)
    {
        current = ((minimum + maximum)/2);
    };

    T get() { return current; }

    void set(T new_value) {
        if (new_value > maximum)
            current = maximum;
        else if (new_value < minimum)
            current = minimum;
        else
            current = new_value;
    }
};

template<typename T>
struct AxleFields
{
    Field<T> front;
    Field<T> rear;

    AxleFields(T new_minimum, T new_maximum) :
        front(new_minimum, new_maximum),
        rear(new_minimum, new_maximum) {};
};

template<typename T>
struct DiffFields
{
    Field<T> acceleration;
    Field<T> decelartion;

    DiffFields(T new_minimum, T new_maximum) :
        acceleration(new_minimum, new_maximum),
        decelartion(new_minimum, new_maximum) {};
};

#endif // FIELD_H
