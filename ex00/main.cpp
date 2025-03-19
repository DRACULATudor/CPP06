#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        ScalarConverter::convert(argv[1]);
        return (0);
    }
    else
    {
        std::cerr << "Invalid number of arguments !" << std::endl;
        return (1);
    }
    return (1);
}
