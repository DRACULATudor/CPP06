#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    std::srand(time(NULL));
    int random = std::rand() % 3;
    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify(Base *p)
{
    if (A *deriv = dynamic_cast<A *>(p))
    {
        (void)deriv;
        std::cout << "A" << std::endl;
    }
    else if (B *deriv = dynamic_cast<B *>(p))
    {
        (void)deriv;
        std::cout << "B" << std::endl;
    }
    else if (C *deriv = dynamic_cast<C *>(p))
    {
        (void)deriv;
        std::cout << "C" << std::endl;
    }
    else
        std::cout << "NOT KNOWN TYPE!" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << '\n';
    }
    catch (...)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "B" << '\n';
        }
        catch (...)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "C" << '\n';
            }
            catch (...)
            {
                std::cerr << "couldn't cast unkown type !" << '\n';
            }
        }
    }
}