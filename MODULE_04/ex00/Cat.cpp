#include "Cat.hpp"

Cat::Cat()
{
    std::cout << " Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat( Cat const & src ){
    std::cout << "Cat Copy constructeur called" << std::endl;
    *this = src;
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat Assignment operator called" << std::endl;
    this->type = rhs.getType();
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuu Miaouuu !! " << std::endl;
}