#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &copy);
    Serializer &operator=(const Serializer &assignment);
    ~Serializer();
public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
