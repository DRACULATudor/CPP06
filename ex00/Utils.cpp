#include "Utils.hpp"

bool isAsciiChar(const std::string &to_convert)
{
    if (to_convert.empty())
        return false;

    if (to_convert.size() == 1 && (isprint(to_convert[0]) && !isdigit(to_convert[0])))
    {
        return true;
    }
    return false;
}

bool isSpecDouble(const std::string &to_convert)
{
    if (to_convert == "nanf" || to_convert == "inff" || to_convert == "+inff" || to_convert == "-inff" || to_convert == "nan" || to_convert == "inf" || to_convert == "+inf" || to_convert == "-inf")
    {
        return true;
    }
    return false;
}

void ExecuteDouble(const std::string &to_convert, double value)
{
    double for_limits = std::atof(to_convert.c_str());
    if (isAsciiChar(to_convert))
    {
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << static_cast<double>(to_convert[0]) << std::endl;
    }
    else if (isSpecDouble(to_convert))
    {
        std::cout << static_cast<double>(for_limits) << std::endl;
    }
    else if (!isAsciiChar(to_convert))
    {
        if (to_convert[0] == '0' && to_convert.size() == 1)
        {
            std::cout << std::fixed;
            std::cout.precision(1);
            std::cout << static_cast<double>(value) << std::endl;
        }
        else if (value != 0)
        {
            if (to_convert.find('e') != std::string::npos || to_convert.find('E') != std::string::npos)
            {
                std::cout.unsetf(std::ios::floatfield);
                std::cout << static_cast<double>(value) << std::endl;
            }
            else
            {
                std::cout << std::fixed;
                std::cout.precision(1);
                std::cout << static_cast<double>(value) << std::endl;
            }
        }
        else if ((value >= std::numeric_limits<double>::max() || value <= -std::numeric_limits<double>::max()) && value == 0)
        {
            if (value > std::numeric_limits<double>::max())
            {
                std::cout << "inf" << std::endl;
            }
            else if (value < -std::numeric_limits<double>::max())
            {
                std::cout << "-inf" << std::endl;
            }
        }
        else
            std::cout << "impossible" << std::endl;
    }
}

bool isSpecFloat(const std::string &to_convert)
{
    if (to_convert == "nanf" || to_convert == "inff" || to_convert == "+inff" || to_convert == "-inff" || to_convert == "nan" || to_convert == "inf" || to_convert == "+inf" || to_convert == "-inf")
    {
        return true;
    }
    return false;
}

void ExecuteFloat(const std::string &to_convert, double value)
{
    double for_limits = std::atof(to_convert.c_str());
    if (isAsciiChar(to_convert))
    {
        std::cout.precision(1);
        std::cout << std::fixed;
        std::cout << static_cast<float>(to_convert[0]) << "f" << std::endl;
    }
    else if (isSpecFloat(to_convert))
    {
        std::cout << static_cast<float>(for_limits) << "f" << std::endl;
    }
    else if (!isAsciiChar(to_convert))
    {
        if (to_convert[0] == '0' && to_convert.size() == 1)
        {
            std::cout.precision(1);
            std::cout << static_cast<float>(value) << ".0f" << std::endl;
        }
        else if (value != 0)
        {
            if ((to_convert.find('e') != std::string::npos || to_convert.find('E') != std::string::npos))
            {
                std::cout.unsetf(std::ios::floatfield);
                std::cout << static_cast<float>(value) << "f" << std::endl;
            }
            else
            {
                std::cout << std::fixed;
                std::cout.precision(1);
                std::cout << static_cast<float>(value) << "f" << std::endl;
            }
        }
        else if ((value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max()) && value == 0)
        {
            if (value > std::numeric_limits<float>::max())
            {
                std::cout << "inff" << std::endl;
                ;
            }
            else if (value < -std::numeric_limits<float>::max())
            {
                std::cout << "-inff" << std::endl;
            }
        }
        else
            std::cout << "impossible" << std::endl;
    }
}

bool isInt(const std::string &to_convert)
{
    if (to_convert.empty())
        return false;
        
    size_t i = 0;
    if (to_convert[0] == '-' || to_convert[0] == '+')
    {
        i = 1;
    }
    for (; i < to_convert.length(); i++)
    {
        if (!isdigit(to_convert[i]))
            return false;
    }
    return true;
}

void ExecuteInt(const std::string &to_convert, double value)
{
    if (isAsciiChar(to_convert))
    {
        std::cout << static_cast<int>(to_convert[0]) << std::endl;
    }
    else if (!isInt(to_convert))
    {
        std::cout << "impossible" << std::endl;
    }
    else if (!isAsciiChar(to_convert))
    {
        if (value == -2147483648)
        {
            std::cout << static_cast<int>(value) << std::endl;
        }
        else if ((value > std::numeric_limits<int>::max() || value < -std::numeric_limits<int>::max()))
        {
            std::cout << "impossible" << std::endl;
        }
        else if ((value <= std::numeric_limits<int>::max() || value >= -std::numeric_limits<int>::max()) && value != 0)
        {
            std::cout << static_cast<int>(value) << std::endl;
        }
        else if (to_convert[0] == '0' && to_convert.size() == 1)
        {
            std::cout << static_cast<int>(value) << std::endl;
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }
    }
}

bool isChar(const std::string &to_convert)
{
    if (to_convert.empty())
        return false;

    if (to_convert.size() == 1 && isprint(to_convert[0]))
    {
        return true;
    }
    return false;
}

void ExecuteChar(const std::string &to_convert, double value)
{
    if (isAsciiChar(to_convert))
    {
        std::cout << "'" << to_convert[0] << "'" << std::endl;
    }
    else if (value >= 32 && value < 127)
    {
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
    }
    else if (to_convert[0] == '0' && to_convert.size() == 1)
    {
        std::cout << "Non displayable" << std::endl;
    }
    else if (((value > 0 &&  value <= 32) || (value == 127) )&& value != 0)
    {
        std::cout << "Non displayable" << std::endl;
    }
    else
    {
        std::cout << "impossible" << std::endl;
    }
}