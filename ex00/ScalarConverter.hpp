#pragma once
#include "Utils.hpp"

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &copy);
    ScalarConverter &operator=(const ScalarConverter &assign);
    ~ScalarConverter();
public:
    static void convert(const std::string &to_convert);
};
