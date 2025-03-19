#pragma once
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

class A;
class B;
class C;


class Base
{
public:
    virtual ~Base(){}
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
