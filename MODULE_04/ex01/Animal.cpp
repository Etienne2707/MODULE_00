#include "Animal.hpp"

Animal::Animal()
{
    std::cout << " Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal( Animal const & src ){
    std::cout << "Animal Copy constructeur called" << std::endl;
    *this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
    std::cout << "Animal Assignment operator called" << std::endl;
    this->type = rhs.getType();
    return *this;
}

void    Animal::makeSound(void) const
{
    std::cout << "Wouarrr" << std::endl;
}

std::string const &Animal::getType(void) const
{
    return(this->type);
}