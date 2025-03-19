#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <limits>
#include <sstream>
#include <iomanip>

bool isAsciiChar(const std::string &to_convert);
bool	isSpecFloat(const std::string &to_convert);
bool	isSpecDouble(const std::string &to_convert);
void ExecuteDouble(const std::string &to_convert, double value);
bool isSpecFloat(const std::string &to_convert);
void ExecuteFloat(const std::string &to_convert, double value);
void ExecuteInt(const std::string &to_convert, double value);
void ExecuteChar(const std::string &to_convert, double value);