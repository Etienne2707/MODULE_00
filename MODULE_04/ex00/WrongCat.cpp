#include "Wrongcat.hpp"

Wrongcat::Wrongcat()
{
    std::cout << " Wrongcat Default constructor called" << std::endl;
    this->type = "Wrongcat";
}

Wrongcat::~Wrongcat()
{
    std::cout << "Wrongcat Destructor called" << std::endl;
}

Wrongcat::Wrongcat( Wrongcat const & src ){
    std::cout << "Wrongcat Copy constructeur called" << std::endl;
    *this = src;
}

Wrongcat & Wrongcat::operator=(Wrongcat const & rhs)
{
    std::cout << "Wrongcat Assignment operator called" << std::endl;
    this->type = rhs.getType();
    return *this;
}

void    Wrongcat::makeSound(void) const
{
    std::cout << "Miaouuuu Miaouuu !! " << std::endl;
}