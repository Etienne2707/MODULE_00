#include "Wronganimal.hpp"

Wronganimal::Wronganimal()
{
    std::cout << " Wronganimal Default constructor called" << std::endl;
}

Wronganimal::~Wronganimal()
{
    std::cout << "Wronganimal Destructor called" << std::endl;
}

Wronganimal::Wronganimal( Wronganimal const & src ){
    std::cout << "Wronganimal Copy constructeur called" << std::endl;
    *this = src;
}

Wronganimal & Wronganimal::operator=(Wronganimal const & rhs)
{
    std::cout << "Wronganimal Assignment operator called" << std::endl;
    this->type = rhs.getType();
    return *this;
}

void    Wronganimal::makeSound(void) const
{
    std::cout << "Wouarrr" << std::endl;
}

std::string const &Wronganimal::getType(void) const
{
    return(this->type);
}