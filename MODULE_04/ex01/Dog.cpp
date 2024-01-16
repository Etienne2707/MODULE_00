#include "Dog.hpp"

Dog::Dog()
{
    std::cout << " Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete(this->brain);
}

Dog::Dog( Dog const & src ){
    std::cout << "Dog Copy constructeur called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog Assignment operator called" << std::endl;
    this->type = rhs.getType();
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woufff Woufff !! " << std::endl;
}