#include "Serializer.hpp"
#include "Data.hpp"
#include <stdint.h>

void output_data(Data *ptr)
{
    std::cout << "adress for Data* is: " << ptr << std::endl
              << "name is: " << (*ptr).txt << std::endl << "num is: " << (*ptr).num << std::endl;
}

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc != 2)
    {
        Data *dataPtr = new Data;

        dataPtr->num = 23;
        dataPtr->txt = "DataPointer";

        output_data(dataPtr);
        uintptr_t ptrVal = Serializer::serialize(dataPtr);
        std::cout << "ptrVal : " << ptrVal << std::endl;
        dataPtr = Serializer::deserialize(ptrVal);
        output_data(dataPtr);
        Data *des = Serializer::deserialize(ptrVal);
        output_data(des);
        delete dataPtr;
    }
    else
    {
        std::cerr << "Invalid number of arguments !" << std::endl;
        return 1;
    }
}
