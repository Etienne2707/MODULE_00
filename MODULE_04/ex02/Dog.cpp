#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete(this->brain);
}

Dog::Dog(Dog const & src ){

	this->type = src.getType();
	this->brain = new Brain();
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	this->brain = new Brain();
	return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woufff Woufff !! " << std::endl;
}

Brain* Dog::setBrain(void)
{
    return(this->brain);
}