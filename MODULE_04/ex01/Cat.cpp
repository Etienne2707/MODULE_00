#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete(this->brain);
}

Cat::Cat(Cat const & src ){

	this->type = src.getType();
	this->brain = new Brain();
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	this->brain = new Brain();
	return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuu Miaouuu !! " << std::endl;
}

Brain* Cat::setBrain(void)
{
    return(this->brain);
}