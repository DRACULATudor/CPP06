#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::Serializer(const Serializer &copy)
{
    *this = copy;
}

Serializer &Serializer::operator=(const Serializer &assign)
{
    if (this != &assign)
        *this = assign;
    return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

Serializer::~Serializer() {}
