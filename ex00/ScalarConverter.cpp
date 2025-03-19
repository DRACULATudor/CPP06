#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
}

//stringstream cuz it behaves as like cin and cout in once 



void ScalarConverter::convert(const std::string &to_convert)
{
	std::stringstream conversion;
	double value = 0;
	conversion << to_convert;
	if (conversion.fail())
	std::cout << "Conversion failed !" << std::endl;
	conversion >> value;
	try
	{
		std::cout << "char: ";
		ExecuteChar(to_convert, value);

		std::cout << "int: ";
		ExecuteInt(to_convert, value);

		std::cout << "float: ";
		ExecuteFloat(to_convert, value);
		
		std::cout << "double: ";
		ExecuteDouble(to_convert, value);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Excepition caught: " << e.what() << '\n';
	}
}

ScalarConverter::~ScalarConverter() {}
